#ifndef OSGGL3UTILITY_H
#define OSGGL3UTILITY_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/Program>

#include "GL3Extensions"
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>
namespace osgMG{

/////custom image to manage readback from texture
//	class OSGMULTIGRID_EXPORT CustomImage :public osg::Image{
//
//   /** same as osg::Image but correct the read back behavior:
//   *hack 1D->2d->3d->cubemap priority scheme to 3d->2d->1d->cubemap
//        kind of dirty and restrict to my use case (I have 2D and 1D texture binding ON so the function read back 2D as 1D Image)
//        (my advice would be to add the texture binding as a parameter (the function is only used in osgconv) )
//   *Don't dirty image at the end (avoid a lot of rendering bug)*/
//   virtual void readImageFromCurrentTexture(unsigned int contextID, bool copyMipMapsIfAvailable, GLenum type = GL_UNSIGNED_BYTE, unsigned int face = 0);
//
//   };



	class OSGMULTIGRID_EXPORT GeometryGenerator :public osg::Geometry{
	protected:
		class OSGMULTIGRID_EXPORT InitGeneratorData{
		public:
			osg::GLExtensions* ext;
			short currentbuff;//ping pong
		};


	public:
		GeometryGenerator();
		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		GeometryGenerator(const GeometryGenerator& geometry, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
		~GeometryGenerator();

		inline void setGeneratorProgram(osg::Program *p){ _generatorProgram = p; getOrCreateStateSet()->setAttribute(p); }
		void setOutputBufferMaxSize(int);


		//hack
		///explicitly said that buffer is ready (use carefully on sync)
		virtual void SwapPingPongBuffer(){
			if (_renderData->currentbuff == 0)_renderData->currentbuff = 1;
			else _renderData->currentbuff = 0;

		}

		//just for friend:/
		//void 	frienddrawImplementation (osg::RenderInfo &renderInfo)const{drawImplementation(renderInfo);}
		//endhack

		osg::ref_ptr<osg::Vec4Array>  _vAry;//dummy client side output :/
		void setOutputVaryingName(std::string s){ _generatedbufferVaryingName = s; }

		//inline
		osg::VertexBufferObject* getGeneratedBuffer(){
			return _generatedbuffer[_renderData->currentbuff];
		}
		osg::VertexBufferObject* getGeneratedBackBuffer(){
			return _generatedbuffer[(_renderData->currentbuff + 1) % 2];
		}

		//	inline void setOutputGeometry(osg::Geometry*g){genbuffer=g->getOrCreateVertexBufferObject();})
	protected:
		osg::Program * _generatorProgram;
		std::string _generatedbufferVaryingName;
		InitGeneratorData * _renderData;
		osg::VertexBufferObject* _generatedbuffer[2];

		virtual void 	drawImplementation(osg::RenderInfo &renderInfo)const;
		///rebuild program if needed and initiate transformfeedback
		virtual void 	predrawImplementation(osg::RenderInfo &renderInfo)const;
		///end transform feedback
		virtual void 	postdrawImplementation(osg::RenderInfo &renderInfo)const;

	};
	/*IVE plug should be cool as Registry::addReaderWriter(ReaderWriter* rw)
	namespace miv{
	class OSGMULTIGRID_EXPORT osgOctreeVolume : public osgOctreeVolume, public ReadWrite {
	public:
	void write(DataOutputStream* out){
	ive::Texture3D::write(out);}
	void read(DataInputStream* in){
	ive::Texture3D::read(in);}
	};
	}
	*/
	//Async Feedback + query
	class OSGMULTIGRID_EXPORT SynchronizedGeometryGenerator :public GeometryGenerator{
	protected:
		class OSGMULTIGRID_EXPORT InitQuery{
		public:
			//resuested by default in order not make consumers starve
			InitQuery() :ext(0), queryid(0), queryresult(0), currentqueryresult(0), queryresultavailable(0), waitingquery(false), queryrequested(true){};
			void Init(GLuint contextID);
			osg::GLExtensions* ext;
			GLuint queryid;
			GLuint queryresult;
			GLuint currentqueryresult;
			GLint queryresultavailable;//result is avalaible
			bool waitingquery;//query waiting gpu result
			bool  queryrequested;//query is requested by user

		};
	public:
		SynchronizedGeometryGenerator() :GeometryGenerator(){
			_querystuff = new InitQuery();
		}
		virtual void SwapPingPongBuffer(){
			GeometryGenerator::SwapPingPongBuffer();
			_querystuff->currentqueryresult = _querystuff->queryresult;
		}
		void setActive(bool b){ _querystuff->queryrequested = b; }
		//is this generation active
		bool isActive(){ return _querystuff->queryrequested; }

		bool isDone(){ return !_querystuff->waitingquery; }

		/*GLuint getLastQueryResult(){
		return _querystuff->currentqueryresults;
		}*/
		/*void setOctreeMapProvider(osgOctreeSplitCollapseChecker*ocpingpongp){
			_mapprovider=ocpingpongp;
			}*/
		inline GLuint getNumPrimitivesGenerated()const { return _querystuff->currentqueryresult; }
		inline GLuint getNumPrimitivesGeneratedBackBuffer()const { return _querystuff->queryresult; }
	protected:
		//	osgOctreeSplitCollapseChecker* _mapprovider;
		InitQuery * _querystuff;
		//	bool _tobeprocessed;
		///rebuild program & query if needed and initiate transformfeedback and query
		///+do the drawing if tobeprocessed and wait for answer on next frame
		virtual void 	drawImplementation(osg::RenderInfo &renderInfo)const;


	};



	///class OSGMULTIGRID_EXPORT synchronizing registered SynchronizedGeometryGeneratorS
	class OSGMULTIGRID_EXPORT GeometryGeneratorSynchronizator :public osg::Geometry{// GeometryGenerator{

	public:

		GeometryGeneratorSynchronizator() :osg::Geometry(), _minRBDIndex(0), _maxRBDIndex(0){
			setUseVertexBufferObjects(true);
		}
		~GeometryGeneratorSynchronizator(){}



		inline void setRenderBinDetailsIndexRange(int i, int j){
			_maxRBDIndex = j;
			_minRBDIndex = i;

		}

		void addQueryGeometryToSynchronize(SynchronizedGeometryGenerator* sg);


	protected:
		GLint _minRBDIndex, _maxRBDIndex;//RenderBinDetails range

		std::vector<SynchronizedGeometryGenerator*> _synchronizedquerygeoms;

		///stuff to do at sync
		virtual void 	syncStuff(osg::RenderInfo &renderInfo)const = 0;

		///when all registred ok do synstuff
		virtual void 	drawImplementation(osg::RenderInfo &renderInfo)const;
	};




	class OSGMULTIGRID_EXPORT FBOWritter :public osg::Geometry{

	public:
		FBOWritter();
		//osgOctreeRenderSurfaceManager*rs);
		~FBOWritter();

		// osg::ref_ptr<osg::Program> _PassProgram;
		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		FBOWritter(const FBOWritter& geometry, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);

		///add octree data sharing the same scheme
		///(be carefull with it when dont want to overload the stuff because we maintain a temporary simulation octree...)
		void addOutputTexture(osg::Texture3D*oc);
		void removeOutputTexture(osg::Texture3D*oc);

		inline unsigned int getNumOutputTextures()const { return _outtextures.size(); }
		inline osg::Texture3D * getOutputTexture(int i)const { return _outtextures[i]; }
		///
		void resetOutputTexture();
		void setActive(bool b){ _renderData->renderneeded = b; }
		//is this generation active
		bool isActive(){ return _renderData->renderneeded; }
	protected:
		osg::ref_ptr<osg::FrameBufferObject> _fbo;

		std::vector<osg::ref_ptr<osg::Texture3D> > _outtextures;
		class OSGMULTIGRID_EXPORT FBOHack{
		public:
			osg::GLExtensions* ext;
			
			mutable GLuint _rawfbo;
			mutable bool renderneeded;
			mutable GLuint prID;//Program id to easyly bind uniform
			mutable GLuint VAO;//aux
		};
		FBOHack* _renderData;
		virtual void 	drawImplementation(osg::RenderInfo &renderInfo)const{
			predrawImplementation(renderInfo);
			osg::Geometry::drawImplementation(renderInfo);
			postdrawImplementation(renderInfo);
		}
		///fbo setup and bind
		virtual void 	predrawImplementation(osg::RenderInfo &renderInfo)const;
		//fbho unbind
		virtual void 	postdrawImplementation(osg::RenderInfo &renderInfo)const;
	};

	///Node used in order to readback image from texture
	///Put it where you want it removes itself after one shot
	class OSGMULTIGRID_EXPORT ImageReadBackNode :public osg::Geode{

	public:
		META_Node(osgMG, ImageReadBackNode);
		ImageReadBackNode();
		ImageReadBackNode(const ImageReadBackNode& rhs, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
		ImageReadBackNode(osg::Texture3D * tex) :ImageReadBackNode(){
			setTexture(tex);
		}
		void setTexture(osg::Texture3D * tex);


	};
		//Uniform embedding a pingpong Texture Unit
		class OSGMULTIGRID_EXPORT TextureAutoUniform :public osg::Uniform{
			int _reservedTUs[2];
		short _active;
		std::vector<osg::ref_ptr<osg::Uniform> > _attacheduniforms;
	public:
		TextureAutoUniform() :osg::Uniform(){
			setType(osg::Uniform::SAMPLER_3D);
		}
		TextureAutoUniform(const char*name, int value) :osg::Uniform(){ setType(osg::Uniform::SAMPLER_3D); setName(name); set(value); }
		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		TextureAutoUniform(const TextureAutoUniform& rhs, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);

		META_Object(osgMG, TextureAutoUniform);

		///If an uniform has to have the same value but have different name
		void addPassiveUniform(osg::Uniform *u){ _attacheduniforms.push_back(u); u->set(_reservedTUs[_active]); }
		osg::Uniform * getPassiveUniform(unsigned int i)const{ return  _attacheduniforms[i]; }
		unsigned int getNumPassiveUniforms()const { return _attacheduniforms.size(); }
		void setReservedActives(int a, int b){
			_reservedTUs[0] = a; _reservedTUs[1] = b;
			_active = 0;
			this->set(_reservedTUs[_active]);
		}

		inline int getReservedActive(int i)const { return _reservedTUs[i]; }
		/*void setPingPongTextures(osg::Texture a,osg::Texture b){
			_pingpong[0]=a;_pingpong[1]=b;

			}*/
		void swapUniforms(){
			_active = (_active + 1) % 2;
			this->set(_reservedTUs[_active]);
		}

		bool set(int i){


			for (std::vector<osg::ref_ptr<osg::Uniform> >::iterator it = _attacheduniforms.begin(); it != _attacheduniforms.end(); it++)
				(*it)->set(i);
			return osg::Uniform::set(i);
		}


	};
}
#endif

#ifndef osgOctreeRenderSurfaceManagerDIYT_H
#define osgOctreeRenderSurfaceManagerDIYT_H 1
#include "Export.h"

#include "osgGL3Utility.h"

#include "osgOctreeBgDataUpdator.h"
#define HARDMAXOCTREELEVEL 10


namespace osgMG{
//class OSGMULTIGRID_EXPORT osgOctreeBgDataUpdator;
class OSGMULTIGRID_EXPORT osgOctreeReductor;class OSGMULTIGRID_EXPORT osgOctreeVolume;
///geometry managing current rendersurface for each level of the octree
class OSGMULTIGRID_EXPORT osgOctreeRenderSurfaceManagerDIY :public osg::Geometry{

protected:
	class OSGMULTIGRID_EXPORT InitQueries{
	public:
		//resuested by default in order not make consumers starve
		InitQueries():ext(0),queryrequested(true){

			for(int i=0;i<HARDMAXOCTREELEVEL;i++){
				queryid[i]=0;
				queryresult[i]=0;
				//	currentqueryresult[i]=0;
				queryresultavailable[i]=0;
				waitingquery[i]=false;
			}
		};
		void Init(GLuint contextID);
	//	osg::GLExtensions* extquery;

		GLuint queryid[HARDMAXOCTREELEVEL];
		GLuint queryresult[HARDMAXOCTREELEVEL];
		GLuint currentqueryresult[HARDMAXOCTREELEVEL];
		GLint queryresultavailable[HARDMAXOCTREELEVEL];//result is avalaible
		bool waitingquery[HARDMAXOCTREELEVEL];//query waiting gpu result
		bool  queryrequested;//query is requested by user
		//generated buffer map
		osg::GLExtensions *ext; 
		GLuint prID;
		bool _allfinished;
	};
	InitQueries * _queriesStuff;
	osg::ref_ptr<osg::VertexBufferObject> _generatedPingPong[2];//generated buffers ping pong
	mutable GLuint _generatedPingPongVAO[2];//managed VAO associated to PingPongBuffer mutable cause init in drawimpl
	short _currentpingpongbuffer;
	//buffer map
	GLuint _renderSurfaceOffsets[HARDMAXOCTREELEVEL];// /4->convert to GL_QUADS primitive offset
	GLuint _currentRenderSurfaceSizes[HARDMAXOCTREELEVEL];//swapped  when buffer swap;
public:
	osgOctreeRenderSurfaceManagerDIY() ;
	osgOctreeRenderSurfaceManagerDIY(int maxblocksize,osgOctreeVolume*ocdata);
	~osgOctreeRenderSurfaceManagerDIY();
/** Copy constructor using CopyOp to manage deep vs shallow copy. */
	osgOctreeRenderSurfaceManagerDIY(const osgOctreeRenderSurfaceManagerDIY& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);

	void setMaxBlockSize(int i){

	}
	void setManagedVolumeData(osgOctreeVolume*ocdata){

	}

	osg::ref_ptr<osgOctreeVolume> _ocdata;
	osg::ref_ptr<osg::Program> _RenderSurfaceFilterProgram,_EntropyReductionProgram,_SplitCollapsePolicyProgram, _ApplyNewSchemeProgram;
	osg::ref_ptr<osg::Texture3D> _octreeMapPong,_octreeMapPing,
		_minreductionMap,_maxreductionMap;
	
	inline const GLuint  getBufferOffset(int i)const {return _renderSurfaceOffsets[i]/4;}
	///ping accessor
	inline osg::VertexBufferObject* getRenderSurface()const {return  _generatedPingPong[_currentpingpongbuffer].get();}
	inline const GLuint & getRenderSurfaceVAO()const {return _generatedPingPongVAO[_currentpingpongbuffer];}
	inline  const GLuint getCurrentBufferSize(int i){return _currentRenderSurfaceSizes[i];}
	///pong accessor
	inline osg::VertexBufferObject* getBackBufferRenderSurface()const {return  _generatedPingPong[(_currentpingpongbuffer+1)%2].get();}
		inline const GLuint & getBackBufferRenderSurfaceVAO()const {return  _generatedPingPongVAO[(_currentpingpongbuffer+1)%2];}
	inline  const GLuint getBackBufferSize(int i){return _queriesStuff->queryresult[i];}

	inline osgOctreeVolume* getObservedOctree()const{return _ocdata;}
	//inline osg::VertexBufferObject* getGeneratedBuffer(){return _generatedbuffer.get();}
	//	inline void setOutputGeometry(osg::Geometry*g){genbuffer=g->getOrCreateVertexBufferObject();}

	//(called after entropy+octreemap update)
	void newLaunchRequested();

	void SwapAllGeneratorRS();
	//use it to retrieve generated buffers
	//	SynchronizedGeometryGenerator*	getBufferGenerator(int i){return _synchronizedquerygeoms[i];}
	inline void setActive(bool b){_isactive->value=b;}
	inline bool isActive(){return  _isactive->value;}
	inline bool queriesFinished()const {return  _queriesStuff->_allfinished;}
	void setDataUpdator(osgOctreeBgDataUpdator* up);
	osgOctreeBgDataUpdator*  getDataUpdator()const {return _dataupdator;};
	GLuint getBlockSize(){return _maxblocksize;}
protected:
	GLuint _maxblocksize;
	osg::ref_ptr<osg::Program> _generatorProgram;

	class OSGMULTIGRID_EXPORT Tactive{
	public:
		bool operator()(){return value;}
		bool value;


	};
	Tactive *_isactive;

	osgOctreeBgDataUpdator * _dataupdator;//component to lauch when sync is ok
	///swap exposed render surface
	//	virtual void 	syncStuff (osg::RenderInfo &renderInfo)const;

	void createPrograms();

	//std::vector< osg::ref_ptr<GeometryGenerator> > _perlevelgeometries;
	virtual void 	drawImplementation(osg::RenderInfo &renderInfo)const;
	virtual void 	compileGLObjects(osg::RenderInfo &renderInfo)const;
	/*virtual void 	predrawImplementation (osg::RenderInfo &renderInfo)const;
	virtual void 	postdrawImplementation (osg::RenderInfo &renderInfo)const;*/
};


///BEATIFULBUTBUGGY VERSION
class OSGMULTIGRID_EXPORT osgOctreeRenderSurfaceManager :public GeometryGeneratorSynchronizator{
public:
	osgOctreeRenderSurfaceManager(int maxblocksize,osgOctreeVolume*ocdata);
	~osgOctreeRenderSurfaceManager();
	osgOctreeVolume*_ocdata;
	osg::ref_ptr<osg::Program> _RenderSurfaceFilterProgram,_EntropyReductionProgram,_SplitCollapsePolicyProgram, _ApplyNewSchemeProgram;
	osg::ref_ptr<osg::Texture3D> _octreeMapPong,_octreeMapPing,
		_minreductionMap,_maxreductionMap;
	/** Copy constructor using CopyOp to manage deep vs shallow copy. */
	osgOctreeRenderSurfaceManager(const osgOctreeRenderSurfaceManager& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);


	inline osg::VertexBufferObject* getRenderSurface(int i)const {return _synchronizedquerygeoms[i]->getGeneratedBuffer();}


	inline osg::VertexBufferObject* getBackBufferRenderSurface(int i)const {return _synchronizedquerygeoms[i]->getGeneratedBackBuffer();}

	inline osgOctreeVolume* getObservedOctree()const{return _ocdata;}
	//inline osg::VertexBufferObject* getGeneratedBuffer(){return _generatedbuffer.get();}
	//	inline void setOutputGeometry(osg::Geometry*g){genbuffer=g->getOrCreateVertexBufferObject();}

	//(called after entropy+octreemap update)
	void newLaunchRequested();

	void SwapAllGeneratorRS(){
		for(std::vector< SynchronizedGeometryGenerator*>::iterator i=_synchronizedquerygeoms.begin();i!=_synchronizedquerygeoms.end();i++)
			(*i)->SwapPingPongBuffer();
	}
	//use it to retrieve generated buffers
	SynchronizedGeometryGenerator*	getBufferGenerator(int i){return _synchronizedquerygeoms[i];}
	inline void setActive(bool b){_isactive->value=b;}
	inline bool isActive(){return  _isactive->value;}
	void setDataUpdator(osgOctreeBgDataUpdator* up);
	GLuint getBlockSize(){return _maxblocksize;}
protected:
	GLuint _maxblocksize;
	class OSGMULTIGRID_EXPORT Tactive{
	public:
		bool operator()(){return value;}
		bool value;


	};
	Tactive *_isactive;

	osgOctreeBgDataUpdator * _dataupdator;//component to lauch when sync is ok
	///swap exposed render surface
	virtual void 	syncStuff (osg::RenderInfo &renderInfo)const;

	void createPrograms();

	//std::vector< osg::ref_ptr<GeometryGenerator> > _perlevelgeometries;
	virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;
	/*virtual void 	predrawImplementation (osg::RenderInfo &renderInfo)const;
	virtual void 	postdrawImplementation (osg::RenderInfo &renderInfo)const;*/
};
}
#endif

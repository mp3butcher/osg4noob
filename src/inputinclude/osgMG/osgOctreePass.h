#ifndef osgOctreeTTPassT_H
#define osgOctreeTTPassT_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Program>

#include "osgGL3Utility.h"
#include <osg/FrameBufferObject>
#include "OSGVolumetest.h"
#include <osg/ref_ptr>
#include <iostream>
namespace osgMG{
	//class OSGMULTIGRID_EXPORT RenderSurfaceManagmentGeode;
	//class OSGMULTIGRID_EXPORT osgOctreeReductor;
	//class OSGMULTIGRID_EXPORT osgOctreeSplitCollapseChecker;
	class OSGMULTIGRID_EXPORT osgOctreePass :public FBOWritter{
	public:

		osgOctreePass();
		virtual Object* cloneType() const { return new osgOctreePass(); }
		virtual Object* clone(const osg::CopyOp& copyop) const { return new osgOctreePass(*this, copyop); }
		virtual bool isSameKindAs(const Object* obj) const { return dynamic_cast<const osgOctreePass*>(obj) != NULL; }
		virtual const char* libraryName() const { return "osgMG"; }
		virtual const char* className() const { return "osgOctreePass"; }



		osgOctreePass(const osgOctreePass& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
		~osgOctreePass();

	///create an octree pass whose RenderSurface is managed by entropyBasedRSUpdator
		//@argument entropyBasedRSUpdator: rs updater
		osgOctreePass(RenderSurfaceManagmentGeode* entropyBasedRSUpdator);


		void setRenderSurfaceUpdator(RenderSurfaceManagmentGeode*entropyBasedRSUpdator);
		const RenderSurfaceManagmentGeode* getRenderSurfaceUpdator()const{ return _entropyBasedRSUpdator; }

		void setFragmentProgram( osg::Shader*);
		inline const osg::Shader*getFragmentProgram()const{ return _fragmentshader.get(); }
	protected:
		RenderSurfaceManagmentGeode*_entropyBasedRSUpdator;
		//osgOctreeSplitCollapseChecker *_mapprovider;
		//bool _active;//flag to set in order to draw something
		//osgOctreeReductor * _red;
		//osgOctreeRenderSurfaceManagerDIY * _RSM;
		//osg::ref_ptr<osg::FrameBufferObject> _otherfbos;//should be used for several lod
		osg::ref_ptr< osg::Program	>_OctreePassProgram;
		osg::ref_ptr<osg::Shader>	_fragmentshader;
		virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;

	};

	class OSGMULTIGRID_EXPORT osgOctreeMultiPass:public  osgOctreePass{
		//class OSGMULTIGRID_EXPORT hackuniform{public:
		//	osg::Uniform * _auto;
		//
		//	GLuint location;
		//};
		//hackuniform * _hackUniform;
	public:
		osgOctreeMultiPass();
		virtual Object* cloneType() const { return new osgOctreeMultiPass(); }
		virtual Object* clone(const osg::CopyOp& copyop) const { return new osgOctreeMultiPass(*this, copyop); }
		virtual bool isSameKindAs(const Object* obj) const { return dynamic_cast<const osgOctreeMultiPass*>(obj) != NULL; }
		virtual const char* libraryName() const { return "osgMG"; }
		virtual const char* className() const { return "osgOctreeMultiPass"; }



		osgOctreeMultiPass(const osgOctreeMultiPass& geometry, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
		///create an octree pass whose RenderSurface is managed by entropyBasedRSUpdator
		//@argument entropyBasedRSUpdator: rs updater
		osgOctreeMultiPass(RenderSurfaceManagmentGeode* entropyBasedRSUpdator);


		inline 	void setHalfNbPasses(const unsigned int nb){ _hnbpass = nb; }
	inline	  unsigned int  getHalfNbPasses()const{ return _hnbpass; }
		inline void addPingPongUniform(TextureAutoUniform*tauto){_pingponguniforms.push_back(tauto);}

		void addPingPongOutput(osg::Texture3D*t1,osg::Texture3D*t2){
			_pingpong[1].push_back(t2);
			_pingpong[0].push_back(t1);
		}

		unsigned int getNumPingPongOutputs()const {
			return _pingpong[0].size();
		}

		const osg::Texture3D*getPingOutput(int i)const { return _pingpong[0][i]; }
		const osg::Texture3D*getPongOutput(int i)const { return _pingpong[1][i]; }
	protected:
		std::vector<TextureAutoUniform*> _pingponguniforms;
		std::vector<	osg::Texture3D *> _pingpong[2];
		mutable unsigned int _hnbpass;//
		virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;
	};


	/** Multigrid V cycle scheme
	*/
	class OSGMULTIGRID_EXPORT osgOctreeVCycle:public  osgOctreeMultiPass{
		//class OSGMULTIGRID_EXPORT hackuniform{public:
		//	osg::Uniform * _auto;
		//
		//	GLuint location;
		//};
		//hackuniform * _hackUniform;
	public:
		osgOctreeVCycle();
		virtual Object* cloneType() const { return new osgOctreeMultiPass(); }
		virtual Object* clone(const osg::CopyOp& copyop) const { return new osgOctreeMultiPass(*this, copyop); }
		virtual bool isSameKindAs(const Object* obj) const { return dynamic_cast<const osgOctreeMultiPass*>(obj) != NULL; }
		virtual const char* libraryName() const { return "osgMG"; }
		virtual const char* className() const { return "osgOctreeMultiPass"; }



		osgOctreeVCycle(const osgOctreeVCycle& geometry, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
		///create an octree pass whose RenderSurface is managed by entropyBasedRSUpdator
		//@argument entropyBasedRSUpdator: rs updater
		osgOctreeVCycle(RenderSurfaceManagmentGeode* entropyBasedRSUpdator);


/**HalfNbPass is use as nb pass during descendant (top/down)*/
/**HalfNbPassesAscendant is the nb pass during ascendant passes (bottom/up)*/
	inline 	void setHalfNbPassesAscendant(const unsigned int nb){ _hnbpass_asc = nb; }
	inline	  unsigned int  getHalfNbPassesAscendant()const{ return _hnbpass_asc; }
	protected:
		//mutable unsigned int _hnbpass;// nb pass desc
		mutable unsigned int _hnbpass_asc;//nb pass asc
		virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;
	};
}
#endif

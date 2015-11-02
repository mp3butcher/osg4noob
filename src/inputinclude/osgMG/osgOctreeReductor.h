#ifndef osgOctreeReductor_H
#define osgOctreeReductor_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Program>

#include "osgOctreeSplitCollapseChecker.h"
#include "osgGL3Utility.h"
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>
#include <iostream>

///This class OSGMULTIGRID_EXPORT is in charge of the octree map maintenance 
///On demand it applies an entropy based policy 
///then split/collapse registered octree data 

///and finally launch and update of the rendersurface
namespace osgMG{
	 class   osgOctreeRenderSurfaceManagerDIY;
	class OSGMULTIGRID_EXPORT osgOctreeReductor:public FBOWritter{
		osgOctreeRenderSurfaceManagerDIY* _RSM;
	public:
		osgOctreeReductor();
		~osgOctreeReductor();
		//inline void setOctreeMapPingPongTexture(osg::Texture3D*t1,osg::Texture3D*t2){_ocmap[1]=t2;		_ocmap[0]=t1;	}
		void setOutputReductionMinMaxTextures(osg::Texture3D*t1,osg::Texture3D*t2);
		void setMapProvider(osgOctreeSplitCollapseChecker*s);
		// osg::ref_ptr<osg::Program> _PassProgram;
		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		osgOctreeReductor(const osgOctreeReductor& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
		void setRenderSurfaceProvider(osgOctreeRenderSurfaceManagerDIY*rs);


		//	inline void setOutputGeometry(osg::Geometry*g){genbuffer=g->getOrCreateVertexBufferObject();}


	protected:
		osg::ref_ptr<osgOctreeSplitCollapseChecker> _mapprovider;//map maintainer ptr
		//bool _active;//flag to set in order to draw something
		osg::ref_ptr<osg::Texture3D> _minreductionmap, _maxreductionmap;// [2];//min/max
		osg::ref_ptr< osg::Program	>_EntropyReductionProgram ;
		std::vector<osg::ref_ptr<osg::FrameBufferObject> > _otherfbos;//should be used for several lod



		virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;

	};

}
#endif
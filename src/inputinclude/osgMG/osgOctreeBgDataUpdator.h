#ifndef osgOctreeBgDataUpdatorT_H
#define osgOctreeBgDataUpdatorT_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Program>

#include "osgGL3Utility.h"
#include "osgMultiGrid.h"
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>
#include <iostream>
namespace osgMG{
class OSGMULTIGRID_EXPORT osgOctreeRenderSurfaceManagerDIY;
class OSGMULTIGRID_EXPORT osgOctreeReductor;
class OSGMULTIGRID_EXPORT osgOctreeSplitCollapseChecker;
class OSGMULTIGRID_EXPORT osgOctreeBgDataUpdator :public FBOWritter{
public:
	osgOctreeBgDataUpdator();
	osgOctreeBgDataUpdator(const osgOctreeBgDataUpdator& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
	~osgOctreeBgDataUpdator();
	void setRenderSurfaceProvider(osgOctreeRenderSurfaceManagerDIY*rs){_RSM=rs;}
	void setOctreeMapProvider(osgOctreeSplitCollapseChecker*rs);
	void setReductor4Relaunch(osgOctreeReductor * reductor );
	//setter to swap ping pong stuffat the and of the pass...(TODO use acallback?)

	void setRenderSurfaceUpdator(osgOctreeRenderSurfaceManagerDIY* rsm){_RSM=rsm;}
	void  swapstep();

	///add octree data sharing the same scheme
	///(be carefull with it when dont want to overload the stuff because we maintain a temporary simulation octree...)
	void addOctreeData(GLuint activetu,osgOctreeVolume*oc){
	addOutputTexture(oc);
	_activetus.push_back(activetu);
	   getOrCreateStateSet()->
		   setTextureAttributeAndModes(activetu, oc, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);

	}

	inline osgOctreeVolume* getOctreeData(int i)const{ return (osgOctreeVolume*)getOutputTexture(i); }
	inline unsigned int getActive4OctreeData(int i)const{ return _activetus[i]; }
	inline unsigned int getNumOctreeData()const{ return getNumOutputTextures(); }

protected:
std::vector<GLuint> _activetus;
	osgOctreeSplitCollapseChecker *_mapprovider;
	bool _active;//flag to set in order to draw something
	osgOctreeReductor * _red;
	osgOctreeRenderSurfaceManagerDIY * _RSM;
	osg::ref_ptr<osg::FrameBufferObject> _otherfbos;//should be used for several lod
	osg::ref_ptr< osg::Program	>_UpdateOctreeDataProgram;

	virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;

};
}


#endif

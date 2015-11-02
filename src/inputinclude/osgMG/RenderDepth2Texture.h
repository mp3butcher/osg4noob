
#ifndef osgRDEPTHTT_H
#define osgRDEPTHTT_H 1
#include "Export.h"

#include <osg/Texture2D>
#include <osg/Group>
#include <osg/Uniform>


#include <osg/Camera>
namespace osgMG{

	///Dummy group in order to set Camera Depth Buffer attachement during culling
	///Do not use it under your RTT Camera Node cause it surely overide your own depth buffer attachement
	class OSGMULTIGRID_EXPORT RenderDepth2Texture : public osg::Group{

	public:

		//addVirtualChildren(){}

		osg::ref_ptr<osg::Group> VerticesAttribGenerationGroup;
		osg::ref_ptr<osg::Group> InstancingGroup;
		 
		RenderDepth2Texture();
		META_Node(osgMG, RenderDepth2Texture);
		/** Copy constructor using CopyOp to manage deep vs shallow copy.*/
		RenderDepth2Texture(const RenderDepth2Texture&, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
		///  child will be DEEP Copied in order to hack its stateset
		//	virtual bool addChild(Node *child);
		//void setOutputTexture(osg::Texture3D *tex){ _voxels = tex; }

		///transformation for children to fit the normalized voxel space (-1,1)
		///another way would be to specified voxelspace transform in local coordinates

		inline osg::Texture2D*getDepthTexture()const{ return _depthtexture; }
		inline osg::Uniform*getDepthResolutionUniform()const{ return _rdx; }
		void setRasterizationResolution(const osg::Vec2ui&);
		const osg::Vec2ui & getRasterizationResolution()const { return _resolution; }
		osg::ref_ptr<osg::Texture2D> _depthtexture;
		osg::Vec2ui _resolution;
		virtual void traverse(osg::NodeVisitor &nv);
		/*osg::Matrixf _mat;
		bool _dirty;*/
		osg::ref_ptr<osg::Uniform > _rdx;//vec3 but just using z component
	};
	/*
	///rasterize to a single Texture
	class OSGMULTIGRID_EXPORT VoxelizeGeometry: public FBOWritter
	{
	VoxelizeGeometry():FBOWritter(){

	///setup StateSEt
	osg::StateSet * ss=getOrCreateStateSet();
	///draw it before others
	ss->setRenderBinDetails(-1,"RenderBin");
	///setup rastrisation shaders

	}
	virtual void addOutputTexture(osg::Texture3D*oc){
	FBOWritter::addOutputTexture(oc);
	///add an Instanced primitives set
	for(int i=0;i<getNumPrimitiveSets ();i++)
	this->getPrimitiveSet(i)->setNumInstances(oc->d());

	}
	};

	*/
}
#endif

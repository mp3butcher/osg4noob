#ifndef MYRAYTRACEDTECKs_h
#define MYRAYTRACEDTECKs_h 1
#include "Export.h"
#include "OSGVolumetest.h"
#include "RenderDepth2Texture.h"
#include <osgVolume/RayTracedTechnique>
#include <osg/MatrixTransform>
#include <osg/Texture3D>

#include <osg/TransferFunction>
namespace osgMG{
	class RenderSurfaceManagmentGeode;
	class osgOctreeSplitCollapseChecker;


	class OSGMULTIGRID_EXPORT myRayTracedTechnique : public osgVolume::RayTracedTechnique
	{
	public:
		enum ShadingModel
		{
			Standard,
			Light,
			Isosurface,
			MaximumIntensityProjection
		};
		META_Object(osgMG, myRayTracedTechnique)
		myRayTracedTechnique(osg::Texture3D *);
		myRayTracedTechnique();
		void setTexture3D(osg::Texture3D *t);
	const 	osg::Texture3D *getTexture3D()const { return _texture3D; }
		myRayTracedTechnique(const myRayTracedTechnique&, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);

		//    META_Object(osgVolume, myRayTracedTechnique);
		virtual void init();

		//MapUpdate<EntropyPolicy>

		// void SetOctreeVisuOn(bool b);
		//osg::Uniform * getOctreeMapUniform();//{return _octreeMapUniform.get();}

		osg::Uniform * getTextureUniform(){ return _baseTextureSampler.get(); }
		osg::Uniform * getLevelUniform(){ return _levelUniform.get(); }
		osg::StateSet * getProgramStateSet(){ return _geode->getStateSet(); }
		/*virtual void update(osgUtil::UpdateVisitor* nv);

		virtual void cull(osgUtil::CullVisitor* nv);*/

		/** Clean scene graph from any terrain technique specific nodes.*/
		//virtual void cleanSceneGraph();

		///** Traverse the terrain subgraph.*/
		//virtual void traverse(osg::NodeVisitor& nv);

	protected:
		enum ShadingModel shadingModel;

		//virtual osg::Program * createProgram();
		osg::ref_ptr< osg::Program> _classicProg, _octreeProg;
		osg::ref_ptr< osg::StateSet> _volumestateset, _octreestateset;
		//osgOctreeSplitCollapseChecker *_octreeMapProvider;

		osg::ref_ptr< osg::Texture3D > _texture3D;
		osg::ref_ptr< osg::Texture3D > _octreeMap;
		osg::ref_ptr< osg::Uniform> _levelUniform,
			_baseTextureSampler;//,_octreeMapUniform ;
		virtual ~myRayTracedTechnique();
		osg::ref_ptr < osg::Geode >
			_geode;
		//osg::ref_ptr< osg::MatrixTransform> _transform ;
		osg::TransferFunction1D* _tf;
		bool _enableBlending;
	};

	class OSGMULTIGRID_EXPORT myOctreeRayTracedTechnique :public myRayTracedTechnique{

	protected:osg::ref_ptr< osg::Uniform> _depthSampler;
		osg::ref_ptr<osgMG::RenderSurfaceManagmentGeode> _octreeMapProvider;
		osg::ref_ptr<osgMG::RenderDepth2Texture> _depthtexturenode;
	public:
		META_Object(osgMG, myOctreeRayTracedTechnique)
		myOctreeRayTracedTechnique(osg::Texture3D *);
		myOctreeRayTracedTechnique() :myRayTracedTechnique(){ _octreeMapProvider = 0; };

		myOctreeRayTracedTechnique(const myOctreeRayTracedTechnique&o, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY) :myRayTracedTechnique(o, copyop){};
		virtual void init();

		const osgMG::RenderSurfaceManagmentGeode * getMapAttachment()const{ return _octreeMapProvider; }

		void setMapAttachment(osgMG::RenderSurfaceManagmentGeode * octreemaintener);//{_octreeMapProvider=octreemaintener;}

		const osgMG::RenderDepth2Texture * getRenderDepth2TextureNode()const{ return _depthtexturenode; }

		void setRenderDepth2TextureNode(osgMG::RenderDepth2Texture * octreemaintener){
			_depthtexturenode = octreemaintener;//{_octreeMapProvider=octreemaintener;}
		}

		
	};
}
#endif

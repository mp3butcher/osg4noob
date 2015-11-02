#ifndef MYRAYTRACEDTECK_h
#define MYRAYTRACEDTECK_h 1
#include "Export.h"
#include "OSGVolumetest.h"
#include "RenderDepth2Texture.h"
#include <osgVolume/MultipassTechnique>
#include <osg/MatrixTransform>
#include <osg/Texture3D>
#include <osgVolume/VolumeTechnique>

#include <osg/TransferFunction>
namespace osgMG{
	class RenderSurfaceManagmentGeode;
	class osgOctreeSplitCollapseChecker;


	class OSGMULTIGRID_EXPORT MultiPassTex3DRayTracedTechnique : public osgVolume::VolumeTechnique
	{
	public:
		enum ShadingModel
		{
			Standard,
			Light,
			Isosurface,
			MaximumIntensityProjection
		};
		META_Object(osgMG, MultiPassTex3DRayTracedTechnique)
			MultiPassTex3DRayTracedTechnique(osg::Texture3D *);
		MultiPassTex3DRayTracedTechnique();
		void setTexture3D(osg::Texture3D *t);
	const 	osg::Texture3D *getTexture3D()const { return _texture3D; }
	MultiPassTex3DRayTracedTechnique(const MultiPassTex3DRayTracedTechnique&, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);
	 
		virtual void init();
		 

		osg::Uniform * getTextureUniform(){ return _baseTextureSampler.get(); }
		osg::Uniform * getLevelUniform(){ return _levelUniform.get(); }
	//	osg::StateSet * getProgramStateSet(){ return _geode->getStateSet(); }
		osg::StateSet * getProgramStateSet(){ return _volumeRenderStateSet; }
 

		virtual void update(osgUtil::UpdateVisitor* nv);

		virtual void backfaceSubgraphCullTraversal(osgUtil::CullVisitor* cv);

		virtual void cull(osgUtil::CullVisitor* cv);

		/** Clean scene graph from any terrain technique specific nodes.*/
		virtual void cleanSceneGraph();

		/** Traverse the terrain subgraph.*/
		virtual void traverse(osg::NodeVisitor& nv);
		 
		enum RenderingMode
		{
			CUBE,
			HULL,
			CUBE_AND_HULL
		};

		RenderingMode computeRenderingMode();

		/** Container for render to texture objects used when doing multi-pass volume rendering techniques.*/
		

		/** Called from VolumeScene to create the TileData container when a multi-pass technique is being used.
		*  The TileData container caches any render to texture objects that are required. */
		/** Container for render to texture objects used when doing multi-pass volume rendering techniques.*/
		struct OSGMULTIGRID_EXPORT MultipassTileData : public osgVolume::TileData
		{
			MultipassTileData(osgUtil::CullVisitor* cv, MultiPassTex3DRayTracedTechnique* mpt);

			virtual void update(osgUtil::CullVisitor* cv);

			void setUp(osg::ref_ptr<osg::Camera>& camera, osg::ref_ptr<osg::Texture2D>& texture2D, int width, int height);


			osg::observer_ptr<MultiPassTex3DRayTracedTechnique>       multipassTechnique;
			RenderingMode                               currentRenderingMode;

			osg::ref_ptr<osg::Texture2D>                frontFaceDepthTexture;
			osg::ref_ptr<osg::Camera>                   frontFaceRttCamera;

			osg::ref_ptr<osg::Texture2D>                backFaceDepthTexture;
			osg::ref_ptr<osg::Camera>                   backFaceRttCamera;

			osg::ref_ptr<osg::Uniform>                  eyeToTileUniform;
			osg::ref_ptr<osg::Uniform>                  tileToImageUniform;
		};

		/** Called from VolumeScene to create the TileData container when a multi-pass technique is being used.
		*  The TileData container caches any render to texture objects that are required. */
		virtual osgVolume::TileData* createTileData(osgUtil::CullVisitor* cv) { return new MultipassTileData(cv, this); }
	protected:

		virtual ~MultiPassTex3DRayTracedTechnique();

		osg::ref_ptr<osg::MatrixTransform> _transform;

		typedef std::map<osgUtil::CullVisitor::Identifier*, osg::Matrix> ModelViewMatrixMap;

		OpenThreads::Mutex _mutex;
		ModelViewMatrixMap _modelViewMatrixMap;

		osg::ref_ptr<osg::StateSet> _whenMovingStateSet;
		osg::ref_ptr<osg::StateSet> _volumeRenderStateSet;

		osg::StateSet* createStateSet(osg::StateSet* statesetPrototype, osg::Program* programPrototype, osg::Shader* shaderToAdd1 = 0, osg::Shader* shaderToAdd2 = 0);

		enum ShaderMask
		{
			CUBE_SHADERS = 1,
			HULL_SHADERS = 2,
			CUBE_AND_HULL_SHADERS = 4,
			STANDARD_SHADERS = 8,
			LIT_SHADERS = 16,
			ISO_SHADERS = 32,
			MIP_SHADERS = 64,
			TF_SHADERS = 128
		};

		typedef std::map<int, osg::ref_ptr<osg::StateSet> > StateSetMap;
		StateSetMap _stateSetMap;

		osg::ref_ptr<osg::StateSet> _frontFaceStateSet;
		//virtual osg::Program * createProgram();
		osg::ref_ptr< osg::Program> _classicProg, _octreeProg;
		osg::ref_ptr< osg::StateSet> _volumestateset, _octreestateset;
		//osgOctreeSplitCollapseChecker *_octreeMapProvider;

		osg::ref_ptr< osg::Texture3D > _texture3D;
		osg::ref_ptr< osg::Texture3D > _octreeMap;
		osg::ref_ptr< osg::Uniform> _levelUniform,
			_baseTextureSampler;//,_octreeMapUniform ; 
		osg::ref_ptr < osg::Geode >
			_geode;
		//osg::ref_ptr< osg::MatrixTransform> _transform ;
		osg::TransferFunction1D* _tf;
		bool _enableBlending;
	};

	class OSGMULTIGRID_EXPORT  OctreeMultiPassTex3DRayTracedTechnique :public MultiPassTex3DRayTracedTechnique{

	protected:osg::ref_ptr< osg::Uniform> _depthSampler;
		osg::ref_ptr<osgMG::RenderSurfaceManagmentGeode> _octreeMapProvider;
		osg::ref_ptr<osgMG::RenderDepth2Texture> _depthtexturenode;
	public:
		META_Object(osgMG, OctreeMultiPassTex3DRayTracedTechnique)
			OctreeMultiPassTex3DRayTracedTechnique(osg::Texture3D *);
		OctreeMultiPassTex3DRayTracedTechnique() :MultiPassTex3DRayTracedTechnique(){ _octreeMapProvider = 0; };

		OctreeMultiPassTex3DRayTracedTechnique(const OctreeMultiPassTex3DRayTracedTechnique&o, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY) :MultiPassTex3DRayTracedTechnique(o, copyop){};
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

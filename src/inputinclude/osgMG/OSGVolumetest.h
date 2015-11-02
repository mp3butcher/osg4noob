#ifndef OSGVOLUMETEST_H
#define OSGVOLUMETEST_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Program>

#include "GL3Extensions"
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>
//#include <iostream>


#include <osg/Geode>
#include "osgOctreeRSManager.h"
#include "osgOctreeReductor.h"
#include "osgOctreeSplitCollapseChecker.h"
namespace osgMG{

	///in charge of maintain a correct VBO for simulation
	class OSGMULTIGRID_EXPORT RenderSurfaceManagmentGeode: public osg::Geode{

		osg::ref_ptr<osgOctreeBgDataUpdator> _dataupdate;
		osg::ref_ptr<osgOctreeRenderSurfaceManagerDIY> _rsm;
		//	std::vector< osg::ref_ptr<SynchronizedGeometryGenerator> > _generators;
		osg::ref_ptr<osg::Texture3D> _octreeMapPing,_octreeMapPong,_minreductionMap,_maxreductionMap;
		osg::ref_ptr<TextureAutoUniform> _mapautouniform;
		osg::ref_ptr<osg::Uniform> _minrangeUniform,_maxrangeUniform,_minentropyUniform,_maxentropyUniform;

		unsigned int _maxblocksize, _maxdepth; osgOctreeVolume*_ocdata;

		float _max_entropy,	_min_entropy,_minRange,_maxRange;
		osg::ref_ptr<osgOctreeReductor> _reduction;
		osg::ref_ptr<	osgOctreeSplitCollapseChecker> _splitcollapsedecision;

	public:
		META_Node(osgMG, RenderSurfaceManagmentGeode);
		RenderSurfaceManagmentGeode();
		RenderSurfaceManagmentGeode(const RenderSurfaceManagmentGeode&o, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);


		void addMGDataSharingScheme(int active, osgOctreeVolume* octree)
		{
			getDataUpdator()->addOctreeData(active, octree);
		}

		void setMinEntropy(float f){_minentropyUniform->set(f);}
		float getMinEntropy()const {float f; _minentropyUniform->get(f);return f;}
		void setMaxEntropy(float f){_maxentropyUniform->set(f);}
		float getMaxEntropy()const {float f; _maxentropyUniform->get(f);return f;}
	void setMaxBlockSize(unsigned int i){ _maxblocksize = i; setup(_maxblocksize, _maxdepth, _ocdata); }
		unsigned int getMaxBlockSize()const { return  _maxblocksize; }
		void setMaxDepth(unsigned int i){ _maxdepth = i; setup(_maxblocksize, _maxdepth, _ocdata); }
		unsigned int getMaxDepth()const{ return  _maxdepth; }

		//get the uniform in charge of maintaining a ping pong pattern for the maintained MG map
		const TextureAutoUniform* getMapAutoUpdateUniform()const{ return _mapautouniform.get(); }
		///duplicate not const method in order to fit osg uniform mandatory mutability
		TextureAutoUniform* getMGMapAutoUpdateUniform()const{ return _mapautouniform.get(); }

		 void setGridMap(osg::Texture3D*t);
		 void setGridMapBack(osg::Texture3D*t);

		inline const osg::Texture3D* getGridMap()const{ return _octreeMapPing.get(); };
		inline const osg::Texture3D* getGridMapBack()const{ return _octreeMapPong.get(); };

		//non const for StateAttrib mutability
		inline  osg::Texture3D* getOctreeMap()const { return _octreeMapPing.get(); };
		inline  osg::Texture3D* getOctreeMapBack()const { return _octreeMapPong.get(); };


	inline const osgMG::osgOctreeVolume* getBaseGrid()const{			return _ocdata;		}
		void setBaseGrid(osgMG::osgOctreeVolume*data){			_ocdata = data;
		setup(_maxblocksize, _maxdepth, _ocdata);
		}

		inline osgOctreeRenderSurfaceManagerDIY* getRenderSurfaceManager()const{return _rsm.get();};
		inline osgOctreeBgDataUpdator* getDataUpdator()const{return _rsm->getDataUpdator();};


		inline osg::Texture3D* getMaxMap()const{return _maxreductionMap.get();};
		inline osg::Texture3D* getMinMap()const{return _minreductionMap.get();};
		void setup(int maxblocksize,int maxdepth,osgOctreeVolume*ocdata);



		///setup autouniform to attach it to the maintained ping/pong MGmap
		void setMapAutoUpdateUniform(osgMG::TextureAutoUniform*uni);


		///set TextureUnit that will be use to reference octree map in shaders
		///can be the sames for 2 RenderSurfaceManagmentGeode if their octree maps never cross in a shader
		void setMapReservedTextureUnits(int a,int b);
		//helper to avoid some user Code
		//setup octree map uniform
		///@argument u uniform to bind to the octreemap
		///@argument ss  state set needing read access on octreemap
		void bindOctreeMapToUniform(osg::Uniform*u ,osg::StateSet*ss){
			_mapautouniform->addPassiveUniform(u);
			ss->addUniform(u);
			ss->setTextureAttributeAndModes(_mapautouniform->getReservedActive(0), _octreeMapPing, osg::StateAttribute::ON);
			ss->setTextureAttributeAndModes(_mapautouniform->getReservedActive(1),_octreeMapPong, osg::StateAttribute::ON);
		}
	};

	//class EntropyReductionPass:public osgOctreeRenderSurfacePass{
	//
	//public:
	//
	//	EntropyReductionPass(osgOctreeRenderSurface*rs);
	//	~EntropyReductionPass();
	//
	//		// osg::ref_ptr<osg::Program> _PassProgram;
	//        /** Copy constructor using CopyOp to manage deep vs shallow copy. */
	//        EntropyReductionPass(const EntropyReductionPass& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
	//
	//	//	inline void setOutputGeometry(osg::Geometry*g){genbuffer=g->getOrCreateVertexBufferObject();}
	//protected:
	//
	//	virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;
	//
	//};


	//in charge of four pass octree update
	//class UpdateRenderSurfaceUpdateCamera  :public osg::Camera{
	//	osgOctreeRenderSurface * rendersurfacegenerator;
	//public:
	//	UpdateRenderSurfaceUpdateCamera(int maxblocksize,osgOctreeVolume*ocdata);
	//	inline void setOutputGeometry(osg::Geometry*g){rendersurfacegenerator->setOutputGeometry(g);}
	//
	//};
}
#endif

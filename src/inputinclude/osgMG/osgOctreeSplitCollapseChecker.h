#ifndef osgOctreeSplitCollapseChecker_H
#define osgOctreeSplitCollapseChecker_H 1
#include "Export.h"
#include <osg/ref_ptr>
#include "osgGL3Utility.h"
#include "osgOctreeRSManager.h"
namespace osgMG{
	class OSGMULTIGRID_EXPORT osgOctreeBgDataUpdator;
	class OSGMULTIGRID_EXPORT osgOctreeSplitCollapseChecker:public FBOWritter{

	public:
		friend class osgOctreeBgDataUpdator;
		osgOctreeSplitCollapseChecker();
		~osgOctreeSplitCollapseChecker();
		//ping pong ouput
		inline void setOutputPingPongTexture(osg::Texture3D*t1,osg::Texture3D*t2){_pinpongindex=0;_ocmap[1]=t2;		_ocmap[0]=t1;	}

		inline void setInputReductionMinMaxTextures(osg::Texture3D*t1,osg::Texture3D*t2){_reductionmap[1]=t2;		_reductionmap[0]=t1;	}

		void swapPinPongTextures();

		///Main OCtree Map accesspoint
		//osg::Texture3D * getCurrentOutput(){return (_ocmap[_pinpongindex]);}

		////used by dataupdator (may use friend ptr)
		osg::Texture3D * getBackOutput(){return (_ocmap[(_pinpongindex+1)%2]);}

		//GLuint getCurrentRawTextureUnit(){return _rawtus->rawbuff[_pinpongindex];}

		///input
		void setReductionMinMaxTexture(osg::Texture3D*t1,osg::Texture3D*t2);
		// osg::ref_ptr<osg::Program> _PassProgram;
		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		osgOctreeSplitCollapseChecker(const osgOctreeSplitCollapseChecker& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
		void setRenderSurfaceProvider(osgOctreeRenderSurfaceManagerDIY*rs);



		//	void osgOctreeSplitCollapseChecker::setOutputOcMapTexture(osg::Texture3D*tex)
		//	inline void setOutputGeometry(osg::Geometry*g){genbuffer=g->getOrCreateVertexBufferObject();}
		//inline void setActive(bool b){if(_active!=b)_active=b;_active=b;};
		//	inline bool isActive(){return _active;}
	protected:
		osg::ref_ptr<osg::Program> _SplitCollapseProgram;
		osgOctreeRenderSurfaceManagerDIY* _RSM;
		bool _active;//flag to set in order to draw something
		osg::ref_ptr<osg::Texture3D> _reductionmap[2],// input min/max
			_ocmap[2];// output ping/pong
		short _pinpongindex;
		class OSGMULTIGRID_EXPORT RawPingPongData{
		public:
			GLuint rawbuff[2];//shortcut to pinpong texture unit
		};
		RawPingPongData * _rawtus;


		std::vector<osg::ref_ptr<osg::FrameBufferObject> > _otherfbos;//should be used for several lod



		virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;

	};
}
#endif

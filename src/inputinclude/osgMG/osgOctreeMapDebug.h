#ifndef osgOctreeMapDebug_H
#define osgOctreeMapDebug_H 1
#include "Export.h"
#include <osg/Texture3D>
#include <osg/Geometry>
#include <osg/Program>

#include "osgGL3Utility.h"
#include <osg/FrameBufferObject>
#include <osg/ref_ptr>
#include <iostream>

namespace osgMG{
	///This class OSGMULTIGRID_EXPORT is in charge of the drawing somulation Render Surface as classic geometry
	class OSGMULTIGRID_EXPORT osgOctreeRenderSurfaceManagerDIY;
	class OSGMULTIGRID_EXPORT osgOctreeMapDebug :public osg::Geometry{
		osgOctreeRenderSurfaceManagerDIY* _RSM;
	public:
		osgOctreeMapDebug();
		~osgOctreeMapDebug();

		/** Copy constructor using CopyOp to manage deep vs shallow copy. */
		osgOctreeMapDebug(const osgOctreeMapDebug& geometry,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY);
		void setRenderSurfaceProvider(osgOctreeRenderSurfaceManagerDIY*rs);


		void setLevelToDisplay(int i){_level2display=i;}

	protected:
		class OSGMULTIGRID_EXPORT osgHack{
		public:
			osg::GLExtensions* ext;

			mutable GLuint prID;//Program id to easyly bind uniform
			mutable GLuint VAO;//aux
		};
		mutable osgHack* _renderData;

		int _level2display;
		osg::ref_ptr< osg::Program	> _DebugSimRSProgram ;
		virtual void 	drawImplementation (osg::RenderInfo &renderInfo)const;

	};

}
#endif

/* OpenSceneGraph example, osggameoflife.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
*  THE SOFTWARE.
*/


#ifndef PROCESSPASSASGEOMETRYDYI_H
#define PROCESSPASSASGEOMETRYDYI_H 1

//#define TESSELATION_HINT 6
//ASSUME LASTCONSTRAINT IS GOAL
#include "Export.h"
#include <osg/ref_ptr>
#include <osg/Group>
#include <osg/Switch>
#include <osg/Camera>
#include <osg/Geode>
#include <osg/Geometry>
#include "GL3Extensions"
#include <osg/FrameBufferObject>



#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/CompositeViewer>


#include <osg/Texture3D>
#include <osg/FrameBufferObject>



namespace osgMG{
	class OSGMULTIGRID_EXPORT ProcessPass3DFBODIY :public osg::Geometry{
		class OSGMULTIGRID_EXPORT ExtHack{
		public:
			osg::GLExtensions* ext;
			GLuint _rawfbo;
			osg::ref_ptr<osg::FrameBufferObject> fbo;
		};
	public:
		
		ProcessPass3DFBODIY(){};
		ProcessPass3DFBODIY(const std::string& fragmentshadersource, int w, int h, int d, const std::string & depthshaderparam);
		//get/set thestate set in order to control shader aprameter

		ProcessPass3DFBODIY(const ProcessPass3DFBODIY& drawable, const osg::CopyOp& copyop =osg:: CopyOp::SHALLOW_COPY){}
		osg::StateSet *getStateSet(){ return _StateSet.get(); }
		unsigned int getDepth(){ return _depth; }
		//add an input texture and attach it to the shader
		void addInTexture(osg::Texture3D*, std::string parmname);

		//input accessor
		osg::Texture3D * getInputTexture(int i){ return _intextures[i].get(); }

		//output accessor
		osg::Texture3D * getOutputTexture(int i){ return _outtextures[i].get(); }

		//add a render target to buffer compnent i
		virtual void addOutTexture(osg::Texture3D* tex, unsigned int i);

		osg::Geode * getCamera(){ return _geode.get(); }
		//return the ProcessPass

		//void setBorderCallback(bool fill);//{if(fill)quad_geom->setDrawCallback(new bordercallback(this));}
		//osg::Geometry * getBorderGeometry();
		void setRenderOrder(osg::Camera::RenderOrder r, int x);


		static void createTexturedQuad(int sizex, int sizey, int incx, int incy, osg::Vec3Array* quad_coords, osg::Vec2Array* quad_tcoords, float d);
	protected:
		void drawImplementation(osg::RenderInfo& renderInfo) const;
		//	osg::ref_ptr<osg::Group> _cams;
		unsigned int _depth;
		osg::ref_ptr<osg::Shader> _shader;
		osg::ref_ptr<osg::Camera>  _camera;//Camera performing the render
		osg::ref_ptr<osg::Geode>  _geode;//render surface
		std::vector< osg::ref_ptr<osg::Texture3D>   > _intextures;//Texture on wich we comiute thebouzin
		std::vector< osg::ref_ptr<osg::Texture3D>   > _outtextures;//outputTexture on wich we compute thebouzin
		osg::ref_ptr<osg::Program> _FragmentProgram; //the program
		osg::ref_ptr<osg::StateSet> _StateSet; //the statesets
		//the primitive set //to change drawingmoide
		ExtHack *_renderData;
	};

	// class to handle events with a pick

	class OSGMULTIGRID_EXPORT BrushHandler : public osgGA::GUIEventHandler {
		ProcessPass3DFBODIY * _p;
		ProcessPass3DFBODIY * _v;
		float _vx, _mx;
		float _vy, _my;
	public:

		BrushHandler(ProcessPass3DFBODIY *h, ProcessPass3DFBODIY *h2) :
			_mx(0.0f),
			_my(0.0f),
			_vx(0.0f),
			_vy(0.0f) {
			_p = h; _v = h2;
		}

		~BrushHandler() {}

		bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa)
		{
			osgViewer::View* view = dynamic_cast<osgViewer::View*>(&aa);
			if (!view) return false;

			switch (ea.getEventType())
			{
			case(osgGA::GUIEventAdapter::PUSH) :
			{
												   _mx = ea.getX();
												   _my = ea.getY();
												   break;
			}
			case(osgGA::GUIEventAdapter::RELEASE) :
			{
													  //if (_mx==ea.getX() && _my==ea.getY())
				{
					_vx = ea.getX() - _mx;
					_vy = ea.getY() - _my;

					pick(view, ea.getX(), ea.getY());
				}
													  break;
			}
			default:
				break;
			}
			return false;
		}

		void pick(osgViewer::View* view, int x, int y);


	};
}
#endif

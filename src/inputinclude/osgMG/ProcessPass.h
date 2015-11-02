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


#ifndef FIMPasse_H
#define FIMPasse_H 1

#include "Export.h"
//#define TESSELATION_HINT 6
//ASSUME LASTCONSTRAINT IS GOAL

#include <osg/ref_ptr>
#include <osg/Group>
#include <osg/Switch>
#include <osg/Camera>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/TextureRectangle>
#include <osg/FrameBufferObject>

//#include <osg/OcclusionQueryNode>


//#include "..\EveLifeOSteerRBodyDLL.h"

#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/CompositeViewer>
namespace osgMG{

class OSGMULTIGRID_EXPORT ProcessPass;
class OSGMULTIGRID_EXPORT bordercallback:public osg::Drawable::DrawCallback{
protected:
	ProcessPass *_cam;
	osg::Geometry *border;

public:
	osg::Geometry *	getBorder(){return border;}
	bordercallback(ProcessPass *cam);
	virtual void drawImplementation ( osg::RenderInfo& renderInfo, const
		osg::Drawable * drawable ) const;


};

class OSGMULTIGRID_EXPORT bordertopointcallback:public bordercallback{
protected:

	osg::Geometry *point;

public:

	osg::Geometry *	getPointGeometry(){return point;}


	bordertopointcallback(ProcessPass *cam);
	virtual void drawImplementation ( osg::RenderInfo& renderInfo, const
		osg::Drawable * drawable ) const;



};

class OSGMULTIGRID_EXPORT bordertobrushcallback:public bordertopointcallback{
protected:
	osg::Vec2 vec;
public:

	osg::Geometry *	getPointGeometry(){return point;}

	void setVelocity(osg::Vec2 v){
		point->getStateSet()->getUniform("velocity")->set(v);
	}

	void setPosition(osg::Vec2 v);

	bordertobrushcallback(ProcessPass *cam):bordertopointcallback(cam){
		vec=osg::Vec2(0,0);
	};

	virtual void drawImplementation ( osg::RenderInfo& renderInfo, const
		osg::Drawable * drawable ) const;



};

class OSGMULTIGRID_EXPORT ProcessPass3D;

// class OSGMULTIGRID_EXPORT to handle events with a pick
class OSGMULTIGRID_EXPORT BrushHandler : public osgGA::GUIEventHandler {
	ProcessPass3D * _p;
	ProcessPass3D * _v;
	float _vx,_mx;
float _vy,_my;
public:

    BrushHandler(ProcessPass3D *h,ProcessPass3D *h2):
        _mx(0.0f),
        _my(0.0f),
		_vx(0.0f),
        _vy(0.0f) {_p=h;_v=h2;}

    ~BrushHandler() {}

    bool handle(const osgGA::GUIEventAdapter& ea,osgGA::GUIActionAdapter& aa)
    {
        osgViewer::View* view = dynamic_cast<osgViewer::View*>(&aa);
        if (!view) return false;

        switch(ea.getEventType())
        {
            case(osgGA::GUIEventAdapter::PUSH):
            {
                _mx = ea.getX();
                _my = ea.getY();
                break;
            }
            case(osgGA::GUIEventAdapter::RELEASE):
            {
                //if (_mx==ea.getX() && _my==ea.getY())
                {
_vx=ea.getX()-_mx;
_vy=ea.getY()-_my;

                    pick(view,ea.getX(),ea.getY());
                }
                break;
            }
            default:
                break;
        }
        return false;
    }

    void pick(osgViewer::View* view,int x,int y);


};


/**
A tesselated Geometry in order to control local drawing via occlusion query
*/
class OSGMULTIGRID_EXPORT SwitchGeometry:public osg::Geometry{
private:
	bool _active;

	std::list<unsigned int> OQResult;
public:
	unsigned int _size;
	GLuint _requestid;
	osg::Drawable::Extensions* _ext;


	void setupOCQ(osg::Drawable::Extensions* ext){
		ext->setARBOcclusionQuerySupported(true);
		//ext->glGenOcclusionQueries
		ext->glGenQueries( 1, &_requestid );
		_ext=ext;}


	SwitchGeometry(unsigned int minupdatepix):osg::Geometry(){
		_active=false;
		_size=minupdatepix;
		OQResult.push_back(100000000);

		//OQResult.push_back(FLT_MAX-1);
		//OQResult.push_back(FLT_MAX-2);
	};


	~SwitchGeometry(){
		//_ext->glDeleteOcclusionQueries(1,&_requestid);
		_ext->glDeleteQueries(1,&_requestid);
	}


	bool isActive(){return _active;};

	//when activation reset OQResult
	void setActive(bool a){_active=a;
	if(_active){
		//reset OQResults
		OQResult.clear();
		//OQResult.push_back(FLT_MAX);
		//OQResult.push_back(FLT_MAX-1);
		OQResult.push_back(100000000-2);
	}
	};

	//add a result to test convergence
	void addOQResult(unsigned int i){
		OQResult.clear();//pop_back();
		OQResult.push_front(i);
	}

	//evaluate the convergence
	bool isOQStable(){
		std::list<unsigned int>::iterator q,p=OQResult.begin();
		q=p;
		//	q++;
		for(;q!=OQResult.end();q++){
			if(// (*q)!=*p
				(*q)>_size
				//|| *q>300
				)return false;
		}
		return true;
	}
	bool isDone(){
		std::list<unsigned int>::iterator q,p=OQResult.begin();
		q=p;
		//	q++;
		for(;q!=OQResult.end();q++){
			if( //  (*q)!=*p
				(*q)>0
				//|| *q>300
				)return false;
		}
		return true;
	}

	void drawImplementation(osg::RenderInfo& renderinfo) const;

};




/**
The Process Passe is making 1 gpu iteration
It assume minimisation of Phi field according C Phield

*/

//carefull all texture are by default reconfigure to fit camera / LINEAR / float texture
class OSGMULTIGRID_EXPORT  ProcessPass {
public:
	//create a render to texture pass  with the sahder in parameter
	//init the stateset
	//create a simple  render surface
	ProcessPass(){};
	ProcessPass(std::string fragmentshadersource,int w,int h);
	~ProcessPass(){};
	//get/set thestate set in order to control shader aprameter
	osg::StateSet *getStateSet(){return _StateSet.get();}

	//add an input texture and attach it to the shader
	void addInTexture(osg::TextureRectangle* ,std::string parmname);

	//input accessor
	osg::TextureRectangle * getInputTexture(int i){return _intextures[i].get();}

	//output accessor
	osg::TextureRectangle * getOutputTexture(int i){return _outtextures[i].get();}

	//add a render target to buffer compnent i
	virtual void addOutTexture(osg::TextureRectangle* tex,int i);


	//return the camera in order to control render ordr
	osg::Camera * getCamera(){return _camera.get();};

	//void setBorderCallback(bool fill);//{if(fill)quad_geom->setDrawCallback(new bordercallback(this));}
	//osg::Geometry * getBorderGeometry();

	osg::Geometry * getGeometry();
	static void createTexturedQuad(int sizex,int sizey,int incx,int incy,osg::Vec3Array* quad_coords,osg::Vec2Array* quad_tcoords);
protected:
	//

	osg::ref_ptr<osg::Shader> _shader;
	osg::ref_ptr<osg::Camera> _camera;//Camera performing the render
	osg::ref_ptr<osg::Geometry> _geometry;//render surface
	std::vector< osg::ref_ptr<osg::TextureRectangle>   > _intextures;//Texture on wich we comiute thebouzin
	std::vector< osg::ref_ptr<osg::TextureRectangle>   > _outtextures;//outputTexture on wich we compute thebouzin
	osg::ref_ptr<osg::Program> _FragmentProgram; //the program
	osg::ref_ptr<osg::StateSet> _StateSet; //the stateset
	//the primitive set //to change drawingmoide

};


class OSGMULTIGRID_EXPORT RepeatedPass : public ProcessPass{
public:
	RepeatedPass(std::string fragmentshadersource,int w,int h,unsigned int maxpass);
//	virtual void addOutTexture(osg::TextureRectangle * tex,int i);
protected:
	unsigned int _maxpass;

};

#include <osg/Texture3D>

class OSGMULTIGRID_EXPORT ProcessPass3D {

public:
	ProcessPass3D(){};
	ProcessPass3D(std::string fragmentshadersource,int w,int h,int d, std::string depthshaderparam,osg::GraphicsContext *gc=0);
//get/set thestate set in order to control shader aprameter
	osg::StateSet *getStateSet(){return _StateSet.get();}
	unsigned int getDepth(){return _depth;}
	//add an input texture and attach it to the shader
	void addInTexture(osg::Texture3D* ,std::string parmname);

	//input accessor
	osg::Texture3D * getInputTexture(int i){return _intextures[i].get();}

	//output accessor
	osg::Texture3D * getOutputTexture(int i){return _outtextures[i].get();}

	//add a render target to buffer compnent i
	virtual void addOutTexture(osg::Texture3D* tex, unsigned int i);


	//return the ProcessPass

	//void setBorderCallback(bool fill);//{if(fill)quad_geom->setDrawCallback(new bordercallback(this));}
	//osg::Geometry * getBorderGeometry();
	void setRenderOrder(osg::Camera::RenderOrder r,int x){
	_camera->setRenderOrder(r,x);
	}

	osg::Camera * getCamera(){return _camera.get();}

	static void createTexturedQuad(int sizex,int sizey,int incx,int incy,osg::Vec3Array* quad_coords,osg::Vec2Array* quad_tcoords,float d);
protected:
	//	osg::ref_ptr<osg::Group> _cams;
unsigned int _depth;
	osg::ref_ptr<osg::Shader> _shader;
	osg::ref_ptr<osg::Camera>  _camera;//Camera performing the render
	osg::ref_ptr<osg::Geometry>  _geometry;//render surface
	std::vector< osg::ref_ptr<osg::Texture3D>   > _intextures;//Texture on wich we comiute thebouzin
	std::vector< osg::ref_ptr<osg::Texture3D>   > _outtextures;//outputTexture on wich we compute thebouzin
	osg::ref_ptr<osg::Program> _FragmentProgram; //the program
	osg::ref_ptr<osg::StateSet> _StateSet; //the statesets
	//the primitive set //to change drawingmoide

};

class OSGMULTIGRID_EXPORT RepeatedPass3D : public ProcessPass3D{
public:
	RepeatedPass3D(std::string fragmentshadersource,int w,int h,int d, std::string depthshaderparam,int nbloop);

};
}
#endif //FIMPass_H

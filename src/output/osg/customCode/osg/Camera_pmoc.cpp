#include <osg/Camera>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include "customCode/osg/Camera_pmoc.hpp"

#include <sstream>
using namespace pmoc;
using namespace std;
 void osg::QMLCamera::StaticFunc(){

 std::cerr<<"StaticFun"<<std::endl;
 }

osg::QMLCamera::QMLCamera(const pmoc::Instance *i,QObject* parent):QReflect_Camera(i,parent)
{
//custom initializations
    qmlRegisterType<pmoc::StateAttribListModel>();
}
   void  osg::QMLCamera::setDrawBuffer( BufferComponent bc){
   _model->setDrawBuffer(bc);
    /*switch(bc)
    {
   case Camera::COLOR_BUFFER: _model->setDrawBuffer()
   }*/
   }
   void osg::QMLCamera::setImplicitBufferAttachmentMask(ImplicitBufferAttachment p1,ImplicitBufferAttachment p2){
   _model->setImplicitBufferAttachmentMask(p1,p2);
   _model->setClearMask( GL_COLOR_BUFFER_BIT); ///assume color channels only
   }
/*void osg::QMLCamera::attach(int BufferComponent , osg::QReflect_Texture* texture, unsigned int level , unsigned int face, bool mipMapGeneration,
                            unsigned int multisampleSamples ,
                            unsigned int multisampleColorSamples )
{

    Camera::BufferComponent bc=Camera::COLOR_BUFFER;

    switch(BufferComponent)
    {

    case -1:
        bc=Camera::DEPTH_BUFFER;
        break;
    case 1:
        bc=Camera::COLOR_BUFFER1;
        break;
    case 2:
        bc=Camera::COLOR_BUFFER2;
        break;
    case 3:
        bc=Camera::COLOR_BUFFER3;
        break;
    case 4:
        bc=Camera::COLOR_BUFFER4;
        break;
    default:
        bc=Camera::COLOR_BUFFER;
    }
    _model->setClearMask(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
    _model->attach( bc,texture->_model,  level, face, mipMapGeneration, multisampleSamples,multisampleColorSamples)  ;
}*/

int osg::QMLCamera::referenceFrame()const
{
    switch( _model->getReferenceFrame())
    {
    case    Camera::RELATIVE_RF:
        return 0;
    case   Camera:: ABSOLUTE_RF:
        return 1;
    case    Camera::ABSOLUTE_RF_INHERIT_VIEWPOINT:
        return 2;
    }
    return -1;
}
void osg::QMLCamera::referenceFrame(int i)
{

    if(i!=referenceFrame())
    {
        Camera::ReferenceFrame rf;
        switch(i)
        {

        case 0:
            rf= Camera::RELATIVE_RF;
            break;
        case 1:
            rf= Camera::ABSOLUTE_RF;
            break;
        case 2:
            rf= Camera::ABSOLUTE_RF_INHERIT_VIEWPOINT;
            break;
        default:
            rf= Camera::RELATIVE_RF;
        }
        _model->setReferenceFrame(rf);
        emit referenceFrameChanged(i);
    }
}
int osg::QMLCamera::renderOrder()const
{
    return _model->getRenderOrderNum();
}



void osg::QMLCamera::renderOrder(int i)
{
    if(renderOrder()!=i)
    {
        _model->setRenderOrder(_model->getRenderOrder(),i);


        emit renderOrderChanged(i);
    }
}
int osg::QMLCamera::renderBin()const
{
    switch(_model->getRenderOrder())
    {
    case Camera::PRE_RENDER:
        return (0);
    case Camera::POST_RENDER:
        return (1);
    case Camera::NESTED_RENDER:
        return (2);
    default:
        return -1;

    }
}
void osg::QMLCamera::renderBin(int i)
{
    if(renderBin()!=i)
    {

        switch (i)
        {
        case 0:
            _model->setRenderOrder(Camera::PRE_RENDER,renderOrder() );
        case 1:
            _model->setRenderOrder(Camera::POST_RENDER,renderOrder() );
        case 2:
            _model->setRenderOrder(Camera::NESTED_RENDER,renderOrder() );
        default:

            _model->setRenderOrder(Camera::PRE_RENDER,renderOrder() );
        }
        emit renderBinChanged(i);
    }


}
#include <osg/Geometry>
void osg::QMLCamera::addRTT(QReflect_Texture2D *tex)
{
    osg::ref_ptr<osg::Vec3Array> quad_coords = new osg::Vec3Array; // vertex coords
    // counter-clockwise
    quad_coords->push_back(osg::Vec3d(0, 0, -1));
    quad_coords->push_back(osg::Vec3d(1, 0, -1));
    quad_coords->push_back(osg::Vec3d(1, 1, -1));
    quad_coords->push_back(osg::Vec3d(0, 1, -1));

    osg::ref_ptr<osg::Vec2Array> quad_tcoords = new osg::Vec2Array; // texture coords
    quad_tcoords->push_back(osg::Vec2(0, 0));
    quad_tcoords->push_back(osg::Vec2(1, 0));
    quad_tcoords->push_back(osg::Vec2(1, 1));
    quad_tcoords->push_back(osg::Vec2(0, 1));

    osg::ref_ptr<osg::Geometry> quad_geom = new osg::Geometry;
    osg::ref_ptr<osg::DrawArrays> quad_da = new osg::DrawArrays(osg::PrimitiveSet::QUADS,0,4);

    osg::ref_ptr<osg::Vec4Array> quad_colors = new osg::Vec4Array;
    quad_colors->push_back(osg::Vec4(1.0f,1.0f,1.0f,1.0f));

    quad_geom->setVertexArray(quad_coords.get());
    quad_geom->setTexCoordArray(0, quad_tcoords.get());
    quad_geom->addPrimitiveSet(quad_da.get());
    quad_geom->setColorArray(quad_colors.get(), osg::Array::BIND_OVERALL);
    _model->setClearMask(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
// _model->setProjectionMatrix(osg::Matrix::ortho2D(0,1,0,1));
//  _model->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
//  _model->setViewMatrix(osg::Matrix::identity());
    int _TextureWidth, _TextureHeight;
    _TextureWidth=tex->_model->getImage()->s();
    _TextureHeight=tex->_model->getImage()->t();
    _model->setViewport(0, 0, _TextureWidth, _TextureHeight);
    /*  _model->setRenderOrder(osg::Camera::PRE_RENDER);
     _model->setRenderTargetImplementation(osg::Camera::FRAME_BUFFER_OBJECT);

    quad_geom->setName("QUAD");
    _model->addChild(quad_geom);*/
    _model->attach(osg::Camera::BufferComponent(osg::Camera::COLOR_BUFFER), tex->_model);

}
void osg::QMLCamera::addTexture2DColorAttachment(QReflect_Texture2D *tex)
{
    /*void attach(BufferComponent buffer, osg::Texture* texture, unsigned int level = 0, unsigned int face=0, bool mipMapGeneration=false,
                unsigned int multisampleSamples = 0,
                unsigned int multisampleColorSamples = 0);*/
    int i=_bufferAttachments.rowCount();
    Camera::BufferComponent bc=Camera::COLOR_BUFFER;

    if (i==1)bc=Camera::COLOR_BUFFER1;
    else if (i==2)bc=Camera::COLOR_BUFFER2;
    else if (i==3)bc=Camera::COLOR_BUFFER3;
    else if (i==4)bc=Camera::COLOR_BUFFER4;
    _model->setClearMask(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);

    int _TextureWidth, _TextureHeight;

    ///reset the viewport
    _TextureWidth=tex->_model->getTextureWidth();
    _TextureHeight=tex->_model->getTextureHeight();
    _model->setViewport(0, 0, _TextureWidth, _TextureHeight);

    _model->attach(bc,tex->_model);

}
void osg::QMLCamera::addImageAttachment(QReflect_Image *tex)
{
    /*void attach(BufferComponent buffer, osg::Texture* texture, unsigned int level = 0, unsigned int face=0, bool mipMapGeneration=false,
                unsigned int multisampleSamples = 0,
                unsigned int multisampleColorSamples = 0);*/
    unsigned int i=_bufferAttachments.rowCount();
    Camera::BufferComponent bc=Camera::COLOR_BUFFER0;
    if(i==0)
        bc=Camera::COLOR_BUFFER0;
    else if (i==1)Camera::COLOR_BUFFER1;
    else if (i==2)Camera::COLOR_BUFFER2;
    else if (i==3)Camera::COLOR_BUFFER3;
    else if (i==4)Camera::COLOR_BUFFER4;
    _model->attach(bc,tex->_model);

}
QQuickItem* osg::QMLCamera::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Camera::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}


void osg::QMLCamera::renderTargetImplementation(int i)
{

    if(i!=renderTargetImplementation())
    {
        switch(i)
        {
        case 0:
            _model->setRenderTargetImplementation(Camera::FRAME_BUFFER_OBJECT);
            break;
        case 1:
            _model->setRenderTargetImplementation(Camera::PIXEL_BUFFER_RTT);
            break;
        case 2:
            _model->setRenderTargetImplementation( Camera::PIXEL_BUFFER );
            break;
        case 3:
            _model->setRenderTargetImplementation(Camera::FRAME_BUFFER);
            break;
        case 4:
            _model->setRenderTargetImplementation(Camera::SEPARATE_WINDOW);
            break;

        }
        renderTargetImplementationChanged(i);
    }

}
int osg::QMLCamera::renderTargetImplementation()const
{
    switch(_model->getRenderTargetImplementation())
    {
    case Camera::FRAME_BUFFER_OBJECT :
        return 0;
    case Camera::PIXEL_BUFFER_RTT :
        return 1;
    case Camera::PIXEL_BUFFER :
        return 2;
    case Camera::FRAME_BUFFER :
        return 3;
    case Camera::SEPARATE_WINDOW :
        return 4;
    default:
        return -1;
    }

}

void  osg::QMLCamera::updateModel()
{
    QReflect_Camera::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
    _bufferAttachments.resetListViewModel();
    Camera::BufferAttachmentMap& map= _model->getBufferAttachmentMap ();
    for(Camera::BufferAttachmentMap::const_iterator mit=map.begin(); mit!=map.end(); mit++)
    {
        stringstream ss;
        int buffcomponent=(*mit).first-Camera::COLOR_BUFFER0;
        ss<<buffcomponent;

//_model->attach(Camera::::)
        Camera::Attachment att=(*mit).second;


        string name="COLOR_BUFFER"+ss.str();
        ss<<att.depth();
        string type=ss.str();

        pmoc::StateAttribObject dra(QString( name.c_str()),type.c_str());
        _bufferAttachments.addStateAttrib(dra );
    }

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Camera_pmoc.cpp"
#endif
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Camera_pmoc.hpp>
using namespace pmoc;
osg::QMLCameraRenderOrderSortOp::QMLCameraRenderOrderSortOp(const pmoc::Instance *i,QObject* parent):QReflect_CameraRenderOrderSortOp(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLCameraRenderOrderSortOp::connect2View(QQuickItem*i)
{
    this->_view=QReflect_CameraRenderOrderSortOp::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here


// osgQtQuick::QuickWindowViewer::instance(_view->window());
    return this->_view;
}
void  osg::QMLCameraRenderOrderSortOp::updateModel()
{
    QReflect_CameraRenderOrderSortOp::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Camera_pmoc.cpp"
#endif




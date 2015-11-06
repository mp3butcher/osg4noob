#ifndef osg_Camera_pmocHPP
#define  osg_Camera_pmocHPP 1

#include <osg/Camera_pmoc.hpp>
#include <QObject>
#include <osg/Camera>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CameraRenderOrderSortOp: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
struct CameraRenderOrderSortOp * _model;
QReflect_CameraRenderOrderSortOp(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CameraRenderOrderSortOp( );
//CameraRenderOrderSortOp
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CameraRenderOrderSortOp: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_CameraRenderOrderSortOp();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 
#include <osg/Camera_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Viewport;
			} ;
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_Texture;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_DisplaySettings;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
namespace osg{ 
class QReflect_ColorMask;
			} ;
namespace osg{ 
class QReflect_CullSettings;
			} ;
namespace osg{ 
class QReflect_Stats;
			} ;
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
namespace osg{ 
class QReflect_GraphicsOperation;
			} ;
namespace osg{ 
class QReflect_OperationThread;
			} ;
#include <osg/Camera>
#include <osg/Camera>

#include <osg/ref_ptr>
#include<osg/Camera_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Camera: public pmoc::QQModel
{
Q_OBJECT
public:
 enum BufferComponent{
DEPTH_BUFFER =Camera::DEPTH_BUFFER,
STENCIL_BUFFER =Camera::STENCIL_BUFFER,
PACKED_DEPTH_STENCIL_BUFFER =Camera::PACKED_DEPTH_STENCIL_BUFFER,
COLOR_BUFFER =Camera::COLOR_BUFFER,
COLOR_BUFFER0 =Camera::COLOR_BUFFER0,
COLOR_BUFFER1 =Camera::COLOR_BUFFER1,
COLOR_BUFFER2 =Camera::COLOR_BUFFER2,
COLOR_BUFFER3 =Camera::COLOR_BUFFER3,
COLOR_BUFFER4 =Camera::COLOR_BUFFER4,
COLOR_BUFFER5 =Camera::COLOR_BUFFER5,
COLOR_BUFFER6 =Camera::COLOR_BUFFER6,
COLOR_BUFFER7 =Camera::COLOR_BUFFER7,
COLOR_BUFFER8 =Camera::COLOR_BUFFER8,
COLOR_BUFFER9 =Camera::COLOR_BUFFER9,
COLOR_BUFFER10 =Camera::COLOR_BUFFER10,
COLOR_BUFFER11 =Camera::COLOR_BUFFER11,
COLOR_BUFFER12 =Camera::COLOR_BUFFER12,
COLOR_BUFFER13 =Camera::COLOR_BUFFER13,
COLOR_BUFFER14 =Camera::COLOR_BUFFER14,
COLOR_BUFFER15 =Camera::COLOR_BUFFER15};
  Q_ENUMS(BufferComponent)
private:
public:
 enum ImplicitBufferAttachment{
IMPLICIT_DEPTH_BUFFER_ATTACHMENT =Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT,
IMPLICIT_STENCIL_BUFFER_ATTACHMENT =Camera::IMPLICIT_STENCIL_BUFFER_ATTACHMENT,
IMPLICIT_COLOR_BUFFER_ATTACHMENT =Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT,
USE_DISPLAY_SETTINGS_MASK =Camera::USE_DISPLAY_SETTINGS_MASK};
  Q_ENUMS(ImplicitBufferAttachment)
private:
public:
 enum ProjectionResizePolicy{
FIXED =Camera::FIXED,
HORIZONTAL =Camera::HORIZONTAL,
VERTICAL =Camera::VERTICAL};
  Q_ENUMS(ProjectionResizePolicy)
private:
public:
 enum RenderOrder{
PRE_RENDER =Camera::PRE_RENDER,
NESTED_RENDER =Camera::NESTED_RENDER,
POST_RENDER =Camera::POST_RENDER};
  Q_ENUMS(RenderOrder)
private:
public:
 enum RenderTargetImplementation{
FRAME_BUFFER_OBJECT =Camera::FRAME_BUFFER_OBJECT,
PIXEL_BUFFER_RTT =Camera::PIXEL_BUFFER_RTT,
PIXEL_BUFFER =Camera::PIXEL_BUFFER,
FRAME_BUFFER =Camera::FRAME_BUFFER,
SEPARATE_WINDOW =Camera::SEPARATE_WINDOW};
  Q_ENUMS(RenderTargetImplementation)
private:
public:
 enum ResizeMask{
RESIZE_VIEWPORT =Camera::RESIZE_VIEWPORT,
RESIZE_ATTACHMENTS =Camera::RESIZE_ATTACHMENTS,
RESIZE_PROJECTIONMATRIX =Camera::RESIZE_PROJECTIONMATRIX,
RESIZE_DEFAULT =Camera::RESIZE_DEFAULT};
  Q_ENUMS(ResizeMask)
private:
public:
 enum TransformOrder{
PRE_MULTIPLY =Camera::PRE_MULTIPLY,
POST_MULTIPLY =Camera::POST_MULTIPLY};
  Q_ENUMS(TransformOrder)
private:
public:
virtual unsigned int getNumParentBox(){return 2;}

/// inheritance simulated via composition
Camera * _model;
QReflect_Camera(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Camera( );
//Camera
// BufferAttachmentMap & getBufferAttachmentMap();
// DrawCallback * getFinalDrawCallback();
// DrawCallback * getInitialDrawCallback();
// DrawCallback * getPostDrawCallback();
// DrawCallback * getPreDrawCallback();
// Matrixd  getInverseViewMatrix();
// OpenThreads::Mutex * getDataChangeMutex();
// View * getView();
// osg::Matrixd & getProjectionMatrix();
// osg::Matrixd & getViewMatrix();
// void  setFinalDrawCallback( DrawCallback *);
// void  setInitialDrawCallback( DrawCallback *);
// void  setPostDrawCallback( DrawCallback *);
// void  setPreDrawCallback( DrawCallback *);
// void  setView( View *);
//const  BufferAttachmentMap & getBufferAttachmentMap();
//const  DrawCallback * getFinalDrawCallback();
//const  DrawCallback * getInitialDrawCallback();
//const  DrawCallback * getPostDrawCallback();
//const  DrawCallback * getPreDrawCallback();
//const  View * getView();
//const  osg::Matrixd & getProjectionMatrix();
//const  osg::Matrixd & getViewMatrix();
//const  osg::Vec4 & getClearAccum();
//const  osg::Vec4 & getClearColor();
Q_INVOKABLE  GLbitfield  getClearMask()const;
Q_INVOKABLE  GLenum  getDrawBuffer()const;
Q_INVOKABLE  GLenum  getReadBuffer()const;
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd * ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  getProjectionMatrixAsFrustum( double & , double & , double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getProjectionMatrixAsOrtho( double & , double & , double & , double & , double & , double &)const;
Q_INVOKABLE  bool  getProjectionMatrixAsPerspective( double & , double & , double & , double &)const;
Q_INVOKABLE  bool  isRenderToTextureCamera()const;
Q_INVOKABLE  int  getImplicitBufferAttachmentRenderMask( bool )const;
Q_INVOKABLE  int  getImplicitBufferAttachmentResolveMask( bool )const;
Q_INVOKABLE  int  getRenderOrderNum()const;
Q_INVOKABLE  osg::QReflect_DisplaySettings * getDisplaySettings()const;
Q_INVOKABLE  osg::QReflect_GraphicsContext * getGraphicsContext()const;
Q_INVOKABLE  osg::QReflect_GraphicsOperation * getRenderer()const;
Q_INVOKABLE  osg::QReflect_Object * getRenderingCache()const;
Q_INVOKABLE  osg::QReflect_OperationThread * getCameraThread()const;
Q_INVOKABLE  osg::QReflect_Stats * getStats()const;
Q_INVOKABLE const bool  getAllowEventFocus()const;
Q_INVOKABLE const double  getClearDepth()const;
Q_INVOKABLE const int  getClearStencil()const;
Q_INVOKABLE const unsigned int  getAttachmentMapModifiedCount()const;
Q_INVOKABLE osg::QReflect_Camera*  asCamera();
Q_INVOKABLE osg::QReflect_Camera*  asCamera()const;
Q_INVOKABLE osg::QReflect_Camera::ProjectionResizePolicy  getProjectionResizePolicy()const;
Q_INVOKABLE osg::QReflect_Camera::RenderOrder  getRenderOrder()const;
Q_INVOKABLE osg::QReflect_Camera::RenderTargetImplementation  getRenderTargetFallback()const;
Q_INVOKABLE osg::QReflect_Camera::RenderTargetImplementation  getRenderTargetImplementation()const;
Q_INVOKABLE osg::QReflect_Camera::TransformOrder  getTransformOrder()const;
Q_INVOKABLE osg::QReflect_ColorMask*  getColorMask();
Q_INVOKABLE osg::QReflect_ColorMask*  getColorMask()const;
Q_INVOKABLE osg::QReflect_Viewport*  getViewport();
Q_INVOKABLE osg::QReflect_Viewport*  getViewport()const;
Q_INVOKABLE void  attach(osg::QReflect_Camera::BufferComponent  , GLenum );
Q_INVOKABLE void  attach(osg::QReflect_Camera::BufferComponent  ,osg::QReflect_Image * , unsigned int  , unsigned int );
Q_INVOKABLE void  attach(osg::QReflect_Camera::BufferComponent  ,osg::QReflect_Texture * , unsigned int  , unsigned int  , bool  , unsigned int  , unsigned int );
Q_INVOKABLE void  createCameraThread();
Q_INVOKABLE void  detach(osg::QReflect_Camera::BufferComponent );
Q_INVOKABLE void  dirtyAttachmentMap();
Q_INVOKABLE void  getViewMatrixAsLookAt(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * , double )const;
Q_INVOKABLE void  getViewMatrixAsLookAt(osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , float )const;
Q_INVOKABLE void  inheritCullSettings(osg::QReflect_CullSettings * , unsigned int );
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resize( int  , int  , int );
Q_INVOKABLE void  resizeAttachments( int  , int );
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setClearAccum(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setClearColor(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setClearMask( GLbitfield );
Q_INVOKABLE void  setColorMask( bool  , bool  , bool  , bool );
Q_INVOKABLE void  setColorMask(osg::QReflect_ColorMask *);
Q_INVOKABLE void  setDrawBuffer( GLenum );
Q_INVOKABLE void  setImplicitBufferAttachmentMask( int  , int );
Q_INVOKABLE void  setImplicitBufferAttachmentRenderMask( int );
Q_INVOKABLE void  setImplicitBufferAttachmentResolveMask( int );
Q_INVOKABLE void  setProjectionMatrix(osg::QReflect_Matrixd *);
Q_INVOKABLE void  setProjectionMatrix(osg::QReflect_Matrixf *);
Q_INVOKABLE void  setProjectionMatrixAsFrustum( double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  setProjectionMatrixAsOrtho( double  , double  , double  , double  , double  , double );
Q_INVOKABLE void  setProjectionMatrixAsOrtho2D( double  , double  , double  , double );
Q_INVOKABLE void  setProjectionMatrixAsPerspective( double  , double  , double  , double );
Q_INVOKABLE void  setProjectionResizePolicy(osg::QReflect_Camera::ProjectionResizePolicy );
Q_INVOKABLE void  setReadBuffer( GLenum );
Q_INVOKABLE void  setRenderOrder(osg::QReflect_Camera::RenderOrder  , int );
Q_INVOKABLE void  setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation  ,osg::QReflect_Camera::RenderTargetImplementation );
Q_INVOKABLE void  setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation );
Q_INVOKABLE void  setTransformOrder(osg::QReflect_Camera::TransformOrder );
Q_INVOKABLE void  setViewMatrix(osg::QReflect_Matrixd *);
Q_INVOKABLE void  setViewMatrix(osg::QReflect_Matrixf *);
Q_INVOKABLE void  setViewMatrixAsLookAt(osg::QReflect_Vec3d * ,osg::QReflect_Vec3d * ,osg::QReflect_Vec3d *);
Q_INVOKABLE void  setViewport( int  , int  , int  , int );
Q_INVOKABLE void  setViewport(osg::QReflect_Viewport *);
Q_INVOKABLE void pmoc_reverse_setCameraThread( osg::QReflect_OperationThread *par=0);
Q_INVOKABLE void pmoc_reverse_setDisplaySettings( osg::QReflect_DisplaySettings *par=0);
Q_INVOKABLE void pmoc_reverse_setGraphicsContext( osg::QReflect_GraphicsContext *par=0);
Q_INVOKABLE void pmoc_reverse_setRenderer( osg::QReflect_GraphicsOperation *par=0);
Q_INVOKABLE void pmoc_reverse_setRenderingCache( osg::QReflect_Object *par=0);
Q_INVOKABLE void pmoc_reverse_setStats( osg::QReflect_Stats *par=0);
Q_INVOKABLE void setAllowEventFocus(const bool &);
Q_INVOKABLE void setAttachmentMapModifiedCount(const unsigned int &);
Q_INVOKABLE void setCameraThread( osg::QReflect_OperationThread *par);
Q_INVOKABLE void setClearDepth(const double &);
Q_INVOKABLE void setClearStencil(const int &);
Q_INVOKABLE void setDisplaySettings( osg::QReflect_DisplaySettings *par);
Q_INVOKABLE void setGraphicsContext( osg::QReflect_GraphicsContext *par);
Q_INVOKABLE void setRenderer( osg::QReflect_GraphicsOperation *par);
Q_INVOKABLE void setRenderingCache( osg::QReflect_Object *par);
Q_INVOKABLE void setStats( osg::QReflect_Stats *par);
Q_PROPERTY(bool AllowEventFocus  READ getAllowEventFocus WRITE setAllowEventFocus NOTIFY AllowEventFocusChanged)
Q_PROPERTY(double ClearDepth  READ getClearDepth WRITE setClearDepth NOTIFY ClearDepthChanged)
Q_PROPERTY(int ClearStencil  READ getClearStencil WRITE setClearStencil NOTIFY ClearStencilChanged)
Q_PROPERTY(unsigned int AttachmentMapModifiedCount  READ getAttachmentMapModifiedCount WRITE setAttachmentMapModifiedCount NOTIFY AttachmentMapModifiedCountChanged)
signals: void AllowEventFocusChanged(const bool&);
public:
signals: void AttachmentMapModifiedCountChanged(const unsigned int&);
public:
signals: void CameraThreadChanged(const osg::QReflect_OperationThread*);
public:
signals: void ClearDepthChanged(const double&);
public:
signals: void ClearStencilChanged(const int&);
public:
signals: void DisplaySettingsChanged(const osg::QReflect_DisplaySettings*);
public:
signals: void GraphicsContextChanged(const osg::QReflect_GraphicsContext*);
public:
signals: void RendererChanged(const osg::QReflect_GraphicsOperation*);
public:
signals: void RenderingCacheChanged(const osg::QReflect_Object*);
public:
signals: void StatsChanged(const osg::QReflect_Stats*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Camera: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Camera> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Camera();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 

#endif //osg_Camera_pmocHPP


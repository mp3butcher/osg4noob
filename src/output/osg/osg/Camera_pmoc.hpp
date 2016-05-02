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
QReflect_CameraRenderOrderSortOp(const pmoc::Instance *i=0,QObject* parent=0);
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
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
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
class QReflect_Viewport;
			} ;
namespace osg{ 
class QReflect_GraphicsContext;
			} ;
namespace osg{ 
class QReflect_Camera;
			} ;
namespace osg{ 
class QReflect_GraphicsOperation;
			} ;
namespace osg{ 
class QReflect_OperationThread;
			} ;
namespace osg{ 
class QReflect_ColorMask;
			} ;
namespace osg{ 
class QReflect_Stats;
			} ;
namespace osg{ 
class QReflect_CullSettings;
			} ;
namespace osg{ 
class QReflect_View;
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
QReflect_Camera(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Camera( );
//Camera
// BufferAttachmentMap & getBufferAttachmentMap();
// DrawCallback * getFinalDrawCallback();
// DrawCallback * getInitialDrawCallback();
// DrawCallback * getPostDrawCallback();
// DrawCallback * getPreDrawCallback();
// Matrixd  getInverseViewMatrix();
// OpenThreads::Mutex * getDataChangeMutex();
// osg::Matrixd & getProjectionMatrix();
// osg::Matrixd & getViewMatrix();
// void  setFinalDrawCallback( DrawCallback *);
// void  setInitialDrawCallback( DrawCallback *);
// void  setPostDrawCallback( DrawCallback *);
// void  setPreDrawCallback( DrawCallback *);
//const  BufferAttachmentMap & getBufferAttachmentMap();
//const  DrawCallback * getFinalDrawCallback();
//const  DrawCallback * getInitialDrawCallback();
//const  DrawCallback * getPostDrawCallback();
//const  DrawCallback * getPreDrawCallback();
//const  osg::Matrixd & getProjectionMatrix();
//const  osg::Matrixd & getViewMatrix();
//const  osg::Vec4 & getClearAccum();
//const  osg::Vec4 & getClearColor();
Q_INVOKABLE  GLbitfield  getClearMask()const;
Q_INVOKABLE  GLenum  getDrawBuffer()const;
Q_INVOKABLE  GLenum  getReadBuffer()const;
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  getAllowEventFocus()const;
Q_INVOKABLE  bool  getProjectionMatrixAsFrustum( double &left , double &right , double &bottom , double &top , double &zNear , double &zFar)const;
Q_INVOKABLE  bool  getProjectionMatrixAsOrtho( double &left , double &right , double &bottom , double &top , double &zNear , double &zFar)const;
Q_INVOKABLE  bool  getProjectionMatrixAsPerspective( double &fovy , double &aspectRatio , double &zNear , double &zFar)const;
Q_INVOKABLE  bool  isRenderToTextureCamera()const;
Q_INVOKABLE  double  getClearDepth()const;
Q_INVOKABLE  int  getClearStencil()const;
Q_INVOKABLE  int  getImplicitBufferAttachmentRenderMask( bool effectiveMask)const;
Q_INVOKABLE  int  getImplicitBufferAttachmentResolveMask( bool effectiveMask)const;
Q_INVOKABLE  int  getRenderOrderNum()const;
Q_INVOKABLE  unsigned int  getAttachmentMapModifiedCount()const;
Q_INVOKABLE osg::QReflect_Camera*  asCamera();
Q_INVOKABLE osg::QReflect_Camera*  asCamera()const;
Q_INVOKABLE osg::QReflect_Camera::ProjectionResizePolicy  getProjectionResizePolicy()const;
Q_INVOKABLE osg::QReflect_Camera::RenderOrder  getRenderOrder()const;
Q_INVOKABLE osg::QReflect_Camera::RenderTargetImplementation  getRenderTargetFallback()const;
Q_INVOKABLE osg::QReflect_Camera::RenderTargetImplementation  getRenderTargetImplementation()const;
Q_INVOKABLE osg::QReflect_Camera::TransformOrder  getTransformOrder()const;
Q_INVOKABLE osg::QReflect_ColorMask*  getColorMask();
Q_INVOKABLE osg::QReflect_ColorMask*  getColorMask()const;
Q_INVOKABLE osg::QReflect_DisplaySettings*  getDisplaySettings();
Q_INVOKABLE osg::QReflect_DisplaySettings*  getDisplaySettings()const;
Q_INVOKABLE osg::QReflect_GraphicsContext*  getGraphicsContext();
Q_INVOKABLE osg::QReflect_GraphicsContext*  getGraphicsContext()const;
Q_INVOKABLE osg::QReflect_GraphicsOperation*  getRenderer();
Q_INVOKABLE osg::QReflect_GraphicsOperation*  getRenderer()const;
Q_INVOKABLE osg::QReflect_Object*  getRenderingCache();
Q_INVOKABLE osg::QReflect_Object*  getRenderingCache()const;
Q_INVOKABLE osg::QReflect_OperationThread*  getCameraThread();
Q_INVOKABLE osg::QReflect_OperationThread*  getCameraThread()const;
Q_INVOKABLE osg::QReflect_Stats*  getStats();
Q_INVOKABLE osg::QReflect_Stats*  getStats()const;
Q_INVOKABLE osg::QReflect_View*  getView();
Q_INVOKABLE osg::QReflect_View*  getView()const;
Q_INVOKABLE osg::QReflect_Viewport*  getViewport();
Q_INVOKABLE osg::QReflect_Viewport*  getViewport()const;
Q_INVOKABLE void  attach(osg::QReflect_Camera::BufferComponent buffer , GLenum internalFormat);
Q_INVOKABLE void  attach(osg::QReflect_Camera::BufferComponent buffer ,osg::QReflect_Image *image , unsigned int multisampleSamples , unsigned int multisampleColorSamples);
Q_INVOKABLE void  attach(osg::QReflect_Camera::BufferComponent buffer ,osg::QReflect_Texture *texture , unsigned int level , unsigned int face , bool mipMapGeneration , unsigned int multisampleSamples , unsigned int multisampleColorSamples);
Q_INVOKABLE void  createCameraThread();
Q_INVOKABLE void  detach(osg::QReflect_Camera::BufferComponent buffer);
Q_INVOKABLE void  dirtyAttachmentMap();
Q_INVOKABLE void  getViewMatrixAsLookAt(osg::QReflect_Vec3d *eye ,osg::QReflect_Vec3d *center ,osg::QReflect_Vec3d *up , double lookDistance)const;
Q_INVOKABLE void  getViewMatrixAsLookAt(osg::QReflect_Vec3f *eye ,osg::QReflect_Vec3f *center ,osg::QReflect_Vec3f *up , float lookDistance)const;
Q_INVOKABLE void  inheritCullSettings(osg::QReflect_CullSettings *settings , unsigned int inheritanceMask);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resize( int width , int height , int resizeMask);
Q_INVOKABLE void  resizeAttachments( int width , int height);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setAllowEventFocus( bool focus);
Q_INVOKABLE void  setAttachmentMapModifiedCount( unsigned int v);
Q_INVOKABLE void  setCameraThread(osg::QReflect_OperationThread *gt);
Q_INVOKABLE void  setClearAccum(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setClearColor(osg::QReflect_Vec4f *color);
Q_INVOKABLE void  setClearDepth( double depth);
Q_INVOKABLE void  setClearMask( GLbitfield mask);
Q_INVOKABLE void  setClearStencil( int stencil);
Q_INVOKABLE void  setColorMask( bool red , bool green , bool blue , bool alpha);
Q_INVOKABLE void  setColorMask(osg::QReflect_ColorMask *colorMask);
Q_INVOKABLE void  setDisplaySettings(osg::QReflect_DisplaySettings *ds);
Q_INVOKABLE void  setDrawBuffer( GLenum buffer);
Q_INVOKABLE void  setGraphicsContext(osg::QReflect_GraphicsContext *context);
Q_INVOKABLE void  setImplicitBufferAttachmentMask( int renderMask , int resolveMask);
Q_INVOKABLE void  setImplicitBufferAttachmentRenderMask( int implicitBufferAttachmentRenderMask);
Q_INVOKABLE void  setImplicitBufferAttachmentResolveMask( int implicitBufferAttachmentResolveMask);
Q_INVOKABLE void  setProjectionMatrix(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  setProjectionMatrix(osg::QReflect_Matrixf *matrix);
Q_INVOKABLE void  setProjectionMatrixAsFrustum( double left , double right , double bottom , double top , double zNear , double zFar);
Q_INVOKABLE void  setProjectionMatrixAsOrtho( double left , double right , double bottom , double top , double zNear , double zFar);
Q_INVOKABLE void  setProjectionMatrixAsOrtho2D( double left , double right , double bottom , double top);
Q_INVOKABLE void  setProjectionMatrixAsPerspective( double fovy , double aspectRatio , double zNear , double zFar);
Q_INVOKABLE void  setProjectionResizePolicy(osg::QReflect_Camera::ProjectionResizePolicy policy);
Q_INVOKABLE void  setReadBuffer( GLenum buffer);
Q_INVOKABLE void  setRenderOrder(osg::QReflect_Camera::RenderOrder order , int orderNum);
Q_INVOKABLE void  setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation impl ,osg::QReflect_Camera::RenderTargetImplementation fallback);
Q_INVOKABLE void  setRenderTargetImplementation(osg::QReflect_Camera::RenderTargetImplementation impl);
Q_INVOKABLE void  setRenderer(osg::QReflect_GraphicsOperation *rc);
Q_INVOKABLE void  setRenderingCache(osg::QReflect_Object *rc);
Q_INVOKABLE void  setStats(osg::QReflect_Stats *stats);
Q_INVOKABLE void  setTransformOrder(osg::QReflect_Camera::TransformOrder order);
Q_INVOKABLE void  setView(osg::QReflect_View *view);
Q_INVOKABLE void  setViewMatrix(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  setViewMatrix(osg::QReflect_Matrixf *matrix);
Q_INVOKABLE void  setViewMatrixAsLookAt(osg::QReflect_Vec3d *eye ,osg::QReflect_Vec3d *center ,osg::QReflect_Vec3d *up);
Q_INVOKABLE void  setViewport( int x , int y , int width , int height);
Q_INVOKABLE void  setViewport(osg::QReflect_Viewport *viewport);
Q_PROPERTY(GLbitfield  ClearMask  READ getClearMask WRITE setClearMask NOTIFY ClearMaskChanged)
Q_PROPERTY(GLenum  DrawBuffer  READ getDrawBuffer WRITE setDrawBuffer NOTIFY DrawBufferChanged)
Q_PROPERTY(GLenum  ReadBuffer  READ getReadBuffer WRITE setReadBuffer NOTIFY ReadBufferChanged)
Q_PROPERTY(bool  AllowEventFocus  READ getAllowEventFocus WRITE setAllowEventFocus NOTIFY AllowEventFocusChanged)
Q_PROPERTY(double  ClearDepth  READ getClearDepth WRITE setClearDepth NOTIFY ClearDepthChanged)
Q_PROPERTY(int  ClearStencil  READ getClearStencil WRITE setClearStencil NOTIFY ClearStencilChanged)
Q_PROPERTY(osg::QReflect_Camera::ProjectionResizePolicy  ProjectionResizePolicy  READ getProjectionResizePolicy WRITE setProjectionResizePolicy NOTIFY ProjectionResizePolicyChanged)
Q_PROPERTY(osg::QReflect_Camera::RenderTargetImplementation  RenderTargetImplementation  READ getRenderTargetImplementation WRITE setRenderTargetImplementation NOTIFY RenderTargetImplementationChanged)
Q_PROPERTY(osg::QReflect_Camera::TransformOrder  TransformOrder  READ getTransformOrder WRITE setTransformOrder NOTIFY TransformOrderChanged)
Q_PROPERTY(osg::QReflect_DisplaySettings * DisplaySettings  READ getDisplaySettings WRITE setDisplaySettings NOTIFY DisplaySettingsChanged)
Q_PROPERTY(osg::QReflect_GraphicsContext * GraphicsContext  READ getGraphicsContext WRITE setGraphicsContext NOTIFY GraphicsContextChanged)
Q_PROPERTY(osg::QReflect_GraphicsOperation * Renderer  READ getRenderer WRITE setRenderer NOTIFY RendererChanged)
Q_PROPERTY(osg::QReflect_Object * RenderingCache  READ getRenderingCache WRITE setRenderingCache NOTIFY RenderingCacheChanged)
Q_PROPERTY(osg::QReflect_OperationThread * CameraThread  READ getCameraThread WRITE setCameraThread NOTIFY CameraThreadChanged)
Q_PROPERTY(osg::QReflect_Stats * Stats  READ getStats WRITE setStats NOTIFY StatsChanged)
Q_PROPERTY(osg::QReflect_View * View  READ getView WRITE setView NOTIFY ViewChanged)
Q_PROPERTY(unsigned int  AttachmentMapModifiedCount  READ getAttachmentMapModifiedCount WRITE setAttachmentMapModifiedCount NOTIFY AttachmentMapModifiedCountChanged)
signals: void AllowEventFocusChanged();
public:
signals: void AttachmentMapModifiedCountChanged();
public:
signals: void CameraThreadChanged();
public:
signals: void ClearDepthChanged();
public:
signals: void ClearMaskChanged();
public:
signals: void ClearStencilChanged();
public:
signals: void DisplaySettingsChanged();
public:
signals: void DrawBufferChanged();
public:
signals: void GraphicsContextChanged();
public:
signals: void ProjectionResizePolicyChanged();
public:
signals: void ReadBufferChanged();
public:
signals: void RenderTargetImplementationChanged();
public:
signals: void RendererChanged();
public:
signals: void RenderingCacheChanged();
public:
signals: void StatsChanged();
public:
signals: void TransformOrderChanged();
public:
signals: void ViewChanged();
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
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
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


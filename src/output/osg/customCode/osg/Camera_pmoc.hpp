#ifndef osg_Camera_customHPP
#define  osg_Camera_customHPP 1

//includes

#include <osg/Camera_pmoc.hpp>
#include <QObject>
#include <osg/Camera>

#include <osg/Camera_pmoc.hpp>
namespace osg
{
class  QMLCameraRenderOrderSortOp: public QReflect_CameraRenderOrderSortOp
{
    Q_OBJECT
public:
    QMLCameraRenderOrderSortOp(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};
class   MetaQMLCameraRenderOrderSortOp :public MetaQReflect_CameraRenderOrderSortOp {};

}
Q_DECLARE_METATYPE(osg::QMLCameraRenderOrderSortOp)
#include <osg/Camera_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_Object;
} ;
namespace osg
{
class QReflect_DisplaySettings;
} ;
namespace osg
{
class QReflect_Matrixd;
} ;
namespace osg
{
class QReflect_Stats;
} ;
namespace osg
{
class QReflect_GraphicsContext;
} ;
namespace osg
{
class QReflect_GraphicsOperation;
} ;
namespace osg
{
class QReflect_OperationThread;
} ;
namespace osg
{
class QReflect_View;
} ;
#include <osg/Camera>

#include <osg/CullSettings_pmoc.hpp>
#include <osg/DisplaySettings>
#include <osg/DisplaySettings_pmoc.hpp>
#include <osg/GraphicsContext>
#include <osg/GraphicsContext_pmoc.hpp>
#include <osg/GraphicsThread>
#include <osg/GraphicsThread_pmoc.hpp>
#include <osg/Matrixd>
#include <osg/Matrixd_pmoc.hpp>
#include <osg/Object>
#include <osg/Object_pmoc.hpp>
#include <osg/OperationThread>
#include <osg/OperationThread_pmoc.hpp>
#include <osg/Stats>
#include <osg/Stats_pmoc.hpp>
#include <osg/Transform_pmoc.hpp>
#include <osg/Camera_pmoc.hpp>
#include <osg/Texture_pmoc.hpp>
#include <osg/Texture2D_pmoc.hpp>
#include <osg/Image_pmoc.hpp>
#include "AttribListModel.hpp"
namespace osg
{
class  QMLCamera: public QReflect_Camera
{
    Q_OBJECT
public:
Q_INVOKABLE static void StaticFunc();



protected:
    Q_PROPERTY(int renderTargetImplementation READ renderTargetImplementation WRITE renderTargetImplementation NOTIFY renderTargetImplementationChanged)
    Q_PROPERTY( pmoc::StateAttribListModel* bufferAttachments READ bufferAttachments  NOTIFY bufferAttachmentsChanged)
    Q_PROPERTY (int referenceFrame READ referenceFrame WRITE referenceFrame NOTIFY referenceFrameChanged)
    Q_PROPERTY (int renderOrder READ renderOrder WRITE renderOrder NOTIFY renderOrderChanged)
    Q_PROPERTY (int renderBin READ renderBin WRITE renderBin NOTIFY renderBinChanged)

    int referenceFrame()const;

    void referenceFrame(int);
    int renderOrder()const;
    void renderOrder(int);
    int renderBin()const;
    void renderBin(int); //ABSOLUTE_RF RELATIVE


      pmoc::StateAttribListModel* bufferAttachments()
    {
        return &_bufferAttachments;
    }
    void renderTargetImplementation(int i);

    int renderTargetImplementation()const;

signals:

    void renderBinChanged(int);
    void renderOrderChanged(int);
    void referenceFrameChanged(int);

    void renderTargetImplementationChanged(int );
    void bufferAttachmentsChanged(  pmoc::StateAttribListModel* );
public:
    QMLCamera(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
    pmoc::StateAttribListModel _bufferAttachments;
public slots:
    virtual void  updateModel();
   Q_INVOKABLE void addTexture2DColorAttachment(osg::QReflect_Texture2D *);

  Q_INVOKABLE  void addImageAttachment(osg::QReflect_Image *);
  Q_INVOKABLE  void addRTT(osg::QReflect_Texture2D *tex);
  Q_INVOKABLE void  setDrawBuffer( BufferComponent );
  Q_INVOKABLE void setImplicitBufferAttachmentMask(ImplicitBufferAttachment p1,ImplicitBufferAttachment p2);

};
class   MetaQMLCamera :public MetaQReflect_Camera {};

}
Q_DECLARE_METATYPE(osg::QMLCamera)
Q_ENUMS(osg::Camera::RenderOrder)

#endif //osg_Camera_customHPP


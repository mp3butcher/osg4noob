#ifndef osg_CameraView_customHPP
#define  osg_CameraView_customHPP 1

//includes

#include <osg/CameraView_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Vec3d;
			} ;
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/CameraView>

#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Transform_pmoc.hpp>
#include <osg/Vec3d>
#include <osg/Vec3d_pmoc.hpp>
#include <osg/CameraView_pmoc.hpp>
namespace osg{
class  QMLCameraView: public QReflect_CameraView
{
Q_OBJECT
public:
QMLCameraView(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCameraView :public MetaQReflect_CameraView{};

}
  Q_DECLARE_METATYPE(osg::QMLCameraView)

#endif //osg_CameraView_customHPP


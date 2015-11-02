#ifndef osg_AnimationPath_customHPP
#define  osg_AnimationPath_customHPP 1

//includes
#include <osg/AnimationPath_pmoc.hpp>
#include <QObject>
#include <osg/AnimationPath>

#include <osg/Object_pmoc.hpp>
#include <osg/AnimationPath_pmoc.hpp>
namespace osg{
class  QMLAnimationPath: public QReflect_AnimationPath
{
Q_OBJECT
public:
QMLAnimationPath(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAnimationPath :public MetaQReflect_AnimationPath{};

}
  Q_DECLARE_METATYPE(osg::QMLAnimationPath)
#include <osg/AnimationPath_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Vec3d;
			} ;
namespace osg{
class QReflect_AnimationPath;
			} ;
#include <osg/AnimationPath>
#include <osg/AnimationPath>

#include <osg/AnimationPath_pmoc.hpp>
#include <osg/Callback_pmoc.hpp>
#include <osg/Vec3d>
#include <osg/Vec3d_pmoc.hpp>
#include <osg/AnimationPath_pmoc.hpp>
namespace osg{
class  QMLAnimationPathCallback: public QReflect_AnimationPathCallback
{
Q_OBJECT
public:
QMLAnimationPathCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLAnimationPathCallback :public MetaQReflect_AnimationPathCallback{};

}
  Q_DECLARE_METATYPE(osg::QMLAnimationPathCallback)

#endif //osg_AnimationPath_customHPP


#ifndef osg_Matrixf_customHPP
#define  osg_Matrixf_customHPP 1

//includes
#include <osg/Matrixf_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Matrixf>

#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Matrixf_pmoc.hpp>
namespace osg{
class  QMLMatrixf: public QReflect_Matrixf
{
Q_OBJECT
public:
QMLMatrixf(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLMatrixf :public MetaQReflect_Matrixf{};

}
  Q_DECLARE_METATYPE(osg::QMLMatrixf)
#include <osg/Matrixf_pmoc.hpp>
#include <QObject>
#include <osg/Matrixf>

#include <osg/Matrixf_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/Matrixf_pmoc.hpp>
namespace osg{
class  QMLRefMatrixf: public QReflect_RefMatrixf
{
Q_OBJECT
public:
QMLRefMatrixf(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRefMatrixf :public MetaQReflect_RefMatrixf{};

}
  Q_DECLARE_METATYPE(osg::QMLRefMatrixf)

#endif //osg_Matrixf_customHPP


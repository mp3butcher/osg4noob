#ifndef osg_Matrixd_customHPP
#define  osg_Matrixd_customHPP 1

//includes
#include <osg/Matrixd_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Quat;
			} ;
#include <osg/Matrixd>

#include <osg/Quat>
#include <osg/Quat_pmoc.hpp>
#include <osg/Matrixd_pmoc.hpp>
namespace osg{
class  QMLMatrixd: public QReflect_Matrixd
{
Q_OBJECT
public:
QMLMatrixd(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLMatrixd :public MetaQReflect_Matrixd{};

}
  Q_DECLARE_METATYPE(osg::QMLMatrixd)
#include <osg/Matrixd_pmoc.hpp>
#include <QObject>
#include <osg/Matrixd>

#include <osg/Matrixd_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/Matrixd_pmoc.hpp>
namespace osg{
class  QMLRefMatrixd: public QReflect_RefMatrixd
{
Q_OBJECT
public:
QMLRefMatrixd(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRefMatrixd :public MetaQReflect_RefMatrixd{};

}
  Q_DECLARE_METATYPE(osg::QMLRefMatrixd)

#endif //osg_Matrixd_customHPP


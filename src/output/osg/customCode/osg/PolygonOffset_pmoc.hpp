#ifndef osg_PolygonOffset_customHPP
#define  osg_PolygonOffset_customHPP 1

//includes
#include <osg/PolygonOffset_pmoc.hpp>
#include <QObject>
#include <osg/PolygonOffset>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/PolygonOffset_pmoc.hpp>
namespace osg{
class  QMLPolygonOffset: public QReflect_PolygonOffset
{
Q_OBJECT
public:
QMLPolygonOffset(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPolygonOffset :public MetaQReflect_PolygonOffset{};

}
  Q_DECLARE_METATYPE(osg::QMLPolygonOffset)

#endif //osg_PolygonOffset_customHPP


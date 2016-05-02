#ifndef osg_PolygonMode_customHPP
#define  osg_PolygonMode_customHPP 1

//includes
#include <osg/PolygonMode_pmoc.hpp>
#include <QObject>
#include <osg/PolygonMode>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/PolygonMode_pmoc.hpp>
namespace osg{
class  QMLPolygonMode: public QReflect_PolygonMode
{
Q_OBJECT
public:
QMLPolygonMode(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPolygonMode :public MetaQReflect_PolygonMode{};

}
  Q_DECLARE_METATYPE(osg::QMLPolygonMode)

#endif //osg_PolygonMode_customHPP


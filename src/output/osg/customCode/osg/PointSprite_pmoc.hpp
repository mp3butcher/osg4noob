#ifndef osg_PointSprite_customHPP
#define  osg_PointSprite_customHPP 1

//includes
#include <osg/PointSprite_pmoc.hpp>
#include <QObject>
#include <osg/PointSprite>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/PointSprite_pmoc.hpp>
namespace osg{
class  QMLPointSprite: public QReflect_PointSprite
{
Q_OBJECT
public:
QMLPointSprite(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPointSprite :public MetaQReflect_PointSprite{};

}
  Q_DECLARE_METATYPE(osg::QMLPointSprite)

#endif //osg_PointSprite_customHPP


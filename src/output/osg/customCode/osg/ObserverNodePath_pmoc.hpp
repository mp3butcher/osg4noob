#ifndef osg_ObserverNodePath_customHPP
#define  osg_ObserverNodePath_customHPP 1

//includes

#include <osg/ObserverNodePath_pmoc.hpp>
#include <QObject>
#include <osg/ObserverNodePath>

#include <osg/ObserverNodePath_pmoc.hpp>
namespace osg{
class  QMLObserverNodePath: public QReflect_ObserverNodePath
{
Q_OBJECT
public:
QMLObserverNodePath(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLObserverNodePath :public MetaQReflect_ObserverNodePath{};

}
  Q_DECLARE_METATYPE(osg::QMLObserverNodePath)

#endif //osg_ObserverNodePath_customHPP


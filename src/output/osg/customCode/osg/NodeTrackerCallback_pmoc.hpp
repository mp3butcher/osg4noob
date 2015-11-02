#ifndef osg_NodeTrackerCallback_customHPP
#define  osg_NodeTrackerCallback_customHPP 1

//includes

#include <osg/NodeTrackerCallback_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Node;
			} ;
namespace osg{
class QReflect_ObserverNodePath;
			} ;
#include <osg/Callback_pmoc.hpp>
#include <osg/Node>
#include <osg/NodeTrackerCallback>

#include <osg/Node_pmoc.hpp>
#include <osg/ObserverNodePath>
#include <osg/ObserverNodePath_pmoc.hpp>
#include <osg/NodeTrackerCallback_pmoc.hpp>
namespace osg{
class  QMLNodeTrackerCallback: public QReflect_NodeTrackerCallback
{
Q_OBJECT
public:
QMLNodeTrackerCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLNodeTrackerCallback :public MetaQReflect_NodeTrackerCallback{};

}
  Q_DECLARE_METATYPE(osg::QMLNodeTrackerCallback)

#endif //osg_NodeTrackerCallback_customHPP


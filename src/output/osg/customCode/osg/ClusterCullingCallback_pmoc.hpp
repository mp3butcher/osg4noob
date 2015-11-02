#ifndef osg_ClusterCullingCallback_customHPP
#define  osg_ClusterCullingCallback_customHPP 1

//includes


#include <osg/ClusterCullingCallback_pmoc.hpp>
#include <QObject>
#include <osg/Callback_pmoc.hpp>
#include <osg/ClusterCullingCallback>

#include <osg/ClusterCullingCallback_pmoc.hpp>
namespace osg{
class  QMLClusterCullingCallback: public QReflect_ClusterCullingCallback
{
Q_OBJECT
public:
QMLClusterCullingCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClusterCullingCallback :public MetaQReflect_ClusterCullingCallback{};

}
  Q_DECLARE_METATYPE(osg::QMLClusterCullingCallback)

#endif //osg_ClusterCullingCallback_customHPP


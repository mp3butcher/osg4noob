#ifndef osg_ProxyNode_customHPP
#define  osg_ProxyNode_customHPP 1

//includes

#include <osg/ProxyNode_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Referenced;
			} ;
#include <osg/Group_pmoc.hpp>
#include <osg/ProxyNode>

#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/ProxyNode_pmoc.hpp>
namespace osg{
class  QMLProxyNode: public QReflect_ProxyNode
{
Q_OBJECT
public:
QMLProxyNode(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLProxyNode :public MetaQReflect_ProxyNode{};

}
  Q_DECLARE_METATYPE(osg::QMLProxyNode)

#endif //osg_ProxyNode_customHPP


#ifndef osg_OccluderNode_customHPP
#define  osg_OccluderNode_customHPP 1

//includes

#include <osg/OccluderNode_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_ConvexPlanarOccluder;
			} ;
#include <osg/ConvexPlanarOccluder>
#include <osg/ConvexPlanarOccluder_pmoc.hpp>
#include <osg/Group_pmoc.hpp>
#include <osg/OccluderNode>

#include <osg/OccluderNode_pmoc.hpp>
namespace osg{
class  QMLOccluderNode: public QReflect_OccluderNode
{
Q_OBJECT
public:
QMLOccluderNode(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOccluderNode :public MetaQReflect_OccluderNode{};

}
  Q_DECLARE_METATYPE(osg::QMLOccluderNode)

#endif //osg_OccluderNode_customHPP


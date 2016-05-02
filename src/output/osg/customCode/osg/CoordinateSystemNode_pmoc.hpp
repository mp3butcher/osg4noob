#ifndef osg_CoordinateSystemNode_customHPP
#define  osg_CoordinateSystemNode_customHPP 1

//includes

#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_EllipsoidModel;
			} ;
#include <osg/CoordinateSystemNode>
#include <osg/CoordinateSystemNode>

#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <osg/Group_pmoc.hpp>
#include <osg/CoordinateSystemNode_pmoc.hpp>
namespace osg{
class  QMLCoordinateSystemNode: public QReflect_CoordinateSystemNode
{
Q_OBJECT
public:
QMLCoordinateSystemNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCoordinateSystemNode :public MetaQReflect_CoordinateSystemNode{};

}
  Q_DECLARE_METATYPE(osg::QMLCoordinateSystemNode)
#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <QObject>
#include <osg/CoordinateSystemNode>

#include <osg/Object_pmoc.hpp>
#include <osg/CoordinateSystemNode_pmoc.hpp>
namespace osg{
class  QMLEllipsoidModel: public QReflect_EllipsoidModel
{
Q_OBJECT
public:
QMLEllipsoidModel(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLEllipsoidModel :public MetaQReflect_EllipsoidModel{};

}
  Q_DECLARE_METATYPE(osg::QMLEllipsoidModel)

#endif //osg_CoordinateSystemNode_customHPP


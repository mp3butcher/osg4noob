#ifndef osg_OcclusionQueryNode_customHPP
#define  osg_OcclusionQueryNode_customHPP 1

//includes


#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
#include <osg/OcclusionQueryNode>

#include <osg/Referenced_pmoc.hpp>
#include <osg/OcclusionQueryNode_pmoc.hpp>
namespace osg{
class  QMLTestResult: public QReflect_TestResult
{
Q_OBJECT
public:
QMLTestResult(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTestResult :public MetaQReflect_TestResult{};

}
  Q_DECLARE_METATYPE(osg::QMLTestResult)
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_StateSet;
			} ;
#include <osg/Group_pmoc.hpp>
#include <osg/OcclusionQueryNode>

#include <osg/StateSet>
#include <osg/StateSet_pmoc.hpp>
#include <osg/OcclusionQueryNode_pmoc.hpp>
namespace osg{
class  QMLOcclusionQueryNode: public QReflect_OcclusionQueryNode
{
Q_OBJECT
public:
QMLOcclusionQueryNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLOcclusionQueryNode :public MetaQReflect_OcclusionQueryNode{};

}
  Q_DECLARE_METATYPE(osg::QMLOcclusionQueryNode)
#include <osg/OcclusionQueryNode_pmoc.hpp>
#include <QObject>
#include <osg/Geometry_pmoc.hpp>
#include <osg/OcclusionQueryNode>

#include <osg/OcclusionQueryNode_pmoc.hpp>
namespace osg{
class  QMLQueryGeometry: public QReflect_QueryGeometry
{
Q_OBJECT
public:
QMLQueryGeometry(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLQueryGeometry :public MetaQReflect_QueryGeometry{};

}
  Q_DECLARE_METATYPE(osg::QMLQueryGeometry)


#endif //osg_OcclusionQueryNode_customHPP


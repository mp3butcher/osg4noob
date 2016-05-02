#ifndef osg_KdTree_customHPP
#define  osg_KdTree_customHPP 1

//includes


#include <osg/KdTree_pmoc.hpp>
#include <QObject>
#include <osg/KdTree>

#include <osg/NodeVisitor_pmoc.hpp>
#include <osg/KdTree_pmoc.hpp>
namespace osg{
class  QMLKdTreeBuilder: public QReflect_KdTreeBuilder
{
Q_OBJECT
public:
QMLKdTreeBuilder(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLKdTreeBuilder :public MetaQReflect_KdTreeBuilder{};

}
  Q_DECLARE_METATYPE(osg::QMLKdTreeBuilder)
#include <osg/KdTree_pmoc.hpp>
#include <QObject>
#include <osg/KdTree>

#include <osg/Shape_pmoc.hpp>
#include <osg/KdTree_pmoc.hpp>
namespace osg{
class  QMLKdTree: public QReflect_KdTree
{
Q_OBJECT
public:
QMLKdTree(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLKdTree :public MetaQReflect_KdTree{};

}
  Q_DECLARE_METATYPE(osg::QMLKdTree)


#endif //osg_KdTree_customHPP


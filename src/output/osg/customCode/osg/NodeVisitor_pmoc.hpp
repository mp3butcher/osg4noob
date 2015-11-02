#ifndef osg_NodeVisitor_customHPP
#define  osg_NodeVisitor_customHPP 1

//includes

#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
#include <osg/NodeVisitor>

#include <osg/NodeVisitor_pmoc.hpp>
namespace osg{
class  QMLNodeAcceptOp: public QReflect_NodeAcceptOp
{
Q_OBJECT
public:
QMLNodeAcceptOp(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLNodeAcceptOp :public MetaQReflect_NodeAcceptOp{};

}
  Q_DECLARE_METATYPE(osg::QMLNodeAcceptOp)
#include <osg/NodeVisitor_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_FrameStamp;
			} ;
#include <osg/FrameStamp>
#include <osg/FrameStamp_pmoc.hpp>
#include <osg/NodeVisitor>

#include <osg/Object_pmoc.hpp>
#include <osg/NodeVisitor_pmoc.hpp>
namespace osg{
class  QMLNodeVisitor: public QReflect_NodeVisitor
{
Q_OBJECT
public:
QMLNodeVisitor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLNodeVisitor :public MetaQReflect_NodeVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLNodeVisitor)

#endif //osg_NodeVisitor_customHPP


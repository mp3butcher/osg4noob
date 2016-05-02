#ifndef osg_CollectOccludersVisitor_customHPP
#define  osg_CollectOccludersVisitor_customHPP 1

//includes

#include <osg/CollectOccludersVisitor_pmoc.hpp>
#include <QObject>
#include <osg/CollectOccludersVisitor>

#include <osg/CullStack_pmoc.hpp>
#include <osg/NodeVisitor_pmoc.hpp>
#include <osg/CollectOccludersVisitor_pmoc.hpp>
namespace osg{
class  QMLCollectOccludersVisitor: public QReflect_CollectOccludersVisitor
{
Q_OBJECT
public:
QMLCollectOccludersVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCollectOccludersVisitor :public MetaQReflect_CollectOccludersVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLCollectOccludersVisitor)

#endif //osg_CollectOccludersVisitor_customHPP


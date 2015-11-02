#ifndef osg_ClipNode_customHPP
#define  osg_ClipNode_customHPP 1

//includes

#include <osg/ClipNode_pmoc.hpp>
#include <QObject>
#include <osg/ClipNode>

#include <osg/Group_pmoc.hpp>
#include <osg/ClipNode_pmoc.hpp>
namespace osg{
class  QMLClipNode: public QReflect_ClipNode
{
Q_OBJECT
public:
QMLClipNode(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClipNode :public MetaQReflect_ClipNode{};

}
  Q_DECLARE_METATYPE(osg::QMLClipNode)

#endif //osg_ClipNode_customHPP


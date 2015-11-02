#ifndef osg_ClearNode_customHPP
#define  osg_ClearNode_customHPP 1

//includes

#include <osg/ClearNode_pmoc.hpp>
#include <QObject>
#include <osg/ClearNode>

#include <osg/Group_pmoc.hpp>
#include <osg/ClearNode_pmoc.hpp>
namespace osg{
class  QMLClearNode: public QReflect_ClearNode
{
Q_OBJECT
public:
QMLClearNode(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClearNode :public MetaQReflect_ClearNode{};

}
  Q_DECLARE_METATYPE(osg::QMLClearNode)

#endif //osg_ClearNode_customHPP


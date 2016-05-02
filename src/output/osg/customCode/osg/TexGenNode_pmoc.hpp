#ifndef osg_TexGenNode_customHPP
#define  osg_TexGenNode_customHPP 1

//includes

#include <osg/TexGenNode_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_TexGen;
			} ;
#include <osg/Group_pmoc.hpp>
#include <osg/TexGen>
#include <osg/TexGenNode>

#include <osg/TexGen_pmoc.hpp>
#include <osg/TexGenNode_pmoc.hpp>
namespace osg{
class  QMLTexGenNode: public QReflect_TexGenNode
{
Q_OBJECT
public:
QMLTexGenNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexGenNode :public MetaQReflect_TexGenNode{};

}
  Q_DECLARE_METATYPE(osg::QMLTexGenNode)

#endif //osg_TexGenNode_customHPP


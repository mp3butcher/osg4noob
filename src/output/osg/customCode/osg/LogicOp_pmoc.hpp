#ifndef osg_LogicOp_customHPP
#define  osg_LogicOp_customHPP 1

//includes
#include <osg/LogicOp_pmoc.hpp>
#include <QObject>
#include <osg/LogicOp>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/LogicOp_pmoc.hpp>
namespace osg{
class  QMLLogicOp: public QReflect_LogicOp
{
Q_OBJECT
public:
QMLLogicOp(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLogicOp :public MetaQReflect_LogicOp{};

}
  Q_DECLARE_METATYPE(osg::QMLLogicOp)

#endif //osg_LogicOp_customHPP


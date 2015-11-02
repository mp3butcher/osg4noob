#ifndef osg_Scissor_customHPP
#define  osg_Scissor_customHPP 1

//includes
#include <osg/Scissor_pmoc.hpp>
#include <QObject>
#include <osg/Scissor>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Scissor_pmoc.hpp>
namespace osg{
class  QMLScissor: public QReflect_Scissor
{
Q_OBJECT
public:
QMLScissor(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLScissor :public MetaQReflect_Scissor{};

}
  Q_DECLARE_METATYPE(osg::QMLScissor)

#endif //osg_Scissor_customHPP


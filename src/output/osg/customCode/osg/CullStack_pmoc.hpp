#ifndef osg_CullStack_customHPP
#define  osg_CullStack_customHPP 1

//includes

#include <osg/CullStack_pmoc.hpp>
#include <QObject>
#include <osg/CullSettings_pmoc.hpp>
#include <osg/CullStack>

#include <osg/CullStack_pmoc.hpp>
namespace osg{
class  QMLCullStack: public QReflect_CullStack
{
Q_OBJECT
public:
QMLCullStack(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCullStack :public MetaQReflect_CullStack{};

}
  Q_DECLARE_METATYPE(osg::QMLCullStack)

#endif //osg_CullStack_customHPP


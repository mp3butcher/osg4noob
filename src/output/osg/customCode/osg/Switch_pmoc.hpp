#ifndef osg_Switch_customHPP
#define  osg_Switch_customHPP 1

//includes

#include <osg/Switch_pmoc.hpp>
#include <QObject>
#include <osg/Group_pmoc.hpp>
#include <osg/Switch>

#include <osg/Switch_pmoc.hpp>
namespace osg{
class  QMLSwitch: public QReflect_Switch
{
Q_OBJECT
public:
QMLSwitch(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSwitch :public MetaQReflect_Switch{};

}
  Q_DECLARE_METATYPE(osg::QMLSwitch)

#endif //osg_Switch_customHPP


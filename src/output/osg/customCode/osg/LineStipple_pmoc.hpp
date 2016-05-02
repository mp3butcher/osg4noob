#ifndef osg_LineStipple_customHPP
#define  osg_LineStipple_customHPP 1

//includes
#include <osg/LineStipple_pmoc.hpp>
#include <QObject>
#include <osg/LineStipple>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/LineStipple_pmoc.hpp>
namespace osg{
class  QMLLineStipple: public QReflect_LineStipple
{
Q_OBJECT
public:
QMLLineStipple(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLineStipple :public MetaQReflect_LineStipple{};

}
  Q_DECLARE_METATYPE(osg::QMLLineStipple)

#endif //osg_LineStipple_customHPP


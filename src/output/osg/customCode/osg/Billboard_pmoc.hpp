#ifndef osg_Billboard_customHPP
#define  osg_Billboard_customHPP 1

//includes


#include <osg/Billboard_pmoc.hpp>
#include <QObject>
#include <osg/Billboard>

#include <osg/Geode_pmoc.hpp>
#include <osg/Billboard_pmoc.hpp>
namespace osg{
class  QMLBillboard: public QReflect_Billboard
{
Q_OBJECT
public:
QMLBillboard(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBillboard :public MetaQReflect_Billboard{};

}
  Q_DECLARE_METATYPE(osg::QMLBillboard)

#endif //osg_Billboard_customHPP


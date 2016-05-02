#ifndef osg_ComputeBoundsVisitor_customHPP
#define  osg_ComputeBoundsVisitor_customHPP 1

//includes

#include <osg/ComputeBoundsVisitor_pmoc.hpp>
#include <QObject>
#include <osg/ComputeBoundsVisitor>

#include <osg/NodeVisitor_pmoc.hpp>
#include <osg/ComputeBoundsVisitor_pmoc.hpp>
namespace osg{
class  QMLComputeBoundsVisitor: public QReflect_ComputeBoundsVisitor
{
Q_OBJECT
public:
QMLComputeBoundsVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLComputeBoundsVisitor :public MetaQReflect_ComputeBoundsVisitor{};

}
  Q_DECLARE_METATYPE(osg::QMLComputeBoundsVisitor)

#endif //osg_ComputeBoundsVisitor_customHPP


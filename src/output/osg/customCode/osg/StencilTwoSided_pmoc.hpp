#ifndef osg_StencilTwoSided_customHPP
#define  osg_StencilTwoSided_customHPP 1

//includes
#include <osg/StencilTwoSided_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/StencilTwoSided>

#include <osg/StencilTwoSided_pmoc.hpp>
namespace osg{
class  QMLStencilTwoSided: public QReflect_StencilTwoSided
{
Q_OBJECT
public:
QMLStencilTwoSided(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLStencilTwoSided :public MetaQReflect_StencilTwoSided{};

}
  Q_DECLARE_METATYPE(osg::QMLStencilTwoSided)

#endif //osg_StencilTwoSided_customHPP


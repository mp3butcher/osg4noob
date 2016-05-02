#ifndef osg_Stencil_customHPP
#define  osg_Stencil_customHPP 1

//includes
#include <osg/Stencil_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Stencil>

#include <osg/Stencil_pmoc.hpp>
namespace osg{
class  QMLStencil: public QReflect_Stencil
{
Q_OBJECT
public:
QMLStencil(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLStencil :public MetaQReflect_Stencil{};

}
  Q_DECLARE_METATYPE(osg::QMLStencil)

#endif //osg_Stencil_customHPP


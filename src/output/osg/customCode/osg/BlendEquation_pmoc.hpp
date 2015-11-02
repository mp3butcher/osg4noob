#ifndef osg_BlendEquation_customHPP
#define  osg_BlendEquation_customHPP 1

//includes
#include <osg/BlendEquation_pmoc.hpp>
#include <QObject>
#include <osg/BlendEquation>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/BlendEquation_pmoc.hpp>
namespace osg{
class  QMLBlendEquation: public QReflect_BlendEquation
{
Q_OBJECT
public:
QMLBlendEquation(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBlendEquation :public MetaQReflect_BlendEquation{};

}
  Q_DECLARE_METATYPE(osg::QMLBlendEquation)

#endif //osg_BlendEquation_customHPP


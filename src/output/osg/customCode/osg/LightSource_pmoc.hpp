#ifndef osg_LightSource_customHPP
#define  osg_LightSource_customHPP 1

//includes

#include <osg/LightSource_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Light;
			} ;
#include <osg/Group_pmoc.hpp>
#include <osg/Light>
#include <osg/LightSource>

#include <osg/Light_pmoc.hpp>
#include <osg/LightSource_pmoc.hpp>
namespace osg{
class  QMLLightSource: public QReflect_LightSource
{
Q_OBJECT
public:
QMLLightSource(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLightSource :public MetaQReflect_LightSource{};

}
  Q_DECLARE_METATYPE(osg::QMLLightSource)

#endif //osg_LightSource_customHPP


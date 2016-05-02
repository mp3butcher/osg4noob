#ifndef osg_Fog_customHPP
#define  osg_Fog_customHPP 1

//includes
#include <osg/Fog_pmoc.hpp>
#include <QObject>
#include <osg/Fog>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Fog_pmoc.hpp>
namespace osg{
class  QMLFog: public QReflect_Fog
{
Q_OBJECT
public:
QMLFog(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFog :public MetaQReflect_Fog{};

}
  Q_DECLARE_METATYPE(osg::QMLFog)

#endif //osg_Fog_customHPP


#ifndef osg_ShadowVolumeOccluder_customHPP
#define  osg_ShadowVolumeOccluder_customHPP 1

//includes

#include <osg/ShadowVolumeOccluder_pmoc.hpp>
#include <QObject>
#include <osg/ShadowVolumeOccluder>

#include <osg/ShadowVolumeOccluder_pmoc.hpp>
namespace osg{
class  QMLShadowVolumeOccluder: public QReflect_ShadowVolumeOccluder
{
Q_OBJECT
public:
QMLShadowVolumeOccluder(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShadowVolumeOccluder :public MetaQReflect_ShadowVolumeOccluder{};

}
  Q_DECLARE_METATYPE(osg::QMLShadowVolumeOccluder)

#endif //osg_ShadowVolumeOccluder_customHPP


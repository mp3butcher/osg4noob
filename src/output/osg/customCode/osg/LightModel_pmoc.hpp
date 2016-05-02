#ifndef osg_LightModel_customHPP
#define  osg_LightModel_customHPP 1

//includes
#include <osg/LightModel_pmoc.hpp>
#include <QObject>
#include <osg/LightModel>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/LightModel_pmoc.hpp>
namespace osg{
class  QMLLightModel: public QReflect_LightModel
{
Q_OBJECT
public:
QMLLightModel(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLightModel :public MetaQReflect_LightModel{};

}
  Q_DECLARE_METATYPE(osg::QMLLightModel)

#endif //osg_LightModel_customHPP


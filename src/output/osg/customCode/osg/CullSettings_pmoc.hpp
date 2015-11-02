#ifndef osg_CullSettings_customHPP
#define  osg_CullSettings_customHPP 1

//includes

#include <osg/CullSettings_pmoc.hpp>
#include <QObject>
#include <osg/CullSettings>

#include <osg/CullSettings_pmoc.hpp>
namespace osg{
class  QMLCullSettings: public QReflect_CullSettings
{

Q_OBJECT
Q_PROPERTY(int computeNearFarMode READ  computeNearFarMode WRITE computeNearFarMode NOTIFY computeNearFarModeChanged)
public:
QMLCullSettings(pmoc::Instance *i=0,QObject* parent=0);
void computeNearFarMode(int);
int computeNearFarMode()const;
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();
 signals:
 void computeNearFarModeChanged(int);

};
class   MetaQMLCullSettings :public MetaQReflect_CullSettings{};

}
  Q_DECLARE_METATYPE(osg::QMLCullSettings)

#endif //osg_CullSettings_customHPP


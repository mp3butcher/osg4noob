#ifndef osg_DisplaySettings_customHPP
#define  osg_DisplaySettings_customHPP 1

//includes
#include <osg/DisplaySettings_pmoc.hpp>
#include <QObject>
#include <osg/DisplaySettings>

#include <osg/Referenced_pmoc.hpp>
#include <osg/DisplaySettings_pmoc.hpp>
namespace osg{
class  QMLDisplaySettings: public QReflect_DisplaySettings
{
Q_OBJECT
public:
QMLDisplaySettings(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDisplaySettings :public MetaQReflect_DisplaySettings{};

}
  Q_DECLARE_METATYPE(osg::QMLDisplaySettings)

#endif //osg_DisplaySettings_customHPP


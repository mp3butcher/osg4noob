#ifndef osg_ShadeModel_customHPP
#define  osg_ShadeModel_customHPP 1

//includes
#include <osg/ShadeModel_pmoc.hpp>
#include <QObject>
#include <osg/ShadeModel>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ShadeModel_pmoc.hpp>
namespace osg{
class  QMLShadeModel: public QReflect_ShadeModel
{
Q_OBJECT
public:
QMLShadeModel(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShadeModel :public MetaQReflect_ShadeModel{};

}
  Q_DECLARE_METATYPE(osg::QMLShadeModel)

#endif //osg_ShadeModel_customHPP


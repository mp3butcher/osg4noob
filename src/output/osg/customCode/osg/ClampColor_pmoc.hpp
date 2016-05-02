#ifndef osg_ClampColor_customHPP
#define  osg_ClampColor_customHPP 1

//includes
#include <osg/ClampColor_pmoc.hpp>
#include <QObject>
#include <osg/ClampColor>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ClampColor_pmoc.hpp>
namespace osg{
class  QMLClampColor: public QReflect_ClampColor
{
Q_OBJECT
public:
QMLClampColor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClampColor :public MetaQReflect_ClampColor{};

}
  Q_DECLARE_METATYPE(osg::QMLClampColor)

#endif //osg_ClampColor_customHPP


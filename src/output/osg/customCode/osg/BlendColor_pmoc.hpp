#ifndef osg_BlendColor_customHPP
#define  osg_BlendColor_customHPP 1

//includes
#include <osg/BlendColor_pmoc.hpp>
#include <QObject>
#include <osg/BlendColor>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/BlendColor_pmoc.hpp>
namespace osg{
class  QMLBlendColor: public QReflect_BlendColor
{
Q_OBJECT
public:
QMLBlendColor(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBlendColor :public MetaQReflect_BlendColor{};

}
  Q_DECLARE_METATYPE(osg::QMLBlendColor)

#endif //osg_BlendColor_customHPP


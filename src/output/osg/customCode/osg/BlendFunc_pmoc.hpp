#ifndef osg_BlendFunc_customHPP
#define  osg_BlendFunc_customHPP 1

//includes
#include <osg/BlendFunc_pmoc.hpp>
#include <QObject>
#include <osg/BlendFunc>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/BlendFunc_pmoc.hpp>
namespace osg{
class  QMLBlendFunc: public QReflect_BlendFunc
{
Q_OBJECT
public:
QMLBlendFunc(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLBlendFunc :public MetaQReflect_BlendFunc{};

}
  Q_DECLARE_METATYPE(osg::QMLBlendFunc)

#endif //osg_BlendFunc_customHPP


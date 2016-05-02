#ifndef osg_ColorMask_customHPP
#define  osg_ColorMask_customHPP 1

//includes
#include <osg/ColorMask_pmoc.hpp>
#include <QObject>
#include <osg/ColorMask>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ColorMask_pmoc.hpp>
namespace osg{
class  QMLColorMask: public QReflect_ColorMask
{
Q_OBJECT
public:
QMLColorMask(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLColorMask :public MetaQReflect_ColorMask{};

}
  Q_DECLARE_METATYPE(osg::QMLColorMask)

#endif //osg_ColorMask_customHPP


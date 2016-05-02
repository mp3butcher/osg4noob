#ifndef osg_Vec4us_customHPP
#define  osg_Vec4us_customHPP 1

//includes
#include <osg/Vec4us_pmoc.hpp>
#include <QObject>
#include <osg/Vec4us>

#include <osg/Vec4us_pmoc.hpp>
namespace osg{
class  QMLVec4us: public QReflect_Vec4us
{
Q_OBJECT
public:
QMLVec4us(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec4us :public MetaQReflect_Vec4us{};

}
  Q_DECLARE_METATYPE(osg::QMLVec4us)

#endif //osg_Vec4us_customHPP


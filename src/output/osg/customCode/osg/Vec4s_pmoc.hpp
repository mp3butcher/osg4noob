#ifndef osg_Vec4s_customHPP
#define  osg_Vec4s_customHPP 1

//includes
#include <osg/Vec4s_pmoc.hpp>
#include <QObject>
#include <osg/Vec4s>

#include <osg/Vec4s_pmoc.hpp>
namespace osg{
class  QMLVec4s: public QReflect_Vec4s
{
Q_OBJECT
public:
QMLVec4s(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec4s :public MetaQReflect_Vec4s{};

}
  Q_DECLARE_METATYPE(osg::QMLVec4s)

#endif //osg_Vec4s_customHPP


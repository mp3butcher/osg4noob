#ifndef osg_Vec4ub_customHPP
#define  osg_Vec4ub_customHPP 1

//includes
#include <osg/Vec4ub_pmoc.hpp>
#include <QObject>
#include <osg/Vec4ub>

#include <osg/Vec4ub_pmoc.hpp>
namespace osg{
class  QMLVec4ub: public QReflect_Vec4ub
{
Q_OBJECT
public:
QMLVec4ub(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLVec4ub :public MetaQReflect_Vec4ub{};

}
  Q_DECLARE_METATYPE(osg::QMLVec4ub)

#endif //osg_Vec4ub_customHPP


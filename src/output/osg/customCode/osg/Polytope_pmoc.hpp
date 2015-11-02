#ifndef osg_Polytope_customHPP
#define  osg_Polytope_customHPP 1

//includes
#include <osg/Polytope_pmoc.hpp>
#include <QObject>
#include <osg/Polytope>

#include <osg/Polytope_pmoc.hpp>
namespace osg{
class  QMLPolytope: public QReflect_Polytope
{
Q_OBJECT
public:
QMLPolytope(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPolytope :public MetaQReflect_Polytope{};

}
  Q_DECLARE_METATYPE(osg::QMLPolytope)

#endif //osg_Polytope_customHPP


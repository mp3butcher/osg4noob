#ifndef osg_CullingSet_customHPP
#define  osg_CullingSet_customHPP 1

//includes

#include <osg/CullingSet_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Polytope;
			} ;
#include <osg/CullingSet>

#include <osg/Polytope>
#include <osg/Polytope_pmoc.hpp>
#include <osg/Referenced_pmoc.hpp>
#include <osg/CullingSet_pmoc.hpp>
namespace osg{
class  QMLCullingSet: public QReflect_CullingSet
{
Q_OBJECT
public:
QMLCullingSet(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCullingSet :public MetaQReflect_CullingSet{};

}
  Q_DECLARE_METATYPE(osg::QMLCullingSet)

#endif //osg_CullingSet_customHPP


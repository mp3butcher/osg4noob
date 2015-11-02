#ifndef osg_Projection_customHPP
#define  osg_Projection_customHPP 1

//includes

#include <osg/Projection_pmoc.hpp>
#include <QObject>
#include <osg/Group_pmoc.hpp>
#include <osg/Projection>

#include <osg/Projection_pmoc.hpp>
namespace osg{
class  QMLProjection: public QReflect_Projection
{
Q_OBJECT
public:
QMLProjection(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLProjection :public MetaQReflect_Projection{};

}
  Q_DECLARE_METATYPE(osg::QMLProjection)

#endif //osg_Projection_customHPP


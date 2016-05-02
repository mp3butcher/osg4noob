#ifndef osg_Depth_customHPP
#define  osg_Depth_customHPP 1

//includes
#include <osg/Depth_pmoc.hpp>
#include <QObject>
#include <osg/Depth>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Depth_pmoc.hpp>
namespace osg{
class  QMLDepth: public QReflect_Depth
{
Q_OBJECT
public:
QMLDepth(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLDepth :public MetaQReflect_Depth{};

}
  Q_DECLARE_METATYPE(osg::QMLDepth)

#endif //osg_Depth_customHPP


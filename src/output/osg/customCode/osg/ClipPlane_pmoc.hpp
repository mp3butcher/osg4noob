#ifndef osg_ClipPlane_customHPP
#define  osg_ClipPlane_customHPP 1

//includes
#include <osg/ClipPlane_pmoc.hpp>
#include <QObject>
#include <osg/ClipPlane>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ClipPlane_pmoc.hpp>
namespace osg{
class  QMLClipPlane: public QReflect_ClipPlane
{
Q_OBJECT
public:
QMLClipPlane(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClipPlane :public MetaQReflect_ClipPlane{};

}
  Q_DECLARE_METATYPE(osg::QMLClipPlane)

#endif //osg_ClipPlane_customHPP


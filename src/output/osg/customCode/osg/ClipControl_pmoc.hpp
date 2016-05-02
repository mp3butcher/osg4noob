#ifndef osg_ClipControl_customHPP
#define  osg_ClipControl_customHPP 1

//includes
#include <osg/ClipControl_pmoc.hpp>
#include <QObject>
#include <osg/ClipControl>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ClipControl_pmoc.hpp>
namespace osg{
class  QMLClipControl: public QReflect_ClipControl
{
Q_OBJECT
public:
QMLClipControl(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClipControl :public MetaQReflect_ClipControl{};

}
  Q_DECLARE_METATYPE(osg::QMLClipControl)

#endif //osg_ClipControl_customHPP


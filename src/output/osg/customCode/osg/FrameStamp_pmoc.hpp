#ifndef osg_FrameStamp_customHPP
#define  osg_FrameStamp_customHPP 1

//includes
#include <osg/FrameStamp_pmoc.hpp>
#include <QObject>
#include <osg/FrameStamp>

#include <osg/Referenced_pmoc.hpp>
#include <osg/FrameStamp_pmoc.hpp>
namespace osg{
class  QMLFrameStamp: public QReflect_FrameStamp
{
Q_OBJECT
public:
QMLFrameStamp(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFrameStamp :public MetaQReflect_FrameStamp{};

}
  Q_DECLARE_METATYPE(osg::QMLFrameStamp)

#endif //osg_FrameStamp_customHPP


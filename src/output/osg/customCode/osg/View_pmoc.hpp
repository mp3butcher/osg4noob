#ifndef osg_View_customHPP
#define  osg_View_customHPP 1

//includes

#include <osg/View_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Light;
			} ;
namespace osg{
class QReflect_FrameStamp;
			} ;
namespace osg{
class QReflect_Camera;
			} ;
namespace osg{
class QReflect_Stats;
			} ;
#include <osg/Camera>
#include <osg/Camera_pmoc.hpp>
#include <osg/FrameStamp>
#include <osg/FrameStamp_pmoc.hpp>
#include <osg/Light>
#include <osg/Light_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/Stats>
#include <osg/Stats_pmoc.hpp>
#include <osg/View>

#include <osg/View_pmoc.hpp>
namespace osg{
class  QMLView: public QReflect_View
{
Q_OBJECT
public:
QMLView(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLView :public MetaQReflect_View{};

}
  Q_DECLARE_METATYPE(osg::QMLView)

#endif //osg_View_customHPP


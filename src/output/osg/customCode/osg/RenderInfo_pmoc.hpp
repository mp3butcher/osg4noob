#ifndef osg_RenderInfo_customHPP
#define  osg_RenderInfo_customHPP 1

//includes


#include <osg/RenderInfo_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Referenced;
			} ;
namespace osg{
class QReflect_State;
			} ;
namespace osg{
class QReflect_View;
			} ;
#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/RenderInfo>

#include <osg/State>
#include <osg/State_pmoc.hpp>
#include <osg/View>
#include <osg/View_pmoc.hpp>
#include <osg/RenderInfo_pmoc.hpp>
namespace osg{
class  QMLRenderInfo: public QReflect_RenderInfo
{
Q_OBJECT
public:
QMLRenderInfo(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLRenderInfo :public MetaQReflect_RenderInfo{};

}
  Q_DECLARE_METATYPE(osg::QMLRenderInfo)

#endif //osg_RenderInfo_customHPP


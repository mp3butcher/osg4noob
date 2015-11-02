#ifndef osg_Stats_customHPP
#define  osg_Stats_customHPP 1

//includes
#include <osg/Stats_pmoc.hpp>
#include <QObject>
#include <osg/Referenced_pmoc.hpp>
#include <osg/Stats>

#include <osg/Stats_pmoc.hpp>
namespace osg{
class  QMLStats: public QReflect_Stats
{
Q_OBJECT
public:
QMLStats(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLStats :public MetaQReflect_Stats{};

}
  Q_DECLARE_METATYPE(osg::QMLStats)

#endif //osg_Stats_customHPP


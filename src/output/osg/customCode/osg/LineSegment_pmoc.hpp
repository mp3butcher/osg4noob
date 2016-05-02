#ifndef osg_LineSegment_customHPP
#define  osg_LineSegment_customHPP 1

//includes
#include <osg/LineSegment_pmoc.hpp>
#include <QObject>
#include <osg/LineSegment>

#include <osg/Referenced_pmoc.hpp>
#include <osg/LineSegment_pmoc.hpp>
namespace osg{
class  QMLLineSegment: public QReflect_LineSegment
{
Q_OBJECT
public:
QMLLineSegment(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLLineSegment :public MetaQReflect_LineSegment{};

}
  Q_DECLARE_METATYPE(osg::QMLLineSegment)

#endif //osg_LineSegment_customHPP


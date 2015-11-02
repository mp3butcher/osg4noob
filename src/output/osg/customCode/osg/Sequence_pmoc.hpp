#ifndef osg_Sequence_customHPP
#define  osg_Sequence_customHPP 1

//includes

#include <osg/Sequence_pmoc.hpp>
#include <QObject>
#include <osg/Group_pmoc.hpp>
#include <osg/Sequence>

#include <osg/Sequence_pmoc.hpp>
namespace osg{
class  QMLSequence: public QReflect_Sequence
{
Q_OBJECT
public:
QMLSequence(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSequence :public MetaQReflect_Sequence{};

}
  Q_DECLARE_METATYPE(osg::QMLSequence)

#endif //osg_Sequence_customHPP


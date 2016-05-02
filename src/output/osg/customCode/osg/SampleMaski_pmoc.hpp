#ifndef osg_SampleMaski_customHPP
#define  osg_SampleMaski_customHPP 1

//includes
#include <osg/SampleMaski_pmoc.hpp>
#include <QObject>
#include <osg/SampleMaski>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/SampleMaski_pmoc.hpp>
namespace osg{
class  QMLSampleMaski: public QReflect_SampleMaski
{
Q_OBJECT
public:
QMLSampleMaski(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLSampleMaski :public MetaQReflect_SampleMaski{};

}
  Q_DECLARE_METATYPE(osg::QMLSampleMaski)

#endif //osg_SampleMaski_customHPP


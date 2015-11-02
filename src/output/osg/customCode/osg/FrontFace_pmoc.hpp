#ifndef osg_FrontFace_customHPP
#define  osg_FrontFace_customHPP 1

//includes
#include <osg/FrontFace_pmoc.hpp>
#include <QObject>
#include <osg/FrontFace>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/FrontFace_pmoc.hpp>
namespace osg{
class  QMLFrontFace: public QReflect_FrontFace
{
Q_OBJECT
public:
QMLFrontFace(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFrontFace :public MetaQReflect_FrontFace{};

}
  Q_DECLARE_METATYPE(osg::QMLFrontFace)

#endif //osg_FrontFace_customHPP


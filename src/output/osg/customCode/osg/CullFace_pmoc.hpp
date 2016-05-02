#ifndef osg_CullFace_customHPP
#define  osg_CullFace_customHPP 1

//includes
#include <osg/CullFace_pmoc.hpp>
#include <QObject>
#include <osg/CullFace>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/CullFace_pmoc.hpp>
namespace osg{
class  QMLCullFace: public QReflect_CullFace
{
Q_OBJECT
public:
QMLCullFace(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLCullFace :public MetaQReflect_CullFace{};

}
  Q_DECLARE_METATYPE(osg::QMLCullFace)

#endif //osg_CullFace_customHPP


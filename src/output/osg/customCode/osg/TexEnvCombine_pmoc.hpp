#ifndef osg_TexEnvCombine_customHPP
#define  osg_TexEnvCombine_customHPP 1

//includes
#include <osg/TexEnvCombine_pmoc.hpp>
#include <QObject>
#include <osg/StateAttribute_pmoc.hpp>
#include <osg/TexEnvCombine>

#include <osg/TexEnvCombine_pmoc.hpp>
namespace osg{
class  QMLTexEnvCombine: public QReflect_TexEnvCombine
{
Q_OBJECT
public:
QMLTexEnvCombine(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTexEnvCombine :public MetaQReflect_TexEnvCombine{};

}
  Q_DECLARE_METATYPE(osg::QMLTexEnvCombine)

#endif //osg_TexEnvCombine_customHPP


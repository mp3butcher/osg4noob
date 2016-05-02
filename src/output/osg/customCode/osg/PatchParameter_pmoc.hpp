#ifndef osg_PatchParameter_customHPP
#define  osg_PatchParameter_customHPP 1

//includes
#include <osg/PatchParameter_pmoc.hpp>
#include <QObject>
#include <osg/PatchParameter>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/PatchParameter_pmoc.hpp>
namespace osg{
class  QMLPatchParameter: public QReflect_PatchParameter
{
Q_OBJECT
public:
QMLPatchParameter(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLPatchParameter :public MetaQReflect_PatchParameter{};

}
  Q_DECLARE_METATYPE(osg::QMLPatchParameter)

#endif //osg_PatchParameter_customHPP


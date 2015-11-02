#ifndef osg_ShaderComposer_customHPP
#define  osg_ShaderComposer_customHPP 1

//includes
#include <osg/ShaderComposer_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/ShaderComposer>

#include <osg/ShaderComposer_pmoc.hpp>
namespace osg{
class  QMLShaderComposer: public QReflect_ShaderComposer
{
Q_OBJECT
public:
QMLShaderComposer(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShaderComposer :public MetaQReflect_ShaderComposer{};

}
  Q_DECLARE_METATYPE(osg::QMLShaderComposer)

#endif //osg_ShaderComposer_customHPP


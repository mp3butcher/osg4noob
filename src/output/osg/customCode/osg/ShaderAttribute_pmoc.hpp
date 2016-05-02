#ifndef osg_ShaderAttribute_customHPP
#define  osg_ShaderAttribute_customHPP 1

//includes
#include <osg/ShaderAttribute_pmoc.hpp>
#include <QObject>
#include <osg/ShaderAttribute>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/ShaderAttribute_pmoc.hpp>
namespace osg{
class  QMLShaderAttribute: public QReflect_ShaderAttribute
{
Q_OBJECT
public:
QMLShaderAttribute(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLShaderAttribute :public MetaQReflect_ShaderAttribute{};

}
  Q_DECLARE_METATYPE(osg::QMLShaderAttribute)

#endif //osg_ShaderAttribute_customHPP


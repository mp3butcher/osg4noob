#ifndef osg_StateAttribute_customHPP
#define  osg_StateAttribute_customHPP 1

//includes
#include <osg/StateAttribute_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_StateAttributeCallback;
} ;
namespace osg
{
class QReflect_ShaderComponent;
} ;
#include <osg/Callback>
#include <osg/Callback_pmoc.hpp>
#include <osg/Object_pmoc.hpp>
#include <osg/Shader>
#include <osg/Shader_pmoc.hpp>
#include <osg/StateAttribute>

#include <osg/StateAttribute_pmoc.hpp>
namespace osg
{
class  QMLStateAttribute: public QReflect_StateAttribute
{
    Q_OBJECT
    Q_PROPERTY(int overrideMode READ overrideMode WRITE overrideMode NOTIFY overrideModeChanged)
    Q_PROPERTY(int modeValue READ modeValue WRITE modeValue NOTIFY modeValueChanged)
public:

    void modeValue(int);
    int modeValue()const;

    void overrideMode(int);
    int overrideMode()const;


    QMLStateAttribute(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();
signals:

    void modeValueChanged(int);
    void overrideModeChanged(int);
};
class   MetaQMLStateAttribute :public MetaQReflect_StateAttribute {};

}
Q_DECLARE_METATYPE(osg::QMLStateAttribute)

#endif //osg_StateAttribute_customHPP


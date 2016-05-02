#ifndef osg_Shader_customHPP
#define  osg_Shader_customHPP 1

//includes
#include <osg/Shader_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/Shader>

#include <osg/Shader_pmoc.hpp>



#include <QUrl>
#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>
namespace osg
{
class  QMLShaderBinary: public QReflect_ShaderBinary
{
    Q_OBJECT


public:
    QMLShaderBinary(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};
class   MetaQMLShaderBinary :public MetaQReflect_ShaderBinary{};
}
Q_DECLARE_METATYPE(osg::QMLShaderBinary)
#include <osg/Shader_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/Shader> 

#include <osg/Shader_pmoc.hpp>
namespace osg
{
class  QMLShaderComponent: public QReflect_ShaderComponent
{
    Q_OBJECT
public:
    QMLShaderComponent(const pmoc::Instance *i=0,QObject* parent=0);
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};

class   MetaQMLShaderComponent:public MetaQReflect_ShaderComponent{};
}
Q_DECLARE_METATYPE(osg::QMLShaderComponent)
#include <osg/Shader_pmoc.hpp>
#include <QObject>
namespace osg
{
class QReflect_ShaderBinary;
} ;
#include <osg/Object_pmoc.hpp>
#include <osg/Shader>
#include <osg/Shader>

#include <osg/Shader_pmoc.hpp>
#include <osg/Shader_pmoc.hpp>
namespace osg
{
class  QMLShader: public QReflect_Shader
{
    Q_OBJECT
     Q_PROPERTY(int shaderType READ getshaderType WRITE setshaderType NOTIFY shaderTypeChanged)
    Q_PROPERTY(QStringList typeList READ typeList NOTIFY typeListChanged)
public:
    QStringList typeList()
    {
        return shaderTypeList;
    }

    int getshaderType()const;
    void setshaderType(int);
signals:
    void typeListChanged(QStringList&);
    void shaderTypeChanged(int);
protected:

    QStringList shaderTypeList;
    QsciScintilla* qsci;
    QsciLexerCPP *lex;
public slots:
    Q_INVOKABLE void setSourceFromFile(QUrl );
    void saveChange();
    //popEditor
    void popQscintilla();
public:
    QMLShader(const pmoc::Instance *i=0,QObject* parent=0);
    virtual ~QMLShader();
    virtual QQuickItem * connect2View(QQuickItem*);
public slots:
    virtual void  updateModel();

};
class   MetaQMLShader :public MetaQReflect_Shader{};

}
Q_DECLARE_METATYPE(osg::QMLShader)

#endif //osg_Shader_customHPP


#ifndef osg_ShaderAttribute_pmocHPP
#define  osg_ShaderAttribute_pmocHPP 1


#include <osg/ShaderAttribute_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Uniform;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Shader;
			} ;
#include <osg/ShaderAttribute>
#include <osg/ShaderAttribute>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShaderAttribute: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ShaderAttribute * _model;
QReflect_ShaderAttribute(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShaderAttribute( );
//ShaderAttribute
//virtual  Type  getType();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// void  setType( Type );
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  addShader(osg::QReflect_Shader *shader);
Q_INVOKABLE  unsigned int  addUniform(osg::QReflect_Uniform *uniform);
Q_INVOKABLE  unsigned int  getNumShaders()const;
Q_INVOKABLE  unsigned int  getNumUniforms()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_Shader*  getShader( unsigned int i);
Q_INVOKABLE osg::QReflect_Shader*  getShader( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Uniform*  getUniform( unsigned int i);
Q_INVOKABLE osg::QReflect_Uniform*  getUniform( unsigned int i)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  removeShader( unsigned int i);
Q_INVOKABLE void  removeUniform( unsigned int i);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShaderAttribute: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ShaderAttribute> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShaderAttribute();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osg_ShaderAttribute_pmocHPP


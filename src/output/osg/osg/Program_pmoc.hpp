#ifndef osg_Program_pmocHPP
#define  osg_Program_pmocHPP 1
#include <osg/Program_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Shader;
			} ;
#include <osg/Program>
#include <osg/Program>

#include <osg/ref_ptr>
namespace osg{
class QReflect_Shader; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Program: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Program * _model;
QReflect_Program(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Program( );
//Program
// PerContextProgram * getPCP( State &);
// ProgramBinary * getProgramBinary();
// ShaderDefines & getShaderDefines();
// bool  getGlProgramInfoLog( unsigned int  , std::string &);
//virtual  void  apply( osg::State &);
//virtual  void  compileGLObjects( osg::State &);
//virtual  void  releaseGLObjects( osg::State *);
// void  setProgramBinary( ProgramBinary *);
// void  setShaderDefines(const  ShaderDefines &);
//const  AttribBindingList & getAttribBindingList();
//const  FragDataBindingList & getFragDataBindingList();
//const  ProgramBinary * getProgramBinary();
//const  ShaderDefines & getShaderDefines();
//const  UniformBlockBindingList & getUniformBlockBindingList();
Q_INVOKABLE  GLenum  getTransformFeedBackMode()const;
Q_INVOKABLE  GLint  getParameter( GLenum )const;
Q_INVOKABLE  bool  isFixedFunction()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  unsigned int  getNumShaders()const;
Q_INVOKABLE  unsigned int  getNumTransformFeedBackVaryings()const;
Q_INVOKABLE QString  getTransformFeedBackVarying( unsigned int )const;
Q_INVOKABLE osg::QReflect_Shader*  getShader( unsigned int );
Q_INVOKABLE osg::QReflect_Shader*  getShader( unsigned int )const;
Q_INVOKABLE void   addShader( osg::QReflect_Shader *par);//{return new osg::QReflect_Shader(_model->getShader());}
Q_INVOKABLE void  addBindAttribLocation(const  QString & , GLuint );
Q_INVOKABLE void  addBindFragDataLocation(const  QString & , GLuint );
Q_INVOKABLE void  addBindUniformBlock(const  QString & , GLuint );
Q_INVOKABLE void  addTransformFeedBackVarying(const  QString &);
Q_INVOKABLE void  dirtyProgram();
Q_INVOKABLE void  getComputeGroups( GLint & , GLint & , GLint &)const;
Q_INVOKABLE void  removeBindAttribLocation(const  QString &);
Q_INVOKABLE void  removeBindFragDataLocation(const  QString &);
Q_INVOKABLE void  removeBindUniformBlock(const  QString &);
Q_INVOKABLE void  removeTransformFeedBackVarying(const  QString &);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setComputeGroups( GLint  , GLint  , GLint );
Q_INVOKABLE void  setParameter( GLenum  , GLint );
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void  setTransformFeedBackMode( GLenum );
Q_INVOKABLE void pmoc_reverse_addShader( osg::QReflect_Shader *par);//{_model->setShader(par->_model);emit ShaderCollectionChanged(par);}
signals: void ShaderCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Program: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Program> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Program();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 

#endif //osg_Program_pmocHPP


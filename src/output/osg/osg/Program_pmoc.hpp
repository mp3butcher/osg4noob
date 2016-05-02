#ifndef osg_Program_pmocHPP
#define  osg_Program_pmocHPP 1


#include <osg/Program_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Shader;
			} ;
#include <osg/Program>
#include <osg/Program>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Program: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Program * _model;
QReflect_Program(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Program( );
//Program
// PerContextProgram * getPCP( State &);
// ProgramBinary * getProgramBinary();
// ShaderDefines & getShaderDefines();
// bool  getGlProgramInfoLog( unsigned int  , std::string &);
// void  setProgramBinary( ProgramBinary *);
// void  setShaderDefines(const  ShaderDefines &);
//const  AttribBindingList & getAttribBindingList();
//const  FragDataBindingList & getFragDataBindingList();
//const  ProgramBinary * getProgramBinary();
//const  ShaderDefines & getShaderDefines();
//const  UniformBlockBindingList & getUniformBlockBindingList();
Q_INVOKABLE  GLenum  getTransformFeedBackMode()const;
Q_INVOKABLE  GLint  getParameter( GLenum pname)const;
Q_INVOKABLE  bool  addShader(osg::QReflect_Shader *shader);
Q_INVOKABLE  bool  isFixedFunction()const;
Q_INVOKABLE  bool  removeShader(osg::QReflect_Shader *shader);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  getNumShaders()const;
Q_INVOKABLE  unsigned int  getNumTransformFeedBackVaryings()const;
Q_INVOKABLE QString  getTransformFeedBackVarying( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Shader*  getShader( unsigned int i);
Q_INVOKABLE osg::QReflect_Shader*  getShader( unsigned int i)const;
Q_INVOKABLE void  addBindAttribLocation(const  QString &name , GLuint index);
Q_INVOKABLE void  addBindFragDataLocation(const  QString &name , GLuint index);
Q_INVOKABLE void  addBindUniformBlock(const  QString &name , GLuint index);
Q_INVOKABLE void  addTransformFeedBackVarying(const  QString &outname);
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  deleteGlProgram( unsigned int contextID , GLuint program);
Q_INVOKABLE void  dirtyProgram();
Q_INVOKABLE void  discardDeletedGlPrograms( unsigned int contextID);
Q_INVOKABLE void  flushDeletedGlPrograms( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  getComputeGroups( GLint &numGroupsX , GLint &numGroupsY , GLint &numGroupsZ)const;
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  removeBindAttribLocation(const  QString &name);
Q_INVOKABLE void  removeBindFragDataLocation(const  QString &name);
Q_INVOKABLE void  removeBindUniformBlock(const  QString &name);
Q_INVOKABLE void  removeTransformFeedBackVarying(const  QString &name);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setComputeGroups( GLint numGroupsX , GLint numGroupsY , GLint numGroupsZ);
Q_INVOKABLE void  setParameter( GLenum pname , GLint value);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_INVOKABLE void  setTransformFeedBackMode( GLenum e);
Q_PROPERTY(GLenum  TransformFeedBackMode  READ getTransformFeedBackMode WRITE setTransformFeedBackMode NOTIFY TransformFeedBackModeChanged)
signals: void ShaderCollectionChanged();
public:
signals: void TransformFeedBackModeChanged();
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


#endif //osg_Program_pmocHPP


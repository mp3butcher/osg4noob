#ifndef osg_VertexProgram_pmocHPP
#define  osg_VertexProgram_pmocHPP 1


#include <osg/VertexProgram_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/VertexProgram>
#include <osg/VertexProgram>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_VertexProgram: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
VertexProgram * _model;
QReflect_VertexProgram(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VertexProgram( );
//VertexProgram
// LocalParamList & getLocalParameters();
// MatrixList & getMatrices();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// void  setLocalParameters(const  LocalParamList &);
// void  setMatrices(const  MatrixList &);
//const  LocalParamList & getLocalParameters();
//const  MatrixList & getMatrices();
Q_INVOKABLE  GLuint&  getVertexProgramID( unsigned int contextID)const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE QString  getVertexProgram()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  deleteVertexProgramObject( unsigned int contextID , GLuint handle);
Q_INVOKABLE void  dirtyVertexProgramObject();
Q_INVOKABLE void  discardDeletedVertexProgramObjects( unsigned int contextID);
Q_INVOKABLE void  flushDeletedVertexProgramObjects( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setMatrix(const  GLenum mode ,osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  setProgramLocalParameter(const  GLuint index ,osg::QReflect_Vec4f *p);
Q_INVOKABLE void  setVertexProgram(const  QString &program);
Q_INVOKABLE void  setVertexProgram(const  char *program);
Q_PROPERTY(QString  VertexProgram  READ getVertexProgram WRITE setVertexProgram NOTIFY VertexProgramChanged)
signals: void VertexProgramChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_VertexProgram: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::VertexProgram> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_VertexProgram();
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


#endif //osg_VertexProgram_pmocHPP


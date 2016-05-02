#ifndef osg_FragmentProgram_pmocHPP
#define  osg_FragmentProgram_pmocHPP 1


#include <osg/FragmentProgram_pmoc.hpp>
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
#include <osg/FragmentProgram>
#include <osg/FragmentProgram>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_FragmentProgram: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
FragmentProgram * _model;
QReflect_FragmentProgram(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_FragmentProgram( );
//FragmentProgram
// LocalParamList & getLocalParameters();
// MatrixList & getMatrices();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// void  setLocalParameters(const  LocalParamList &);
// void  setMatrices(const  MatrixList &);
//const  LocalParamList & getLocalParameters();
//const  MatrixList & getMatrices();
Q_INVOKABLE  GLuint&  getFragmentProgramID( unsigned int contextID)const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE QString  getFragmentProgram()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  deleteFragmentProgramObject( unsigned int contextID , GLuint handle);
Q_INVOKABLE void  dirtyFragmentProgramObject();
Q_INVOKABLE void  discardDeletedFragmentProgramObjects( unsigned int contextID);
Q_INVOKABLE void  flushDeletedFragmentProgramObjects( unsigned int contextID , double currentTime , double &availableTime);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  setFragmentProgram(const  QString &program);
Q_INVOKABLE void  setFragmentProgram(const  char *program);
Q_INVOKABLE void  setMatrix(const  GLenum mode ,osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  setProgramLocalParameter(const  GLuint index ,osg::QReflect_Vec4f *p);
Q_PROPERTY(QString  FragmentProgram  READ getFragmentProgram WRITE setFragmentProgram NOTIFY FragmentProgramChanged)
signals: void FragmentProgramChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_FragmentProgram: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::FragmentProgram> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_FragmentProgram();
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


#endif //osg_FragmentProgram_pmocHPP


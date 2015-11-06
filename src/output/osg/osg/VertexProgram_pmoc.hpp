#ifndef osg_VertexProgram_pmocHPP
#define  osg_VertexProgram_pmocHPP 1
#include <osg/VertexProgram_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
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
QReflect_VertexProgram(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VertexProgram( );
//VertexProgram
// LocalParamList & getLocalParameters();
// MatrixList & getMatrices();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
//virtual  void  compileGLObjects( State &);
//virtual  void  releaseGLObjects( State *);
// void  setLocalParameters(const  LocalParamList &);
// void  setMatrices(const  MatrixList &);
//const  LocalParamList & getLocalParameters();
//const  MatrixList & getMatrices();
Q_INVOKABLE  GLuint&  getVertexProgramID( unsigned int )const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const QString  getVertexProgram()const;
Q_INVOKABLE void  dirtyVertexProgramObject();
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setMatrix(const  GLenum  ,osg::QReflect_Matrixd *);
Q_INVOKABLE void  setProgramLocalParameter(const  GLuint  ,osg::QReflect_Vec4f *);
Q_INVOKABLE void  setVertexProgram(const  char *);
Q_INVOKABLE void setVertexProgram(const QString &);
Q_PROPERTY(QString VertexProgram  READ getVertexProgram WRITE setVertexProgram NOTIFY VertexProgramChanged)
signals: void VertexProgramChanged(const QString&);
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

#endif //osg_VertexProgram_pmocHPP


#ifndef osg_GLBeginEndAdapter_pmocHPP
#define  osg_GLBeginEndAdapter_pmocHPP 1
#include <osg/GLBeginEndAdapter_pmoc.hpp>
#include <QObject>
#include <osg/GLBeginEndAdapter>

#include<osg/GLBeginEndAdapter_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLBeginEndAdapter: public pmoc::QQModel
{
Q_OBJECT
public:
 enum MatrixMode{
APPLY_LOCAL_MATRICES_TO_VERTICES =GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_VERTICES,
APPLY_LOCAL_MATRICES_TO_MODELVIEW =GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_MODELVIEW};
  Q_ENUMS(MatrixMode)
private:
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
GLBeginEndAdapter * _model;
QReflect_GLBeginEndAdapter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBeginEndAdapter( );
//GLBeginEndAdapter
// State * getState();
// void  Begin( GLenum );
// void  Color3fv(const  GLfloat *);
// void  Color4f( GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  Color4fv(const  GLfloat *);
// void  Color4ubv(const  GLubyte *);
// void  LoadMatrixd(const  GLdouble *);
// void  MultMatrixd(const  GLdouble *);
// void  MultiTexCoord1f( GLenum  , GLfloat );
// void  MultiTexCoord1fv( GLenum  ,const  GLfloat *);
// void  MultiTexCoord2f( GLenum  , GLfloat  , GLfloat );
// void  MultiTexCoord2fv( GLenum  ,const  GLfloat *);
// void  MultiTexCoord3f( GLenum  , GLfloat  , GLfloat  , GLfloat );
// void  MultiTexCoord3fv( GLenum  ,const  GLfloat *);
// void  MultiTexCoord4f( GLenum  , GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  MultiTexCoord4fv( GLenum  ,const  GLfloat *);
// void  Normal3f( GLfloat  , GLfloat  , GLfloat );
// void  Normal3fv(const  GLfloat *);
// void  Rotated( GLdouble  , GLdouble  , GLdouble  , GLdouble );
// void  Rotatef( GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  Scaled( GLdouble  , GLdouble  , GLdouble );
// void  Scalef( GLfloat  , GLfloat  , GLfloat );
// void  TexCoord1f( GLfloat );
// void  TexCoord1fv(const  GLfloat *);
// void  TexCoord2f( GLfloat  , GLfloat );
// void  TexCoord2fv(const  GLfloat *);
// void  TexCoord3f( GLfloat  , GLfloat  , GLfloat );
// void  TexCoord3fv(const  GLfloat *);
// void  TexCoord4f( GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  TexCoord4fv(const  GLfloat *);
// void  Translated( GLdouble  , GLdouble  , GLdouble );
// void  Translatef( GLfloat  , GLfloat  , GLfloat );
// void  Vertex3dv(const  GLdouble *);
// void  Vertex3dv( GLdouble  , GLdouble  , GLdouble );
// void  Vertex3f( GLfloat  , GLfloat  , GLfloat );
// void  Vertex3fv(const  GLfloat *);
// void  VertexAttrib1f( GLuint  , GLfloat );
// void  VertexAttrib1fv( GLuint  ,const  GLfloat *);
// void  VertexAttrib2f( GLuint  , GLfloat  , GLfloat );
// void  VertexAttrib2fv( GLuint  ,const  GLfloat *);
// void  VertexAttrib3f( GLuint  , GLfloat  , GLfloat  , GLfloat );
// void  VertexAttrib3fv( GLuint  ,const  GLfloat *);
// void  VertexAttrib4f( GLuint  , GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  VertexAttrib4fv( GLuint  ,const  GLfloat *);
// void  setState( State *);
//const  State * getState();
Q_INVOKABLE osg::QReflect_GLBeginEndAdapter::MatrixMode  setMatrixMode()const;
Q_INVOKABLE void  End();
Q_INVOKABLE void  LoadIdentity();
Q_INVOKABLE void  PopMatrix();
Q_INVOKABLE void  PushMatrix();
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setMatrixMode(osg::QReflect_GLBeginEndAdapter::MatrixMode );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLBeginEndAdapter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::GLBeginEndAdapter* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_GLBeginEndAdapter();
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

#endif //osg_GLBeginEndAdapter_pmocHPP


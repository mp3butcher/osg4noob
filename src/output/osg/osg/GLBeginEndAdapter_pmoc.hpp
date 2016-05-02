#ifndef osg_GLBeginEndAdapter_pmocHPP
#define  osg_GLBeginEndAdapter_pmocHPP 1


#include <osg/GLBeginEndAdapter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
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
QReflect_GLBeginEndAdapter(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLBeginEndAdapter( );
//GLBeginEndAdapter
Q_INVOKABLE osg::QReflect_GLBeginEndAdapter::MatrixMode  setMatrixMode()const;
Q_INVOKABLE osg::QReflect_State*  getState();
Q_INVOKABLE osg::QReflect_State*  getState()const;
Q_INVOKABLE void  Begin( GLenum mode);
Q_INVOKABLE void  Color3fv(const  GLfloat *c);
Q_INVOKABLE void  Color4f( GLfloat red , GLfloat green , GLfloat blue , GLfloat alpha);
Q_INVOKABLE void  Color4fv(const  GLfloat *c);
Q_INVOKABLE void  Color4ubv(const  GLubyte *c);
Q_INVOKABLE void  End();
Q_INVOKABLE void  LoadIdentity();
Q_INVOKABLE void  LoadMatrixd(const  GLdouble *m);
Q_INVOKABLE void  MultMatrixd(const  GLdouble *m);
Q_INVOKABLE void  MultiTexCoord1f( GLenum target , GLfloat x);
Q_INVOKABLE void  MultiTexCoord1fv( GLenum target ,const  GLfloat *tc);
Q_INVOKABLE void  MultiTexCoord2f( GLenum target , GLfloat x , GLfloat y);
Q_INVOKABLE void  MultiTexCoord2fv( GLenum target ,const  GLfloat *tc);
Q_INVOKABLE void  MultiTexCoord3f( GLenum target , GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  MultiTexCoord3fv( GLenum target ,const  GLfloat *tc);
Q_INVOKABLE void  MultiTexCoord4f( GLenum target , GLfloat x , GLfloat y , GLfloat z , GLfloat w);
Q_INVOKABLE void  MultiTexCoord4fv( GLenum target ,const  GLfloat *tc);
Q_INVOKABLE void  Normal3f( GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  Normal3fv(const  GLfloat *n);
Q_INVOKABLE void  PopMatrix();
Q_INVOKABLE void  PushMatrix();
Q_INVOKABLE void  Rotated( GLdouble angle , GLdouble x , GLdouble y , GLdouble z);
Q_INVOKABLE void  Rotatef( GLfloat angle , GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  Scaled( GLdouble x , GLdouble y , GLdouble z);
Q_INVOKABLE void  Scalef( GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  TexCoord1f( GLfloat x);
Q_INVOKABLE void  TexCoord1fv(const  GLfloat *tc);
Q_INVOKABLE void  TexCoord2f( GLfloat x , GLfloat y);
Q_INVOKABLE void  TexCoord2fv(const  GLfloat *tc);
Q_INVOKABLE void  TexCoord3f( GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  TexCoord3fv(const  GLfloat *tc);
Q_INVOKABLE void  TexCoord4f( GLfloat x , GLfloat y , GLfloat z , GLfloat w);
Q_INVOKABLE void  TexCoord4fv(const  GLfloat *tc);
Q_INVOKABLE void  Translated( GLdouble x , GLdouble y , GLdouble z);
Q_INVOKABLE void  Translatef( GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  Vertex3dv( GLdouble x , GLdouble y , GLdouble z);
Q_INVOKABLE void  Vertex3dv(const  GLdouble *v);
Q_INVOKABLE void  Vertex3f( GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  Vertex3fv(const  GLfloat *v);
Q_INVOKABLE void  VertexAttrib1f( GLuint unit , GLfloat x);
Q_INVOKABLE void  VertexAttrib1fv( GLuint unit ,const  GLfloat *tc);
Q_INVOKABLE void  VertexAttrib2f( GLuint unit , GLfloat x , GLfloat y);
Q_INVOKABLE void  VertexAttrib2fv( GLuint unit ,const  GLfloat *tc);
Q_INVOKABLE void  VertexAttrib3f( GLuint unit , GLfloat x , GLfloat y , GLfloat z);
Q_INVOKABLE void  VertexAttrib3fv( GLuint unit ,const  GLfloat *tc);
Q_INVOKABLE void  VertexAttrib4f( GLuint unit , GLfloat x , GLfloat y , GLfloat z , GLfloat w);
Q_INVOKABLE void  VertexAttrib4fv( GLuint unit ,const  GLfloat *tc);
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setMatrixMode(osg::QReflect_GLBeginEndAdapter::MatrixMode mode);
Q_INVOKABLE void  setState(osg::QReflect_State *state);
Q_PROPERTY(osg::QReflect_State * State  READ getState WRITE setState NOTIFY StateChanged)
signals: void StateChanged();
public:
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


#endif //osg_GLBeginEndAdapter_pmocHPP


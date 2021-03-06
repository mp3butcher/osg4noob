#ifndef osg_GLExtensions_pmocHPP
#define  osg_GLExtensions_pmocHPP 1


#include <osg/GLExtensions_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_GLExtensions;
			} ;
#include <osg/GLExtensions>
#include <osg/GLExtensions>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GLExtensions: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GLExtensions * _model;
QReflect_GLExtensions(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GLExtensions( );
//GLExtensions
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLsync );
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLuint );
// GLboolean  GLboolean( GL_APIENTRY * , GLenum );
// GLenum  GLenum( GL_APIENTRY * , GLenum );
// GLenum  GLenum( GL_APIENTRY * , GLsync  , GLbitfield  , GLuint64 );
// GLint  GLint( GL_APIENTRY * , GLuint  ,const  GLchar *);
// GLint  GLint( GL_APIENTRY * , GLuint  ,const  GLchar *);
// GLint  GLint( GL_APIENTRY * , GLuint  ,const  GLchar *);
// GLsync  GLsync( GL_APIENTRY * , GLenum  , GLbitfield );
// GLuint  GLuint( GL_APIENTRY *);
// GLuint  GLuint( GL_APIENTRY * , GLenum );
// GLuint  GLuint( GL_APIENTRY * , GLenum );
// GLuint  GLuint( GL_APIENTRY * , GLuint  ,const  GLchar *);
// GLvoid * *( GL_APIENTRY * , GLenum  , GLenum );
// GLvoid * *( GL_APIENTRY * , GLenum  , GLintptr  , GLsizeiptr  , GLbitfield );
// bool  getProgramInfoLog( GLuint  , std::string &);
// bool  getShaderInfoLog( GLuint  , std::string &);
// void  ;( GL_APIENTRY *);
// void  ;( GL_APIENTRY *);
// void  ;( GL_APIENTRY *);
// void  ;( GL_APIENTRY *);
// void  ;( GL_APIENTRY * , GLenum );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLenum );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLenum );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLsync );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLenum );
// void  ;( GL_APIENTRY * ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLbitfield );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * ,const  GLfloat *);
// void  ;( GL_APIENTRY * ,const  GLubyte *);
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLuint );
// void  ;( GL_APIENTRY * , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLuint  , GLenum );
// void  ;( GL_APIENTRY * , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLsizei  ,const  GLenum *);
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLsizei  , GLuint *);
// void  ;( GL_APIENTRY * , GLenum  , GLint64 *);
// void  ;( GL_APIENTRY * , GLenum  , GLdouble );
// void  ;( GL_APIENTRY * , GLenum  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLenum  , GLfloat );
// void  ;( GL_APIENTRY * , GLenum  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum  , GLint );
// void  ;( GL_APIENTRY * , GLenum  , GLfloat );
// void  ;( GL_APIENTRY * , GLenum  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLenum  , GLint );
// void  ;( GL_APIENTRY * , GLuint  , GLenum );
// void  ;( GL_APIENTRY * , GLclampf  , GLboolean );
// void  ;( GL_APIENTRY * , GLuint  , GLbitfield );
// void  ;( GL_APIENTRY * , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLint  , GLdouble );
// void  ;( GL_APIENTRY * , GLint  , GLfloat );
// void  ;( GL_APIENTRY * , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLint  , GLuint );
// void  ;( GL_APIENTRY * , GLuint  , GLdouble );
// void  ;( GL_APIENTRY * , GLuint  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLuint  , GLfloat );
// void  ;( GL_APIENTRY * , GLuint  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  , GLshort );
// void  ;( GL_APIENTRY * , GLuint  ,const  GLshort *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLshort *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLshort *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLbyte *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLshort *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLubyte *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLushort *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLbyte *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLshort *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLubyte *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLuint  ,const  GLushort *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  ,const  GLchar *);
// void  ;( GL_APIENTRY * , GLenum  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  ,const  GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLuint  , GLsizei );
// void  ;( GL_APIENTRY * , GLenum  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLvoid **);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLvoid *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLuint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLuint64 *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLuint *);
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLint  , GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  , GLint  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLint  , GLuint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLvoid **);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLdouble *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLenum  , GLuint  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLenum  , GLenum  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLint  , GLdouble  , GLdouble );
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLfloat  , GLfloat );
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLint  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLint *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  ,const  GLuint *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLuint  , GLdouble  , GLdouble );
// void  ;( GL_APIENTRY * , GLuint  , GLfloat  , GLfloat );
// void  ;( GL_APIENTRY * , GLuint  , GLshort  , GLshort );
// void  ;( GL_APIENTRY * , GLsync  , GLbitfield  , GLuint64 );
// void  ;( GL_APIENTRY * , GLclampf  , GLclampf  , GLclampf  , GLclampf );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLenum  , GLsizeiptr  ,const  GLvoid * , GLenum );
// void  ;( GL_APIENTRY * , GLenum  , GLintptr  , GLsizeiptr  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLenum  , GLuint  , GLuint  , GLsizei );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLenum  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  , GLsizei * , GLuint *);
// void  ;( GL_APIENTRY * , GLenum  , GLintptr  , GLsizeiptr  , GLvoid *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  , GLsizei * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  , GLsizei * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  , GLsizei * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  , GLsizei * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLuint  , GLint64 *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLuint  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  ,const  GLchar ** , GLuint *);
// void  ;( GL_APIENTRY * , GLuint  , GLenum  ,const  GLvoid * , GLsizei );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLsizei  ,const  void *);
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLsizei  , GLsizei );
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  ,const  GLchar ** ,const  GLint *);
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLint  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLint  , GLuint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  ,const  GLchar * const* , GLenum );
// void  ;( GL_APIENTRY * , GLint  , GLdouble  , GLdouble  , GLdouble );
// void  ;( GL_APIENTRY * , GLint  , GLfloat  , GLfloat  , GLfloat );
// void  ;( GL_APIENTRY * , GLint  , GLint  , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLint  , GLuint  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLdouble *);
// void  ;( GL_APIENTRY * , GLint  , GLsizei  , GLboolean  ,const  GLfloat *);
// void  ;( GL_APIENTRY * , GLuint  , GLdouble  , GLdouble  , GLdouble );
// void  ;( GL_APIENTRY * , GLuint  , GLfloat  , GLfloat  , GLfloat );
// void  ;( GL_APIENTRY * , GLuint  , GLshort  , GLshort  , GLshort );
// void  ;( GL_APIENTRY * , GLenum  , GLuint  , GLuint  , GLintptr  , GLsizeiptr );
// void  ;( GL_APIENTRY * , GLuint  , GLenum  , GLenum  , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLuint  , GLboolean  , GLboolean  , GLboolean  , GLboolean );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLenum  , GLuint  , GLint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLenum  , GLuint  , GLint );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLuint  , GLint  , GLenum );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLuint  , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLsizei  , GLsizei * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLsizei  , GLsizei * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  ,const  GLuint * , GLenum  , GLint *);
// void  ;( GL_APIENTRY * , GLuint  , GLsizei  , GLsizei * , GLenum * , GLvoid *);
// void  ;( GL_APIENTRY * , GLsync  , GLenum  , GLsizei  , GLsizei * , GLint *);
// void  ;( GL_APIENTRY * , GLenum  , GLsizei  , GLenum  , GLsizei  , GLsizei );
// void  ;( GL_APIENTRY * , GLenum  , GLsizei  , GLenum  , GLsizei  , GLsizei );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLuint  , GLintptr  , GLsizei );
// void  ;( GL_APIENTRY * , GLint  , GLdouble  , GLdouble  , GLdouble  , GLdouble );
// void  ;( GL_APIENTRY * , GLint  , GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  ;( GL_APIENTRY * , GLint  , GLint  , GLint  , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLint  , GLuint  , GLuint  , GLuint  , GLuint );
// void  ;( GL_APIENTRY * , GLuint  , GLubyte  , GLubyte  , GLubyte  , GLubyte );
// void  ;( GL_APIENTRY * , GLuint  , GLdouble  , GLdouble  , GLdouble  , GLdouble );
// void  ;( GL_APIENTRY * , GLuint  , GLfloat  , GLfloat  , GLfloat  , GLfloat );
// void  ;( GL_APIENTRY * , GLuint  , GLshort  , GLshort  , GLshort  , GLshort );
// void  ;( GL_APIENTRY * , GLenum  , GLenum  , GLenum  , GLuint  , GLint  , GLint );
// void  ;( GL_APIENTRY * , GLenum  , GLsizei  , GLsizei  , GLenum  , GLsizei  , GLsizei );
// void  ;( GL_APIENTRY * , GLenum  , GLsizei  , GLint  , GLsizei  , GLsizei  , GLboolean );
// void  ;( GL_APIENTRY * , GLuint  , GLint  , GLenum  , GLboolean  , GLsizei  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLint  , GLboolean  , GLint  , GLenum  , GLenum );
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLsizei  , GLsizei * , GLint * , GLenum * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLsizei  , GLsizei * , GLint * , GLenum * , GLchar *);
// void  ;( GL_APIENTRY * , GLuint  , GLuint  , GLsizei  , GLsizei * , GLsizei * , GLenum * , GLchar *);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLint  , GLsizei  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint  , GLsizei  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLint  , GLint  , GLsizei  , GLsizei  , GLenum  , GLsizei  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLint  , GLint  , GLint  , GLint  , GLint  , GLsizei  , GLsizei );
// void  ;( GL_APIENTRY * , GLint  , GLint  , GLint  , GLint  , GLint  , GLint  , GLint  , GLint  , GLbitfield  , GLenum );
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLenum  , GLsizei  , GLsizei  , GLsizei  , GLint  , GLenum  , GLenum  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLint  , GLint  , GLint  , GLsizei  , GLsizei  , GLsizei  , GLenum  , GLsizei  ,const  GLvoid *);
// void  ;( GL_APIENTRY * , GLenum  , GLint  , GLint  , GLint  , GLint  , GLsizei  , GLsizei  , GLsizei  , GLenum  , GLenum  ,const  GLvoid *);
Q_INVOKABLE  GLuint  getCurrentProgram()const;
Q_INVOKABLE  bool  getAttribLocation(const  char *attribName , GLuint &slot)const;
Q_INVOKABLE  bool  getFragDataLocation(const  char *fragDataName , GLuint &slot)const;
Q_INVOKABLE  bool  isBindImageTextureSupported()const;
Q_INVOKABLE  bool  isCompressedTexImage2DSupported()const;
Q_INVOKABLE  bool  isCompressedTexImage3DSupported()const;
Q_INVOKABLE  bool  isCompressedTexSubImage2DSupported()const;
Q_INVOKABLE  bool  isCompressedTexSubImage3DSupported()const;
Q_INVOKABLE  bool  isNonPowerOfTwoTextureSupported( GLenum filter)const;
Q_INVOKABLE  bool  isRenderbufferMultisampleCoverageSupported()const;
Q_INVOKABLE  bool  isRenderbufferMultisampleSupported()const;
Q_INVOKABLE  bool  isTexStorage2DSupported()const;
Q_INVOKABLE osg::QReflect_GLExtensions*  Get( unsigned int contextID , bool createIfNotInitalized);
Q_INVOKABLE void  Set( unsigned int contextID ,osg::QReflect_GLExtensions *extensions);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GLExtensions: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_GLExtensions();
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


#endif //osg_GLExtensions_pmocHPP


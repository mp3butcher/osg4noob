#ifndef osg_PrimitiveSet_pmocHPP
#define  osg_PrimitiveSet_pmocHPP 1


#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PrimitiveIndexFunctor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
PrimitiveIndexFunctor * _model;
QReflect_PrimitiveIndexFunctor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrimitiveIndexFunctor( );
//PrimitiveIndexFunctor
Q_INVOKABLE void  useVertexCacheAsVertexArray();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PrimitiveIndexFunctor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_PrimitiveIndexFunctor();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
#include <osg/PrimitiveSet>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PrimitiveFunctor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
PrimitiveFunctor * _model;
QReflect_PrimitiveFunctor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrimitiveFunctor( );
//PrimitiveFunctor
Q_INVOKABLE void  useVertexCacheAsVertexArray();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PrimitiveFunctor: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_PrimitiveFunctor();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_PrimitiveSet;
			} ;
namespace osg{ 
class QReflect_DrawElements;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include<osg/PrimitiveSet_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PrimitiveSet: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
POINTS =PrimitiveSet::POINTS,
LINES =PrimitiveSet::LINES,
LINE_STRIP =PrimitiveSet::LINE_STRIP,
LINE_LOOP =PrimitiveSet::LINE_LOOP,
TRIANGLES =PrimitiveSet::TRIANGLES,
TRIANGLE_STRIP =PrimitiveSet::TRIANGLE_STRIP,
TRIANGLE_FAN =PrimitiveSet::TRIANGLE_FAN,
QUADS =PrimitiveSet::QUADS,
QUAD_STRIP =PrimitiveSet::QUAD_STRIP,
POLYGON =PrimitiveSet::POLYGON,
LINES_ADJACENCY =PrimitiveSet::LINES_ADJACENCY,
LINE_STRIP_ADJACENCY =PrimitiveSet::LINE_STRIP_ADJACENCY,
TRIANGLES_ADJACENCY =PrimitiveSet::TRIANGLES_ADJACENCY,
TRIANGLE_STRIP_ADJACENCY =PrimitiveSet::TRIANGLE_STRIP_ADJACENCY,
PATCHES =PrimitiveSet::PATCHES};
  Q_ENUMS(Mode)
private:
public:
 enum Type{
PrimitiveType =PrimitiveSet::PrimitiveType,
DrawArraysPrimitiveType =PrimitiveSet::DrawArraysPrimitiveType,
DrawArrayLengthsPrimitiveType =PrimitiveSet::DrawArrayLengthsPrimitiveType,
DrawElementsUBytePrimitiveType =PrimitiveSet::DrawElementsUBytePrimitiveType,
DrawElementsUShortPrimitiveType =PrimitiveSet::DrawElementsUShortPrimitiveType,
DrawElementsUIntPrimitiveType =PrimitiveSet::DrawElementsUIntPrimitiveType};
  Q_ENUMS(Type)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PrimitiveSet * _model;
QReflect_PrimitiveSet(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrimitiveSet( );
//PrimitiveSet
Q_INVOKABLE  GLenum  getMode()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  supportsBufferObject()const;
Q_INVOKABLE  int  getNumInstances()const;
Q_INVOKABLE  unsigned int  getNumPrimitives()const;
Q_INVOKABLE  unsigned int  getTotalDataSize()const;
Q_INVOKABLE const  GLvoid*  getDataPointer()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_DrawElements*  getDrawElements();
Q_INVOKABLE osg::QReflect_DrawElements*  getDrawElements()const;
Q_INVOKABLE osg::QReflect_PrimitiveSet*  asPrimitiveSet();
Q_INVOKABLE osg::QReflect_PrimitiveSet*  asPrimitiveSet()const;
Q_INVOKABLE osg::QReflect_PrimitiveSet::Type  getType()const;
Q_INVOKABLE void  computeRange()const;
Q_INVOKABLE void  setMode( GLenum mode);
Q_INVOKABLE void  setNumInstances( int n);
Q_PROPERTY(GLenum  Mode  READ getMode WRITE setMode NOTIFY ModeChanged)
Q_PROPERTY(int  NumInstances  READ getNumInstances WRITE setNumInstances NOTIFY NumInstancesChanged)
signals: void ModeChanged();
public:
signals: void NumInstancesChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PrimitiveSet: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_PrimitiveSet();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_DrawElements;
			} ;
namespace osg{ 
class QReflect_ElementBufferObject;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawElements: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawElements * _model;
QReflect_DrawElements(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawElements( );
//DrawElements
Q_INVOKABLE osg::QReflect_DrawElements*  getDrawElements();
Q_INVOKABLE osg::QReflect_DrawElements*  getDrawElements()const;
Q_INVOKABLE osg::QReflect_ElementBufferObject*  getElementBufferObject();
Q_INVOKABLE osg::QReflect_ElementBufferObject*  getElementBufferObject()const;
Q_INVOKABLE void  setElementBufferObject(osg::QReflect_ElementBufferObject *ebo);
Q_PROPERTY(osg::QReflect_ElementBufferObject * ElementBufferObject  READ getElementBufferObject WRITE setElementBufferObject NOTIFY ElementBufferObjectChanged)
signals: void ElementBufferObjectChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawElements: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_DrawElements();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawArrayLengths: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawArrayLengths * _model;
QReflect_DrawArrayLengths(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawArrayLengths( );
//DrawArrayLengths
Q_INVOKABLE  GLint  getFirst()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  unsigned int  getNumIndices()const;
Q_INVOKABLE  unsigned int  getNumPrimitives()const;
Q_INVOKABLE  unsigned int  index( unsigned int pos)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *functor)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *functor)const;
Q_INVOKABLE void  draw(osg::QReflect_State *state , bool useVertexBufferObjects)const;
Q_INVOKABLE void  offsetIndices( int offset);
Q_INVOKABLE void  setFirst( GLint first);
Q_PROPERTY(GLint  First  READ getFirst WRITE setFirst NOTIFY FirstChanged)
signals: void FirstChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawArrayLengths: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DrawArrayLengths> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DrawArrayLengths();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawElementsUInt: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawElementsUInt * _model;
QReflect_DrawElementsUInt(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawElementsUInt( );
//DrawElementsUInt
Q_INVOKABLE  GLenum  getDataType();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  supportsBufferObject()const;
Q_INVOKABLE  unsigned int  getElement( unsigned int i);
Q_INVOKABLE  unsigned int  getNumIndices()const;
Q_INVOKABLE  unsigned int  getTotalDataSize()const;
Q_INVOKABLE  unsigned int  index( unsigned int pos)const;
Q_INVOKABLE const  GLvoid*  getDataPointer()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *functor)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *functor)const;
Q_INVOKABLE void  addElement( unsigned int v);
Q_INVOKABLE void  draw(osg::QReflect_State *state , bool useVertexBufferObjects)const;
Q_INVOKABLE void  offsetIndices( int offset);
Q_INVOKABLE void  reserveElements( unsigned int numIndices);
Q_INVOKABLE void  resizeElements( unsigned int numIndices);
Q_INVOKABLE void  setElement( unsigned int i , unsigned int v);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawElementsUInt: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DrawElementsUInt> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DrawElementsUInt();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawArrays: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawArrays * _model;
QReflect_DrawArrays(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawArrays( );
//DrawArrays
Q_INVOKABLE  GLint  getFirst()const;
Q_INVOKABLE  GLsizei  getCount()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  unsigned int  getNumIndices()const;
Q_INVOKABLE  unsigned int  index( unsigned int pos)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *functor)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *functor)const;
Q_INVOKABLE void  draw(osg::QReflect_State *state , bool useVertexBufferObjects)const;
Q_INVOKABLE void  offsetIndices( int offset);
Q_INVOKABLE void  set( GLenum mode , GLint first , GLsizei count);
Q_INVOKABLE void  setCount( GLsizei count);
Q_INVOKABLE void  setFirst( GLint first);
Q_PROPERTY(GLint  First  READ getFirst WRITE setFirst NOTIFY FirstChanged)
Q_PROPERTY(GLsizei  Count  READ getCount WRITE setCount NOTIFY CountChanged)
signals: void CountChanged();
public:
signals: void FirstChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawArrays: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DrawArrays> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DrawArrays();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawElementsUShort: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawElementsUShort * _model;
QReflect_DrawElementsUShort(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawElementsUShort( );
//DrawElementsUShort
Q_INVOKABLE  GLenum  getDataType();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  supportsBufferObject()const;
Q_INVOKABLE  unsigned int  getElement( unsigned int i);
Q_INVOKABLE  unsigned int  getNumIndices()const;
Q_INVOKABLE  unsigned int  getTotalDataSize()const;
Q_INVOKABLE  unsigned int  index( unsigned int pos)const;
Q_INVOKABLE const  GLvoid*  getDataPointer()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *functor)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *functor)const;
Q_INVOKABLE void  addElement( unsigned int v);
Q_INVOKABLE void  draw(osg::QReflect_State *state , bool useVertexBufferObjects)const;
Q_INVOKABLE void  offsetIndices( int offset);
Q_INVOKABLE void  reserveElements( unsigned int numIndices);
Q_INVOKABLE void  resizeElements( unsigned int numIndices);
Q_INVOKABLE void  setElement( unsigned int i , unsigned int v);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawElementsUShort: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DrawElementsUShort> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DrawElementsUShort();
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
#include <osg/PrimitiveSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_PrimitiveFunctor;
			} ;
namespace osg{ 
class QReflect_PrimitiveIndexFunctor;
			} ;
#include <osg/PrimitiveSet>
#include <osg/PrimitiveSet>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_DrawElementsUByte: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
DrawElementsUByte * _model;
QReflect_DrawElementsUByte(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_DrawElementsUByte( );
//DrawElementsUByte
Q_INVOKABLE  GLenum  getDataType();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  supportsBufferObject()const;
Q_INVOKABLE  unsigned int  getElement( unsigned int i);
Q_INVOKABLE  unsigned int  getNumIndices()const;
Q_INVOKABLE  unsigned int  getTotalDataSize()const;
Q_INVOKABLE  unsigned int  index( unsigned int pos)const;
Q_INVOKABLE const  GLvoid*  getDataPointer()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveFunctor *functor)const;
Q_INVOKABLE void  accept(osg::QReflect_PrimitiveIndexFunctor *functor)const;
Q_INVOKABLE void  addElement( unsigned int v);
Q_INVOKABLE void  draw(osg::QReflect_State *state , bool useVertexBufferObjects)const;
Q_INVOKABLE void  offsetIndices( int offset);
Q_INVOKABLE void  reserveElements( unsigned int numIndices);
Q_INVOKABLE void  resizeElements( unsigned int numIndices);
Q_INVOKABLE void  setElement( unsigned int i , unsigned int v);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_DrawElementsUByte: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::DrawElementsUByte> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_DrawElementsUByte();
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


#endif //osg_PrimitiveSet_pmocHPP


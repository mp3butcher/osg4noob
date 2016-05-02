#ifndef osg_CopyOp_pmocHPP
#define  osg_CopyOp_pmocHPP 1


#include <osg/CopyOp_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Image;
			} ;
namespace osg{ 
class QReflect_Texture;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_StateAttributeCallback;
			} ;
namespace osg{ 
class QReflect_Uniform;
			} ;
namespace osg{ 
class QReflect_UniformCallback;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Array;
			} ;
namespace osg{ 
class QReflect_PrimitiveSet;
			} ;
namespace osg{ 
class QReflect_Referenced;
			} ;
namespace osg{ 
class QReflect_Shape;
			} ;
namespace osg{ 
class QReflect_Callback;
			} ;
#include <osg/CopyOp>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CopyOp: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Options{
SHALLOW_COPY =CopyOp::SHALLOW_COPY,
DEEP_COPY_OBJECTS =CopyOp::DEEP_COPY_OBJECTS,
DEEP_COPY_NODES =CopyOp::DEEP_COPY_NODES,
DEEP_COPY_DRAWABLES =CopyOp::DEEP_COPY_DRAWABLES,
DEEP_COPY_STATESETS =CopyOp::DEEP_COPY_STATESETS,
DEEP_COPY_STATEATTRIBUTES =CopyOp::DEEP_COPY_STATEATTRIBUTES,
DEEP_COPY_TEXTURES =CopyOp::DEEP_COPY_TEXTURES,
DEEP_COPY_IMAGES =CopyOp::DEEP_COPY_IMAGES,
DEEP_COPY_ARRAYS =CopyOp::DEEP_COPY_ARRAYS,
DEEP_COPY_PRIMITIVES =CopyOp::DEEP_COPY_PRIMITIVES,
DEEP_COPY_SHAPES =CopyOp::DEEP_COPY_SHAPES,
DEEP_COPY_UNIFORMS =CopyOp::DEEP_COPY_UNIFORMS,
DEEP_COPY_CALLBACKS =CopyOp::DEEP_COPY_CALLBACKS,
DEEP_COPY_USERDATA =CopyOp::DEEP_COPY_USERDATA,
DEEP_COPY_ALL =CopyOp::DEEP_COPY_ALL};
  Q_ENUMS(Options)
private:
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
CopyOp * _model;
QReflect_CopyOp(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CopyOp( );
//CopyOp
Q_INVOKABLE  unsigned int  getCopyFlags()const;
Q_INVOKABLE osg::QReflect_Array*  operator()(osg::QReflect_Array *array)const;
Q_INVOKABLE osg::QReflect_Callback*  operator()(osg::QReflect_Callback *nodecallback)const;
Q_INVOKABLE osg::QReflect_Drawable*  operator()(osg::QReflect_Drawable *drawable)const;
Q_INVOKABLE osg::QReflect_Image*  operator()(osg::QReflect_Image *image)const;
Q_INVOKABLE osg::QReflect_Node*  operator()(osg::QReflect_Node *node)const;
Q_INVOKABLE osg::QReflect_Object*  operator()(osg::QReflect_Object *obj)const;
Q_INVOKABLE osg::QReflect_PrimitiveSet*  operator()(osg::QReflect_PrimitiveSet *primitives)const;
Q_INVOKABLE osg::QReflect_Referenced*  operator()(osg::QReflect_Referenced *ref)const;
Q_INVOKABLE osg::QReflect_Shape*  operator()(osg::QReflect_Shape *shape)const;
Q_INVOKABLE osg::QReflect_StateAttribute*  operator()(osg::QReflect_StateAttribute *attr)const;
Q_INVOKABLE osg::QReflect_StateAttributeCallback*  operator()(osg::QReflect_StateAttributeCallback *stateattributecallback)const;
Q_INVOKABLE osg::QReflect_StateSet*  operator()(osg::QReflect_StateSet *stateset)const;
Q_INVOKABLE osg::QReflect_Texture*  operator()(osg::QReflect_Texture *text)const;
Q_INVOKABLE osg::QReflect_Uniform*  operator()(osg::QReflect_Uniform *shape)const;
Q_INVOKABLE osg::QReflect_UniformCallback*  operator()(osg::QReflect_UniformCallback *uniformcallback)const;
Q_INVOKABLE void  setCopyFlags( unsigned int flags);
Q_PROPERTY(unsigned int  CopyFlags  READ getCopyFlags WRITE setCopyFlags NOTIFY CopyFlagsChanged)
signals: void CopyFlagsChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CopyOp: public pmoc::MetaQQuickClass{
protected:
std::set<osg::CopyOp* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CopyOp();
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


#endif //osg_CopyOp_pmocHPP


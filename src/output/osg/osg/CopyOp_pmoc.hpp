#ifndef osg_CopyOp_pmocHPP
#define  osg_CopyOp_pmocHPP 1
#include <osg/CopyOp_pmoc.hpp>
#include <QObject>
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
QReflect_CopyOp(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CopyOp( );
//CopyOp
//virtual  Array * operator()(const  Array *);
//virtual  Callback * operator()(const  Callback *);
//virtual  Drawable * operator()(const  Drawable *);
//virtual  Image * operator()(const  Image *);
//virtual  Node * operator()(const  Node *);
//virtual  Object * operator()(const  Object *);
//virtual  PrimitiveSet * operator()(const  PrimitiveSet *);
//virtual  Referenced * operator()(const  Referenced *);
//virtual  Shape * operator()(const  Shape *);
//virtual  StateAttribute * operator()(const  StateAttribute *);
//virtual  StateAttributeCallback * operator()(const  StateAttributeCallback *);
//virtual  StateSet * operator()(const  StateSet *);
//virtual  Texture * operator()(const  Texture *);
//virtual  Uniform * operator()(const  Uniform *);
//virtual  UniformCallback * operator()(const  UniformCallback *);
Q_INVOKABLE  unsigned int  getCopyFlags()const;
Q_INVOKABLE void  setCopyFlags( unsigned int );
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

#endif //osg_CopyOp_pmocHPP


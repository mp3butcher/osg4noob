#ifndef osg_BlendFunc_pmocHPP
#define  osg_BlendFunc_pmocHPP 1
#include <osg/BlendFunc_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BlendFunc>
#include <osg/BlendFunc>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BlendFunc: public pmoc::QQModel
{
Q_OBJECT
public:
 enum BlendFuncMode{
DST_ALPHA =BlendFunc::DST_ALPHA,
DST_COLOR =BlendFunc::DST_COLOR,
ONE =BlendFunc::ONE,
ONE_MINUS_DST_ALPHA =BlendFunc::ONE_MINUS_DST_ALPHA,
ONE_MINUS_DST_COLOR =BlendFunc::ONE_MINUS_DST_COLOR,
ONE_MINUS_SRC_ALPHA =BlendFunc::ONE_MINUS_SRC_ALPHA,
ONE_MINUS_SRC_COLOR =BlendFunc::ONE_MINUS_SRC_COLOR,
SRC_ALPHA =BlendFunc::SRC_ALPHA,
SRC_ALPHA_SATURATE =BlendFunc::SRC_ALPHA_SATURATE,
SRC_COLOR =BlendFunc::SRC_COLOR,
CONSTANT_COLOR =BlendFunc::CONSTANT_COLOR,
ONE_MINUS_CONSTANT_COLOR =BlendFunc::ONE_MINUS_CONSTANT_COLOR,
CONSTANT_ALPHA =BlendFunc::CONSTANT_ALPHA,
ONE_MINUS_CONSTANT_ALPHA =BlendFunc::ONE_MINUS_CONSTANT_ALPHA,
ZERO =BlendFunc::ZERO};
  Q_ENUMS(BlendFuncMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BlendFunc * _model;
QReflect_BlendFunc(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BlendFunc( );
//BlendFunc
// GLenum  getDestination();
// GLenum  getDestinationAlpha();
// GLenum  getDestinationRGB();
// GLenum  getSource();
// GLenum  getSourceAlpha();
// GLenum  getSourceRGB();
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
// void  setDestination( GLenum );
// void  setDestinationAlpha( GLenum );
// void  setDestinationRGB( GLenum );
// void  setFunction( GLenum  , GLenum );
// void  setFunction( GLenum  , GLenum  , GLenum  , GLenum );
// void  setSource( GLenum );
// void  setSourceAlpha( GLenum );
// void  setSourceRGB( GLenum );
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BlendFunc: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::BlendFunc> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BlendFunc();
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

#endif //osg_BlendFunc_pmocHPP


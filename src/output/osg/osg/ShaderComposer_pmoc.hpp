#ifndef osg_ShaderComposer_pmocHPP
#define  osg_ShaderComposer_pmocHPP 1


#include <osg/ShaderComposer_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/ShaderComposer>
#include <osg/ShaderComposer>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShaderComposer: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ShaderComposer * _model;
QReflect_ShaderComposer(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShaderComposer( );
//ShaderComposer
//virtual  osg::Program * getOrCreateProgram(const  ShaderComponents &);
//virtual  osg::Shader * composeMain(const  Shaders &);
//virtual  void  addShaderToProgram( Program * ,const  Shaders &);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShaderComposer: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ShaderComposer> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShaderComposer();
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


#endif //osg_ShaderComposer_pmocHPP


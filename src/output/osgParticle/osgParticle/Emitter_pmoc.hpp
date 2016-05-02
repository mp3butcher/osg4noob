#ifndef osgParticle_Emitter_pmocHPP
#define  osgParticle_Emitter_pmocHPP 1


#include <osgParticle/Emitter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/Emitter>
#include <osgParticle/Emitter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Emitter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Emitter * _model;
QReflect_Emitter(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Emitter( );
//Emitter
//const  Particle & getParticleTemplate();
Q_INVOKABLE  bool  getUseDefaultTemplate()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE void  accept(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  setParticleTemplate(osgParticle::QReflect_Particle *p);
Q_INVOKABLE void  setUseDefaultTemplate( bool v);
Q_PROPERTY(bool  UseDefaultTemplate  READ getUseDefaultTemplate WRITE setUseDefaultTemplate NOTIFY UseDefaultTemplateChanged)
signals: void UseDefaultTemplateChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Emitter: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Emitter();
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



#endif //osgParticle_Emitter_pmocHPP


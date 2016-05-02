#ifndef osg_BlendColor_pmocHPP
#define  osg_BlendColor_pmocHPP 1


#include <osg/BlendColor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
#include <osg/BlendColor>
#include <osg/BlendColor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BlendColor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BlendColor * _model;
QReflect_BlendColor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BlendColor( );
//BlendColor
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
// osg::Vec4 & getConstantColor();
//const  osg::Vec4 & getConstantColor();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setConstantColor(osg::QReflect_Vec4f *color);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BlendColor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::BlendColor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BlendColor();
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


#endif //osg_BlendColor_pmocHPP


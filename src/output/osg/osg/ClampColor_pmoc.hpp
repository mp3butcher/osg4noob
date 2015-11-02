#ifndef osg_ClampColor_pmocHPP
#define  osg_ClampColor_pmocHPP 1
#include <osg/ClampColor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/ClampColor>
#include <osg/ClampColor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClampColor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ClampColor * _model;
QReflect_ClampColor(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClampColor( );
//ClampColor
// GLenum  getClampFragmentColor();
// GLenum  getClampReadColor();
// GLenum  getClampVertexColor();
//virtual  void  apply( State &);
// void  setClampFragmentColor( GLenum );
// void  setClampReadColor( GLenum );
// void  setClampVertexColor( GLenum );
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClampColor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ClampColor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ClampColor();
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

#endif //osg_ClampColor_pmocHPP


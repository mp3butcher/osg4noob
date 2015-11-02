#ifndef osg_ShadeModel_pmocHPP
#define  osg_ShadeModel_pmocHPP 1
#include <osg/ShadeModel_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/ShadeModel>
#include <osg/ShadeModel>

#include <osg/ref_ptr>
#include<osg/ShadeModel_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ShadeModel: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
FLAT =ShadeModel::FLAT,
SMOOTH =ShadeModel::SMOOTH};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ShadeModel * _model;
QReflect_ShadeModel(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ShadeModel( );
//ShadeModel
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE osg::QReflect_ShadeModel::Mode  getMode()const;
Q_INVOKABLE void  setMode(osg::QReflect_ShadeModel::Mode );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ShadeModel: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ShadeModel> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ShadeModel();
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

#endif //osg_ShadeModel_pmocHPP


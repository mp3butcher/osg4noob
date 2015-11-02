#ifndef osg_SampleMaski_pmocHPP
#define  osg_SampleMaski_pmocHPP 1
#include <osg/SampleMaski_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/SampleMaski>
#include <osg/SampleMaski>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_SampleMaski: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
SampleMaski * _model;
QReflect_SampleMaski(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SampleMaski( );
//SampleMaski
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  unsigned int  getMask( unsigned int )const;
Q_INVOKABLE void  setMask( unsigned int  , unsigned int );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_SampleMaski: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::SampleMaski> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_SampleMaski();
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

#endif //osg_SampleMaski_pmocHPP


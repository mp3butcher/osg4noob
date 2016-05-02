#ifndef osg_SampleMaski_pmocHPP
#define  osg_SampleMaski_pmocHPP 1


#include <osg/SampleMaski_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
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
QReflect_SampleMaski(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_SampleMaski( );
//SampleMaski
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  getMask( unsigned int maskNumber)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setMask( unsigned int mask , unsigned int maskNumber);
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


#endif //osg_SampleMaski_pmocHPP


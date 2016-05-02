#ifndef osg_Scissor_pmocHPP
#define  osg_Scissor_pmocHPP 1


#include <osg/Scissor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/Scissor>
#include <osg/Scissor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Scissor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Scissor * _model;
QReflect_Scissor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Scissor( );
//Scissor
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  int  height()const;
Q_INVOKABLE  int  width()const;
Q_INVOKABLE  int  x()const;
Q_INVOKABLE  int  y()const;
Q_INVOKABLE  int&  height();
Q_INVOKABLE  int&  width();
Q_INVOKABLE  int&  x();
Q_INVOKABLE  int&  y();
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  getScissor( int &x , int &y , int &width , int &height)const;
Q_INVOKABLE void  setScissor( int x , int y , int width , int height);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Scissor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Scissor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Scissor();
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


#endif //osg_Scissor_pmocHPP


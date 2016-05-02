#ifndef osg_Depth_pmocHPP
#define  osg_Depth_pmocHPP 1


#include <osg/Depth_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/Depth>
#include <osg/Depth>

#include <osg/ref_ptr>
#include<osg/Depth_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Depth: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Function{
NEVER =Depth::NEVER,
LESS =Depth::LESS,
EQUAL =Depth::EQUAL,
LEQUAL =Depth::LEQUAL,
GREATER =Depth::GREATER,
NOTEQUAL =Depth::NOTEQUAL,
GEQUAL =Depth::GEQUAL,
ALWAYS =Depth::ALWAYS};
  Q_ENUMS(Function)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Depth * _model;
QReflect_Depth(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Depth( );
//Depth
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  bool  getWriteMask()const;
Q_INVOKABLE  double  getZFar()const;
Q_INVOKABLE  double  getZNear()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_Depth::Function  getFunction()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setFunction(osg::QReflect_Depth::Function func);
Q_INVOKABLE void  setRange( double zNear , double zFar);
Q_INVOKABLE void  setWriteMask( bool mask);
Q_INVOKABLE void  setZFar( double zFar);
Q_INVOKABLE void  setZNear( double zNear);
Q_PROPERTY(bool  WriteMask  READ getWriteMask WRITE setWriteMask NOTIFY WriteMaskChanged)
Q_PROPERTY(double  ZFar  READ getZFar WRITE setZFar NOTIFY ZFarChanged)
Q_PROPERTY(double  ZNear  READ getZNear WRITE setZNear NOTIFY ZNearChanged)
Q_PROPERTY(osg::QReflect_Depth::Function  Function  READ getFunction WRITE setFunction NOTIFY FunctionChanged)
signals: void FunctionChanged();
public:
signals: void WriteMaskChanged();
public:
signals: void ZFarChanged();
public:
signals: void ZNearChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Depth: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Depth> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Depth();
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


#endif //osg_Depth_pmocHPP


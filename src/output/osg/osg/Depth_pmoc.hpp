#ifndef osg_Depth_pmocHPP
#define  osg_Depth_pmocHPP 1
#include <osg/Depth_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
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
QReflect_Depth(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Depth( );
//Depth
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const bool  getWriteMask()const;
Q_INVOKABLE const double  getZFar()const;
Q_INVOKABLE const double  getZNear()const;
Q_INVOKABLE osg::QReflect_Depth::Function  getFunction()const;
Q_INVOKABLE void  setFunction(osg::QReflect_Depth::Function );
Q_INVOKABLE void  setRange( double  , double );
Q_INVOKABLE void setWriteMask(const bool &);
Q_INVOKABLE void setZFar(const double &);
Q_INVOKABLE void setZNear(const double &);
Q_PROPERTY(bool WriteMask  READ getWriteMask WRITE setWriteMask NOTIFY WriteMaskChanged)
Q_PROPERTY(double ZFar  READ getZFar WRITE setZFar NOTIFY ZFarChanged)
Q_PROPERTY(double ZNear  READ getZNear WRITE setZNear NOTIFY ZNearChanged)
signals: void WriteMaskChanged(const bool&);
public:
signals: void ZFarChanged(const double&);
public:
signals: void ZNearChanged(const double&);
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

#endif //osg_Depth_pmocHPP


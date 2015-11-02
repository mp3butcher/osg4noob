#ifndef osg_GraphicsCostEstimator_pmocHPP
#define  osg_GraphicsCostEstimator_pmocHPP 1
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsCostEstimator>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GraphicsCostEstimator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GraphicsCostEstimator * _model;
QReflect_GraphicsCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GraphicsCostEstimator( );
//GraphicsCostEstimator
// CostPair  estimateCompileCost(const  osg::Geometry *);
// CostPair  estimateCompileCost(const  osg::Node *);
// CostPair  estimateCompileCost(const  osg::Program *);
// CostPair  estimateCompileCost(const  osg::Texture *);
// CostPair  estimateDrawCost(const  osg::Geometry *);
// CostPair  estimateDrawCost(const  osg::Node *);
// CostPair  estimateDrawCost(const  osg::Program *);
// CostPair  estimateDrawCost(const  osg::Texture *);
// void  calibrate( osg::RenderInfo &);
Q_INVOKABLE void  setDefaults();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GraphicsCostEstimator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::GraphicsCostEstimator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_GraphicsCostEstimator();
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
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ClampedLinearCostFunction1D: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
struct ClampedLinearCostFunction1D * _model;
QReflect_ClampedLinearCostFunction1D(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ClampedLinearCostFunction1D( );
//ClampedLinearCostFunction1D
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ClampedLinearCostFunction1D: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_ClampedLinearCostFunction1D();
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
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsCostEstimator>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_GeometryCostEstimator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
GeometryCostEstimator * _model;
QReflect_GeometryCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_GeometryCostEstimator( );
//GeometryCostEstimator
// CostPair  estimateCompileCost(const  osg::Geometry *);
// CostPair  estimateDrawCost(const  osg::Geometry *);
// void  calibrate( osg::RenderInfo &);
Q_INVOKABLE void  setDefaults();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_GeometryCostEstimator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::GeometryCostEstimator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_GeometryCostEstimator();
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
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsCostEstimator>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TextureCostEstimator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TextureCostEstimator * _model;
QReflect_TextureCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TextureCostEstimator( );
//TextureCostEstimator
// CostPair  estimateCompileCost(const  osg::Texture *);
// CostPair  estimateDrawCost(const  osg::Texture *);
// void  calibrate( osg::RenderInfo &);
Q_INVOKABLE void  setDefaults();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TextureCostEstimator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TextureCostEstimator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TextureCostEstimator();
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
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>
#include <osg/GraphicsCostEstimator>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ProgramCostEstimator: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ProgramCostEstimator * _model;
QReflect_ProgramCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ProgramCostEstimator( );
//ProgramCostEstimator
// CostPair  estimateCompileCost(const  osg::Program *);
// CostPair  estimateDrawCost(const  osg::Program *);
// void  calibrate( osg::RenderInfo &);
Q_INVOKABLE void  setDefaults();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ProgramCostEstimator: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ProgramCostEstimator> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ProgramCostEstimator();
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

#endif //osg_GraphicsCostEstimator_pmocHPP


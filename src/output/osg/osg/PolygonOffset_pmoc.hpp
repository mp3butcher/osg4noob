#ifndef osg_PolygonOffset_pmocHPP
#define  osg_PolygonOffset_pmocHPP 1
#include <osg/PolygonOffset_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/PolygonOffset>
#include <osg/PolygonOffset>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PolygonOffset: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PolygonOffset * _model;
QReflect_PolygonOffset(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PolygonOffset( );
//PolygonOffset
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( State &);
Q_INVOKABLE  bool  areFactorAndUnitsMultipliersSet();
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const float  getFactor()const;
Q_INVOKABLE const float  getFactorMultiplier()const;
Q_INVOKABLE const float  getUnits()const;
Q_INVOKABLE const float  getUnitsMultiplier()const;
Q_INVOKABLE void  setFactorAndUnitsMultipliersUsingBestGuessForDriver();
Q_INVOKABLE void setFactor(const float &);
Q_INVOKABLE void setFactorMultiplier(const float &);
Q_INVOKABLE void setUnits(const float &);
Q_INVOKABLE void setUnitsMultiplier(const float &);
Q_PROPERTY(float Factor  READ getFactor WRITE setFactor NOTIFY FactorChanged)
Q_PROPERTY(float FactorMultiplier  READ getFactorMultiplier WRITE setFactorMultiplier NOTIFY FactorMultiplierChanged)
Q_PROPERTY(float Units  READ getUnits WRITE setUnits NOTIFY UnitsChanged)
Q_PROPERTY(float UnitsMultiplier  READ getUnitsMultiplier WRITE setUnitsMultiplier NOTIFY UnitsMultiplierChanged)
signals: void FactorChanged(const float&);
public:
signals: void FactorMultiplierChanged(const float&);
public:
signals: void UnitsChanged(const float&);
public:
signals: void UnitsMultiplierChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PolygonOffset: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PolygonOffset> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PolygonOffset();
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

#endif //osg_PolygonOffset_pmocHPP


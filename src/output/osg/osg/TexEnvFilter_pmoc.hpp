#ifndef osg_TexEnvFilter_pmocHPP
#define  osg_TexEnvFilter_pmocHPP 1
#include <osg/TexEnvFilter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/TexEnvFilter>
#include <osg/TexEnvFilter>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TexEnvFilter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TexEnvFilter * _model;
QReflect_TexEnvFilter(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexEnvFilter( );
//TexEnvFilter
//virtual  void  apply( State &);
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const float  getLodBias()const;
Q_INVOKABLE void setLodBias(const float &);
Q_PROPERTY(float LodBias  READ getLodBias WRITE setLodBias NOTIFY LodBiasChanged)
signals: void LodBiasChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TexEnvFilter: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TexEnvFilter> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TexEnvFilter();
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

#endif //osg_TexEnvFilter_pmocHPP


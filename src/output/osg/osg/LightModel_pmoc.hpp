#ifndef osg_LightModel_pmocHPP
#define  osg_LightModel_pmocHPP 1


#include <osg/LightModel_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec4f;
			} ;
#include <osg/LightModel>
#include <osg/LightModel>

#include <osg/ref_ptr>
#include<osg/LightModel_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LightModel: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ColorControl{
SEPARATE_SPECULAR_COLOR =LightModel::SEPARATE_SPECULAR_COLOR,
SINGLE_COLOR =LightModel::SINGLE_COLOR};
  Q_ENUMS(ColorControl)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LightModel * _model;
QReflect_LightModel(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LightModel( );
//LightModel
//const  osg::Vec4 & getAmbientIntensity();
Q_INVOKABLE  bool  getLocalViewer()const;
Q_INVOKABLE  bool  getTwoSided()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_LightModel::ColorControl  getColorControl()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setAmbientIntensity(osg::QReflect_Vec4f *ambient);
Q_INVOKABLE void  setColorControl(osg::QReflect_LightModel::ColorControl cc);
Q_INVOKABLE void  setLocalViewer( bool localViewer);
Q_INVOKABLE void  setTwoSided( bool twoSided);
Q_PROPERTY(bool  LocalViewer  READ getLocalViewer WRITE setLocalViewer NOTIFY LocalViewerChanged)
Q_PROPERTY(bool  TwoSided  READ getTwoSided WRITE setTwoSided NOTIFY TwoSidedChanged)
Q_PROPERTY(osg::QReflect_LightModel::ColorControl  ColorControl  READ getColorControl WRITE setColorControl NOTIFY ColorControlChanged)
signals: void ColorControlChanged();
public:
signals: void LocalViewerChanged();
public:
signals: void TwoSidedChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LightModel: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LightModel> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LightModel();
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


#endif //osg_LightModel_pmocHPP


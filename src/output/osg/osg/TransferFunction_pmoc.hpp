#ifndef osg_TransferFunction_pmocHPP
#define  osg_TransferFunction_pmocHPP 1
#include <osg/TransferFunction_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Image;
			} ;
#include <osg/TransferFunction>
#include <osg/TransferFunction>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TransferFunction: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TransferFunction * _model;
QReflect_TransferFunction(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TransferFunction( );
//TransferFunction
Q_INVOKABLE osg::QReflect_Image*  getImage();
Q_INVOKABLE osg::QReflect_Image*  getImage()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TransferFunction: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TransferFunction> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TransferFunction();
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
#include <osg/TransferFunction_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec4f;
			} ;
#include <osg/TransferFunction>
#include <osg/TransferFunction>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TransferFunction1D: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TransferFunction1D * _model;
QReflect_TransferFunction1D(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TransferFunction1D( );
//TransferFunction1D
// ColorMap & getColorMap();
// osg::Vec4  getColor( float );
// osg::Vec4  getPixelValue( unsigned int );
// void  assign(const  ColorMap &);
// void  setColorMap(const  ColorMap &);
//const  ColorMap & getColorMap();
Q_INVOKABLE  float  getMaximum()const;
Q_INVOKABLE  float  getMinimum()const;
Q_INVOKABLE  unsigned int  getNumberImageCells()const;
Q_INVOKABLE void  allocate( unsigned int );
Q_INVOKABLE void  clear(osg::QReflect_Vec4f *);
Q_INVOKABLE void  setColor( float  ,osg::QReflect_Vec4f * , bool );
Q_INVOKABLE void  updateImage();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TransferFunction1D: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TransferFunction1D> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TransferFunction1D();
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

#endif //osg_TransferFunction_pmocHPP


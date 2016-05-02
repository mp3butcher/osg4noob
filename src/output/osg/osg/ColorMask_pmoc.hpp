#ifndef osg_ColorMask_pmocHPP
#define  osg_ColorMask_pmocHPP 1


#include <osg/ColorMask_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/ColorMask>
#include <osg/ColorMask>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ColorMask: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ColorMask * _model;
QReflect_ColorMask(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ColorMask( );
//ColorMask
Q_INVOKABLE  bool  getAlphaMask()const;
Q_INVOKABLE  bool  getBlueMask()const;
Q_INVOKABLE  bool  getGreenMask()const;
Q_INVOKABLE  bool  getRedMask()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setAlphaMask( bool mask);
Q_INVOKABLE void  setBlueMask( bool mask);
Q_INVOKABLE void  setGreenMask( bool mask);
Q_INVOKABLE void  setMask( bool red , bool green , bool blue , bool alpha);
Q_INVOKABLE void  setRedMask( bool mask);
Q_PROPERTY(bool  AlphaMask  READ getAlphaMask WRITE setAlphaMask NOTIFY AlphaMaskChanged)
Q_PROPERTY(bool  BlueMask  READ getBlueMask WRITE setBlueMask NOTIFY BlueMaskChanged)
Q_PROPERTY(bool  GreenMask  READ getGreenMask WRITE setGreenMask NOTIFY GreenMaskChanged)
Q_PROPERTY(bool  RedMask  READ getRedMask WRITE setRedMask NOTIFY RedMaskChanged)
signals: void AlphaMaskChanged();
public:
signals: void BlueMaskChanged();
public:
signals: void GreenMaskChanged();
public:
signals: void RedMaskChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ColorMask: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ColorMask> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ColorMask();
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


#endif //osg_ColorMask_pmocHPP


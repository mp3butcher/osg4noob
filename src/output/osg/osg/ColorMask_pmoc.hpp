#ifndef osg_ColorMask_pmocHPP
#define  osg_ColorMask_pmocHPP 1
#include <osg/ColorMask_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
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
QReflect_ColorMask(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ColorMask( );
//ColorMask
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const bool  getAlphaMask()const;
Q_INVOKABLE const bool  getBlueMask()const;
Q_INVOKABLE const bool  getGreenMask()const;
Q_INVOKABLE const bool  getRedMask()const;
Q_INVOKABLE void  setMask( bool  , bool  , bool  , bool );
Q_INVOKABLE void setAlphaMask(const bool &);
Q_INVOKABLE void setBlueMask(const bool &);
Q_INVOKABLE void setGreenMask(const bool &);
Q_INVOKABLE void setRedMask(const bool &);
Q_PROPERTY(bool AlphaMask  READ getAlphaMask WRITE setAlphaMask NOTIFY AlphaMaskChanged)
Q_PROPERTY(bool BlueMask  READ getBlueMask WRITE setBlueMask NOTIFY BlueMaskChanged)
Q_PROPERTY(bool GreenMask  READ getGreenMask WRITE setGreenMask NOTIFY GreenMaskChanged)
Q_PROPERTY(bool RedMask  READ getRedMask WRITE setRedMask NOTIFY RedMaskChanged)
signals: void AlphaMaskChanged(const bool&);
public:
signals: void BlueMaskChanged(const bool&);
public:
signals: void GreenMaskChanged(const bool&);
public:
signals: void RedMaskChanged(const bool&);
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

#endif //osg_ColorMask_pmocHPP


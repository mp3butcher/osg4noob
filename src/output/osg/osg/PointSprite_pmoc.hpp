#ifndef osg_PointSprite_pmocHPP
#define  osg_PointSprite_pmocHPP 1
#include <osg/PointSprite_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/PointSprite>
#include <osg/PointSprite>

#include <osg/ref_ptr>
#include<osg/PointSprite_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PointSprite: public pmoc::QQModel
{
Q_OBJECT
public:
 enum CoordOriginMode{
UPPER_LEFT =PointSprite::UPPER_LEFT,
LOWER_LEFT =PointSprite::LOWER_LEFT};
  Q_ENUMS(CoordOriginMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PointSprite * _model;
QReflect_PointSprite(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PointSprite( );
//PointSprite
//virtual  bool  checkValidityOfAssociatedModes( osg::State &);
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//virtual  void  apply( osg::State &);
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE osg::QReflect_PointSprite::CoordOriginMode  getCoordOriginMode()const;
Q_INVOKABLE void  setCoordOriginMode(osg::QReflect_PointSprite::CoordOriginMode );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PointSprite: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PointSprite> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PointSprite();
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

#endif //osg_PointSprite_pmocHPP


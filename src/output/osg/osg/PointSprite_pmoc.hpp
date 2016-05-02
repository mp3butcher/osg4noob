#ifndef osg_PointSprite_pmocHPP
#define  osg_PointSprite_pmocHPP 1


#include <osg/PointSprite_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
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
QReflect_PointSprite(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PointSprite( );
//PointSprite
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  bool  checkValidityOfAssociatedModes(osg::QReflect_State *)const;
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_PointSprite::CoordOriginMode  getCoordOriginMode()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setCoordOriginMode(osg::QReflect_PointSprite::CoordOriginMode mode);
Q_PROPERTY(osg::QReflect_PointSprite::CoordOriginMode  CoordOriginMode  READ getCoordOriginMode WRITE setCoordOriginMode NOTIFY CoordOriginModeChanged)
signals: void CoordOriginModeChanged();
public:
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


#endif //osg_PointSprite_pmocHPP


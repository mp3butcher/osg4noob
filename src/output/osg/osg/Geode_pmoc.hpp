#ifndef osg_Geode_pmocHPP
#define  osg_Geode_pmocHPP 1


#include <osg/Geode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Geode;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
#include <osg/Geode>
#include <osg/Geode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Geode: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Geode * _model;
QReflect_Geode(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Geode( );
//Geode
//virtual  BoundingSphere  computeBound();
//const  BoundingBox & getBoundingBox();
Q_INVOKABLE  bool  addDrawable(osg::QReflect_Drawable *drawable);
Q_INVOKABLE  bool  containsDrawable(osg::QReflect_Drawable *drawable)const;
Q_INVOKABLE  bool  removeDrawable(osg::QReflect_Drawable *drawable);
Q_INVOKABLE  bool  removeDrawables( unsigned int i , unsigned int numDrawablesToRemove);
Q_INVOKABLE  bool  replaceDrawable(osg::QReflect_Drawable *origDraw ,osg::QReflect_Drawable *newDraw);
Q_INVOKABLE  bool  setDrawable( unsigned int i ,osg::QReflect_Drawable *drawable);
Q_INVOKABLE  unsigned int  getDrawableIndex(osg::QReflect_Drawable *drawable)const;
Q_INVOKABLE  unsigned int  getNumDrawables()const;
Q_INVOKABLE osg::QReflect_Drawable*  getDrawable( unsigned int i);
Q_INVOKABLE osg::QReflect_Drawable*  getDrawable( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Geode*  asGeode();
Q_INVOKABLE osg::QReflect_Geode*  asGeode()const;
Q_INVOKABLE void  compileDrawables(osg::QReflect_RenderInfo *renderInfo);
signals: void DrawableCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Geode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Geode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Geode();
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


#endif //osg_Geode_pmocHPP


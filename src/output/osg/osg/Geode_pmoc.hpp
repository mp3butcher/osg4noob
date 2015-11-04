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
#include <osg/Geode>
#include <osg/Geode>

#include <osg/ref_ptr>
namespace osg{
class QReflect_Drawable; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Geode: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Geode * _model;
QReflect_Geode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Geode( );
//Geode
//virtual  BoundingSphere  computeBound();
// void  compileDrawables( RenderInfo &);
//const  BoundingBox & getBoundingBox();
Q_INVOKABLE  bool  containsDrawable(osg::QReflect_Drawable *)const;
Q_INVOKABLE  bool  removeDrawables( unsigned int  , unsigned int );
Q_INVOKABLE  bool  replaceDrawable(osg::QReflect_Drawable * ,osg::QReflect_Drawable *);
Q_INVOKABLE  bool  setDrawable( unsigned int  ,osg::QReflect_Drawable *);
Q_INVOKABLE  unsigned int  getDrawableIndex(osg::QReflect_Drawable *)const;
Q_INVOKABLE  unsigned int  getNumDrawables()const;
Q_INVOKABLE osg::QReflect_Drawable*  getDrawable( unsigned int );
Q_INVOKABLE osg::QReflect_Drawable*  getDrawable( unsigned int )const;
Q_INVOKABLE osg::QReflect_Geode*  asGeode();
Q_INVOKABLE osg::QReflect_Geode*  asGeode()const;
virtual Q_INVOKABLE void   addDrawable( osg::QReflect_Drawable *par);//{return new osg::QReflect_Drawable(_model->getDrawable());}
virtual Q_INVOKABLE void pmoc_reverse_addDrawable( osg::QReflect_Drawable *par);//{_model->setDrawable(par->_model);emit DrawableCollectionChanged(par);}
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

#endif //osg_Geode_pmocHPP


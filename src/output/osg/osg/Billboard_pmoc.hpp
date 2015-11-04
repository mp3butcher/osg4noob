#ifndef osg_Billboard_pmocHPP
#define  osg_Billboard_pmocHPP 1


#include <osg/Billboard_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/Billboard>
#include <osg/Billboard>

#include <osg/ref_ptr>
#include<osg/Billboard_pmoc.hpp>
namespace osg{
class QReflect_Drawable; 
}


#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Billboard: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Mode{
POINT_ROT_EYE =Billboard::POINT_ROT_EYE,
POINT_ROT_WORLD =Billboard::POINT_ROT_WORLD,
AXIAL_ROT =Billboard::AXIAL_ROT};
  Q_ENUMS(Mode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Billboard * _model;
QReflect_Billboard(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Billboard( );
//Billboard
//virtual  BoundingSphere  computeBound();
// PositionList & getPositionList();
// bool  computeMatrix( Matrix & ,const  Vec3 & ,const  Vec3 &);
// void  setPositionList( PositionList &);
//const  PositionList & getPositionList();
//const  Vec3 & getAxis();
//const  Vec3 & getNormal();
//const  Vec3 & getPosition( unsigned int );
Q_INVOKABLE  bool  addDrawable(osg::QReflect_Drawable * ,osg::QReflect_Vec3f *);
Q_INVOKABLE osg::QReflect_Billboard::Mode  getMode()const;
Q_INVOKABLE void  setAxis(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setMode(osg::QReflect_Billboard::Mode );
Q_INVOKABLE void  setNormal(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setPosition( unsigned int  ,osg::QReflect_Vec3f *);
virtual Q_INVOKABLE void   addDrawable( osg::QReflect_Drawable *par);//{return new osg::QReflect_Drawable(_model->getDrawable());}
virtual Q_INVOKABLE void pmoc_reverse_addDrawable( osg::QReflect_Drawable *par);//{_model->setDrawable(par->_model);emit DrawableCollectionChanged(par);}
signals: void DrawableCollectionChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Billboard: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Billboard> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Billboard();
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

#endif //osg_Billboard_pmocHPP


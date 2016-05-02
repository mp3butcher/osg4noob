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
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/Billboard>
#include <osg/Billboard>

#include <osg/ref_ptr>
#include<osg/Billboard_pmoc.hpp>
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
QReflect_Billboard(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Billboard( );
//Billboard
//virtual  BoundingSphere  computeBound();
// PositionList & getPositionList();
// void  setPositionList( PositionList &);
//const  PositionList & getPositionList();
//const  Vec3 & getAxis();
//const  Vec3 & getNormal();
//const  Vec3 & getPosition( unsigned int );
Q_INVOKABLE  bool  addDrawable(osg::QReflect_Drawable *gset ,osg::QReflect_Vec3f *pos);
Q_INVOKABLE  bool  addDrawable(osg::QReflect_Drawable *gset);
Q_INVOKABLE  bool  computeMatrix(osg::QReflect_Matrixd *modelview ,osg::QReflect_Vec3f *eye_local ,osg::QReflect_Vec3f *pos_local)const;
Q_INVOKABLE  bool  removeDrawable(osg::QReflect_Drawable *gset);
Q_INVOKABLE osg::QReflect_Billboard::Mode  getMode()const;
Q_INVOKABLE void  setAxis(osg::QReflect_Vec3f *axis);
Q_INVOKABLE void  setMode(osg::QReflect_Billboard::Mode mode);
Q_INVOKABLE void  setNormal(osg::QReflect_Vec3f *normal);
Q_INVOKABLE void  setPosition( unsigned int i ,osg::QReflect_Vec3f *pos);
Q_PROPERTY(osg::QReflect_Billboard::Mode  Mode  READ getMode WRITE setMode NOTIFY ModeChanged)
signals: void DrawableCollectionChanged();
public:
signals: void ModeChanged();
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


#endif //osg_Billboard_pmocHPP


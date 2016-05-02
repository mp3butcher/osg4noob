#ifndef osg_LOD_pmocHPP
#define  osg_LOD_pmocHPP 1


#include <osg/LOD_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
#include <osg/LOD>
#include <osg/LOD>

#include <osg/ref_ptr>
#include<osg/LOD_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LOD: public pmoc::QQModel
{
Q_OBJECT
public:
 enum CenterMode{
USE_BOUNDING_SPHERE_CENTER =LOD::USE_BOUNDING_SPHERE_CENTER,
USER_DEFINED_CENTER =LOD::USER_DEFINED_CENTER,
UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED =LOD::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED};
  Q_ENUMS(CenterMode)
private:
public:
 enum RangeMode{
DISTANCE_FROM_EYE_POINT =LOD::DISTANCE_FROM_EYE_POINT,
PIXEL_SIZE_ON_SCREEN =LOD::PIXEL_SIZE_ON_SCREEN};
  Q_ENUMS(RangeMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LOD * _model;
QReflect_LOD(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LOD( );
//LOD
//virtual  BoundingSphere  computeBound();
// value_type  getRadius();
// void  setCenter(const  vec_type &);
// void  setRadius( value_type );
// void  setRangeList(const  RangeList &);
//const  RangeList & getRangeList();
//const  vec_type & getCenter();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child , float min , float max);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChildren( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  float  getMaxRange( unsigned int childNo)const;
Q_INVOKABLE  float  getMinRange( unsigned int childNo)const;
Q_INVOKABLE  unsigned int  getNumRanges()const;
Q_INVOKABLE osg::QReflect_LOD::CenterMode  getCenterMode()const;
Q_INVOKABLE osg::QReflect_LOD::RangeMode  getRangeMode()const;
Q_INVOKABLE void  setCenterMode(osg::QReflect_LOD::CenterMode mode);
Q_INVOKABLE void  setRange( unsigned int childNo , float min , float max);
Q_INVOKABLE void  setRangeMode(osg::QReflect_LOD::RangeMode mode);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(osg::QReflect_LOD::CenterMode  CenterMode  READ getCenterMode WRITE setCenterMode NOTIFY CenterModeChanged)
Q_PROPERTY(osg::QReflect_LOD::RangeMode  RangeMode  READ getRangeMode WRITE setRangeMode NOTIFY RangeModeChanged)
signals: void CenterModeChanged();
public:
signals: void RangeModeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LOD: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LOD> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LOD();
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


#endif //osg_LOD_pmocHPP


#ifndef osg_Polytope_pmocHPP
#define  osg_Polytope_pmocHPP 1


#include <osg/Polytope_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Plane;
			} ;
namespace osg{ 
class QReflect_Polytope;
			} ;
#include <osg/Polytope>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Polytope: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Polytope * _model;
QReflect_Polytope(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Polytope( );
//Polytope
// MaskStack & getMaskStack();
// PlaneList & getPlaneList();
// Polytope & operator=(const  Polytope &);
// VertexList & getReferenceVertexList();
// bool  contains(const  osg::BoundingBox &);
// bool  contains(const  osg::BoundingSphere &);
// bool  contains(const  std::vector<Vec3> &);
// bool  containsAllOf(const  osg::BoundingBox &);
// bool  containsAllOf(const  osg::BoundingSphere &);
// bool  containsAllOf(const  std::vector<Vec3> &);
// void  set(const  PlaneList &);
// void  setReferenceVertexList( VertexList &);
// void  setToBoundingBox(const  BoundingBox &);
//const  MaskStack & getMaskStack();
//const  PlaneList & getPlaneList();
//const  VertexList & getReferenceVertexList();
Q_INVOKABLE  bool  contains(osg::QReflect_Vec3f *v)const;
Q_INVOKABLE  bool  empty()const;
Q_INVOKABLE  unsigned int  getCurrentMask()const;
Q_INVOKABLE  unsigned int  getResultMask()const;
Q_INVOKABLE  unsigned int&  getCurrentMask();
Q_INVOKABLE void  add(osg::QReflect_Plane *pl);
Q_INVOKABLE void  clear();
Q_INVOKABLE void  flip();
Q_INVOKABLE void  popCurrentMask();
Q_INVOKABLE void  pushCurrentMask();
Q_INVOKABLE void  setAndTransformProvidingInverse(osg::QReflect_Polytope *pt ,osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  setResultMask( unsigned int mask);
Q_INVOKABLE void  setToUnitFrustum( bool withNear , bool withFar);
Q_INVOKABLE void  setupMask();
Q_INVOKABLE void  transform(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  transformProvidingInverse(osg::QReflect_Matrixd *matrix);
Q_PROPERTY(unsigned int  ResultMask  READ getResultMask WRITE setResultMask NOTIFY ResultMaskChanged)
signals: void ResultMaskChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Polytope: public pmoc::MetaQQuickClass{
protected:
std::set<osg::Polytope* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Polytope();
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


#endif //osg_Polytope_pmocHPP


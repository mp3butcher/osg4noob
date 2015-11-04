#ifndef osg_KdTree_pmocHPP
#define  osg_KdTree_pmocHPP 1


#include <osg/KdTree_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_KdTreeBuilder;
			} ;
#include <osg/KdTree>
#include <osg/KdTree>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_KdTreeBuilder: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
KdTreeBuilder * _model;
QReflect_KdTreeBuilder(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_KdTreeBuilder( );
//KdTreeBuilder
// void  apply( Geometry &);
Q_INVOKABLE osg::QReflect_KdTreeBuilder*  clone();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_KdTreeBuilder: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::KdTreeBuilder> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_KdTreeBuilder();
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
#include <osg/KdTree_pmoc.hpp>
#include <QObject>
#include <osg/KdTree>
#include <osg/KdTree>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_KdTree: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
KdTree * _model;
QReflect_KdTree(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_KdTree( );
//KdTree
// KdNode & getNode( int );
// KdNodeList & getNodes();
// Triangle & getTriangle( unsigned int );
// TriangleList & getTriangles();
//virtual  bool  build( BuildOptions & , osg::Geometry *);
//virtual  bool  intersect(const  osg::Vec3d & ,const  osg::Vec3d & , LineSegmentIntersections &);
// int  addNode(const  KdNode &);
// unsigned int  addTriangle(const  Triangle &);
// void  setVertices( osg::Vec3Array *);
//const  KdNode & getNode( int );
//const  KdNodeList & getNodes();
//const  Triangle & getTriangle( unsigned int );
//const  TriangleList & getTriangles();
//const  osg::Vec3Array * getVertices();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_KdTree: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::KdTree> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_KdTree();
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


#endif //osg_KdTree_pmocHPP


#ifndef osg_ConvexPlanarPolygon_pmocHPP
#define  osg_ConvexPlanarPolygon_pmocHPP 1


#include <osg/ConvexPlanarPolygon_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/ConvexPlanarPolygon>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConvexPlanarPolygon: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
ConvexPlanarPolygon * _model;
QReflect_ConvexPlanarPolygon(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConvexPlanarPolygon( );
//ConvexPlanarPolygon
// VertexList & getVertexList();
// void  setVertexList(const  VertexList &);
//const  VertexList & getVertexList();
Q_INVOKABLE void  add(osg::QReflect_Vec3f *v);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConvexPlanarPolygon: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ConvexPlanarPolygon* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConvexPlanarPolygon();
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


#endif //osg_ConvexPlanarPolygon_pmocHPP


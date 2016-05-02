#ifndef osg_ConvexPlanarOccluder_pmocHPP
#define  osg_ConvexPlanarOccluder_pmocHPP 1


#include <osg/ConvexPlanarOccluder_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_ConvexPlanarPolygon;
			} ;
#include <osg/ConvexPlanarOccluder>
#include <osg/ConvexPlanarOccluder>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ConvexPlanarOccluder: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ConvexPlanarOccluder * _model;
QReflect_ConvexPlanarOccluder(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ConvexPlanarOccluder( );
//ConvexPlanarOccluder
// ConvexPlanarPolygon & getOccluder();
// HoleList & getHoleList();
// void  setHoleList(const  HoleList &);
//const  ConvexPlanarPolygon & getOccluder();
//const  HoleList & getHoleList();
Q_INVOKABLE void  addHole(osg::QReflect_ConvexPlanarPolygon *cpp);
Q_INVOKABLE void  setOccluder(osg::QReflect_ConvexPlanarPolygon *cpp);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ConvexPlanarOccluder: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ConvexPlanarOccluder> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ConvexPlanarOccluder();
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


#endif //osg_ConvexPlanarOccluder_pmocHPP


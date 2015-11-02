#ifndef osg_OccluderNode_pmocHPP
#define  osg_OccluderNode_pmocHPP 1

#include <osg/OccluderNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_ConvexPlanarOccluder;
			} ;
#include <osg/OccluderNode>
#include <osg/OccluderNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_OccluderNode: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
OccluderNode * _model;
QReflect_OccluderNode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_OccluderNode( );
//OccluderNode
//virtual  BoundingSphere  computeBound();
Q_INVOKABLE  osg::QReflect_ConvexPlanarOccluder * getOccluder()const;
Q_INVOKABLE void pmoc_reverse_setOccluder( osg::QReflect_ConvexPlanarOccluder *par=0);
Q_INVOKABLE void setOccluder( osg::QReflect_ConvexPlanarOccluder *par);
signals: void OccluderChanged(const osg::QReflect_ConvexPlanarOccluder*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_OccluderNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::OccluderNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_OccluderNode();
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

#endif //osg_OccluderNode_pmocHPP


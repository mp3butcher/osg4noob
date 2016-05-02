#ifndef osg_Projection_pmocHPP
#define  osg_Projection_pmocHPP 1


#include <osg/Projection_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/Projection>
#include <osg/Projection>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Projection: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Projection * _model;
QReflect_Projection(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Projection( );
//Projection
//const  Matrix & getMatrix();
Q_INVOKABLE void  postMult(osg::QReflect_Matrixd *mat);
Q_INVOKABLE void  preMult(osg::QReflect_Matrixd *mat);
Q_INVOKABLE void  setMatrix(osg::QReflect_Matrixd *mat);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Projection: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Projection> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Projection();
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


#endif //osg_Projection_pmocHPP


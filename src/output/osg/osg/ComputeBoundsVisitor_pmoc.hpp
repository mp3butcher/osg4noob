#ifndef osg_ComputeBoundsVisitor_pmocHPP
#define  osg_ComputeBoundsVisitor_pmocHPP 1


#include <osg/ComputeBoundsVisitor_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Transform;
			} ;
namespace osg{ 
class QReflect_Polytope;
			} ;
#include <osg/ComputeBoundsVisitor>
#include <osg/ComputeBoundsVisitor>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ComputeBoundsVisitor: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ComputeBoundsVisitor * _model;
QReflect_ComputeBoundsVisitor(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ComputeBoundsVisitor( );
//ComputeBoundsVisitor
// osg::BoundingBox & getBoundingBox();
// void  applyBoundingBox(const  osg::BoundingBox &);
//const  MatrixStack & getMatrixStack();
Q_INVOKABLE void  apply(osg::QReflect_Drawable *drawable);
Q_INVOKABLE void  apply(osg::QReflect_Transform *transform);
Q_INVOKABLE void  getBase(osg::QReflect_Polytope *polytope , float margin)const;
Q_INVOKABLE void  getPolytope(osg::QReflect_Polytope *polytope , float margin)const;
Q_INVOKABLE void  popMatrix();
Q_INVOKABLE void  pushMatrix(osg::QReflect_Matrixd *matrix);
Q_INVOKABLE void  reset();
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ComputeBoundsVisitor: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ComputeBoundsVisitor> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ComputeBoundsVisitor();
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


#endif //osg_ComputeBoundsVisitor_pmocHPP


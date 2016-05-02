#ifndef osg_MatrixTransform_pmocHPP
#define  osg_MatrixTransform_pmocHPP 1


#include <osg/MatrixTransform_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_MatrixTransform;
			} ;
#include <osg/MatrixTransform>
#include <osg/MatrixTransform>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_MatrixTransform: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
MatrixTransform * _model;
QReflect_MatrixTransform(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_MatrixTransform( );
//MatrixTransform
//const  Matrix & getInverseMatrix();
//const  Matrix & getMatrix();
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *)const;
Q_INVOKABLE osg::QReflect_MatrixTransform*  asMatrixTransform();
Q_INVOKABLE osg::QReflect_MatrixTransform*  asMatrixTransform()const;
Q_INVOKABLE void  postMult(osg::QReflect_Matrixd *mat);
Q_INVOKABLE void  preMult(osg::QReflect_Matrixd *mat);
Q_INVOKABLE void  setMatrix(osg::QReflect_Matrixd *mat);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_MatrixTransform: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::MatrixTransform> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_MatrixTransform();
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


#endif //osg_MatrixTransform_pmocHPP


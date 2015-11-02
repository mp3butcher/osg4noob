#ifndef osg_CoordinateSystemNode_pmocHPP
#define  osg_CoordinateSystemNode_pmocHPP 1

#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/CoordinateSystemNode>
#include <osg/CoordinateSystemNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_EllipsoidModel: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
EllipsoidModel * _model;
QReflect_EllipsoidModel(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_EllipsoidModel( );
//EllipsoidModel
// bool  operator==(const  EllipsoidModel & ,const  EllipsoidModel &);
// osg::Vec3d  computeLocalUpVector( double  , double  , double );
Q_INVOKABLE  bool  isWGS84()const;
Q_INVOKABLE const double  getRadiusEquator()const;
Q_INVOKABLE const double  getRadiusPolar()const;
Q_INVOKABLE void  computeCoordinateFrame( double  , double  ,osg::QReflect_Matrixd *)const;
Q_INVOKABLE void  computeLocalToWorldTransformFromLatLongHeight( double  , double  , double  ,osg::QReflect_Matrixd *)const;
Q_INVOKABLE void  computeLocalToWorldTransformFromXYZ( double  , double  , double  ,osg::QReflect_Matrixd *)const;
Q_INVOKABLE void  convertLatLongHeightToXYZ( double  , double  , double  , double & , double & , double &)const;
Q_INVOKABLE void  convertXYZToLatLongHeight( double  , double  , double  , double & , double & , double &)const;
Q_INVOKABLE void setRadiusEquator(const double &);
Q_INVOKABLE void setRadiusPolar(const double &);
Q_PROPERTY(double RadiusEquator  READ getRadiusEquator WRITE setRadiusEquator NOTIFY RadiusEquatorChanged)
Q_PROPERTY(double RadiusPolar  READ getRadiusPolar WRITE setRadiusPolar NOTIFY RadiusPolarChanged)
signals: void RadiusEquatorChanged(const double&);
public:
signals: void RadiusPolarChanged(const double&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_EllipsoidModel: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::EllipsoidModel> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_EllipsoidModel();
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
#include <osg/CoordinateSystemNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_CoordinateSystemNode;
			} ;
namespace osg{ 
class QReflect_EllipsoidModel;
			} ;
#include <osg/CoordinateSystemNode>
#include <osg/CoordinateSystemNode>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CoordinateSystemNode: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CoordinateSystemNode * _model;
QReflect_CoordinateSystemNode(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CoordinateSystemNode( );
//CoordinateSystemNode
// CoordinateFrame  computeLocalCoordinateFrame(const  Vec3d &);
// osg::Vec3d  computeLocalUpVector(const  Vec3d &);
Q_INVOKABLE  osg::QReflect_EllipsoidModel * getEllipsoidModel()const;
Q_INVOKABLE const QString  getCoordinateSystem()const;
Q_INVOKABLE const QString  getFormat()const;
Q_INVOKABLE void  set(osg::QReflect_CoordinateSystemNode *);
Q_INVOKABLE void pmoc_reverse_setEllipsoidModel( osg::QReflect_EllipsoidModel *par=0);
Q_INVOKABLE void setCoordinateSystem(const QString &);
Q_INVOKABLE void setEllipsoidModel( osg::QReflect_EllipsoidModel *par);
Q_INVOKABLE void setFormat(const QString &);
Q_PROPERTY(QString CoordinateSystem  READ getCoordinateSystem WRITE setCoordinateSystem NOTIFY CoordinateSystemChanged)
Q_PROPERTY(QString Format  READ getFormat WRITE setFormat NOTIFY FormatChanged)
signals: void CoordinateSystemChanged(const QString&);
public:
signals: void EllipsoidModelChanged(const osg::QReflect_EllipsoidModel*);
public:
signals: void FormatChanged(const QString&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CoordinateSystemNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CoordinateSystemNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CoordinateSystemNode();
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

#endif //osg_CoordinateSystemNode_pmocHPP


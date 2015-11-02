#ifndef osg_AnimationPath_pmocHPP
#define  osg_AnimationPath_pmocHPP 1
#include <osg/AnimationPath_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Matrixf;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
#include <osg/AnimationPath>
#include <osg/AnimationPath>

#include <osg/ref_ptr>
#include<osg/AnimationPath_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AnimationPath: public pmoc::QQModel
{
Q_OBJECT
public:
 enum LoopMode{
SWING =AnimationPath::SWING,
LOOP =AnimationPath::LOOP,
NO_LOOPING =AnimationPath::NO_LOOPING};
  Q_ENUMS(LoopMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AnimationPath * _model;
QReflect_AnimationPath(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AnimationPath( );
//AnimationPath
// TimeControlPointMap & getTimeControlPointMap();
//virtual  bool  getInterpolatedControlPoint( double  , ControlPoint &);
// void  insert( double  ,const  ControlPoint &);
// void  read( std::istream &);
// void  setTimeControlPointMap( TimeControlPointMap &);
// void  write( std::ostream &);
// void  write( TimeControlPointMap::const_iterator  , std::ostream &);
//const  TimeControlPointMap & getTimeControlPointMap();
Q_INVOKABLE  bool  empty()const;
Q_INVOKABLE  bool  getInverse( double  ,osg::QReflect_Matrixd *)const;
Q_INVOKABLE  bool  getInverse( double  ,osg::QReflect_Matrixf *)const;
Q_INVOKABLE  bool  getMatrix( double  ,osg::QReflect_Matrixd *)const;
Q_INVOKABLE  bool  getMatrix( double  ,osg::QReflect_Matrixf *)const;
Q_INVOKABLE  double  getFirstTime()const;
Q_INVOKABLE  double  getLastTime()const;
Q_INVOKABLE  double  getPeriod()const;
Q_INVOKABLE osg::QReflect_AnimationPath::LoopMode  getLoopMode()const;
Q_INVOKABLE void  clear();
Q_INVOKABLE void  setLoopMode(osg::QReflect_AnimationPath::LoopMode );
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AnimationPath: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::AnimationPath> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AnimationPath();
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
#include <osg/AnimationPath_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_AnimationPath;
			} ;
#include <osg/AnimationPath>
#include <osg/AnimationPath>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_AnimationPathCallback: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
AnimationPathCallback * _model;
QReflect_AnimationPathCallback(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AnimationPathCallback( );
//AnimationPathCallback
//virtual  void  operator()( Node * , NodeVisitor *);
// void  update( osg::Node &);
//const  Vec3d & getPivotPoint();
Q_INVOKABLE  double  getAnimationTime()const;
Q_INVOKABLE  osg::QReflect_AnimationPath * getAnimationPath()const;
Q_INVOKABLE const bool  getPause()const;
Q_INVOKABLE const bool  getUseInverseMatrix()const;
Q_INVOKABLE const double  getTimeMultiplier()const;
Q_INVOKABLE const double  getTimeOffset()const;
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setPivotPoint(osg::QReflect_Vec3d *);
Q_INVOKABLE void pmoc_reverse_setAnimationPath( osg::QReflect_AnimationPath *par=0);
Q_INVOKABLE void setAnimationPath( osg::QReflect_AnimationPath *par);
Q_INVOKABLE void setPause(const bool &);
Q_INVOKABLE void setTimeMultiplier(const double &);
Q_INVOKABLE void setTimeOffset(const double &);
Q_INVOKABLE void setUseInverseMatrix(const bool &);
Q_PROPERTY(bool Pause  READ getPause WRITE setPause NOTIFY PauseChanged)
Q_PROPERTY(bool UseInverseMatrix  READ getUseInverseMatrix WRITE setUseInverseMatrix NOTIFY UseInverseMatrixChanged)
Q_PROPERTY(double TimeMultiplier  READ getTimeMultiplier WRITE setTimeMultiplier NOTIFY TimeMultiplierChanged)
Q_PROPERTY(double TimeOffset  READ getTimeOffset WRITE setTimeOffset NOTIFY TimeOffsetChanged)
signals: void AnimationPathChanged(const osg::QReflect_AnimationPath*);
public:
signals: void PauseChanged(const bool&);
public:
signals: void TimeMultiplierChanged(const double&);
public:
signals: void TimeOffsetChanged(const double&);
public:
signals: void UseInverseMatrixChanged(const bool&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_AnimationPathCallback: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::AnimationPathCallback> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_AnimationPathCallback();
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

#endif //osg_AnimationPath_pmocHPP


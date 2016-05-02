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
QReflect_AnimationPath(const pmoc::Instance *i=0,QObject* parent=0);
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
Q_INVOKABLE  bool  getInverse( double time ,osg::QReflect_Matrixd *matrix)const;
Q_INVOKABLE  bool  getInverse( double time ,osg::QReflect_Matrixf *matrix)const;
Q_INVOKABLE  bool  getMatrix( double time ,osg::QReflect_Matrixd *matrix)const;
Q_INVOKABLE  bool  getMatrix( double time ,osg::QReflect_Matrixf *matrix)const;
Q_INVOKABLE  double  getFirstTime()const;
Q_INVOKABLE  double  getLastTime()const;
Q_INVOKABLE  double  getPeriod()const;
Q_INVOKABLE osg::QReflect_AnimationPath::LoopMode  getLoopMode()const;
Q_INVOKABLE void  clear();
Q_INVOKABLE void  setLoopMode(osg::QReflect_AnimationPath::LoopMode lm);
Q_PROPERTY(osg::QReflect_AnimationPath::LoopMode  LoopMode  READ getLoopMode WRITE setLoopMode NOTIFY LoopModeChanged)
signals: void LoopModeChanged();
public:
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
#include <osg/AnimationPath_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
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
QReflect_AnimationPathCallback(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_AnimationPathCallback( );
//AnimationPathCallback
//const  Vec3d & getPivotPoint();
Q_INVOKABLE  bool  getPause()const;
Q_INVOKABLE  bool  getUseInverseMatrix()const;
Q_INVOKABLE  double  getAnimationTime()const;
Q_INVOKABLE  double  getTimeMultiplier()const;
Q_INVOKABLE  double  getTimeOffset()const;
Q_INVOKABLE osg::QReflect_AnimationPath*  getAnimationPath();
Q_INVOKABLE osg::QReflect_AnimationPath*  getAnimationPath()const;
Q_INVOKABLE void  operator()(osg::QReflect_Node *node ,osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  reset();
Q_INVOKABLE void  setAnimationPath(osg::QReflect_AnimationPath *path);
Q_INVOKABLE void  setPause( bool pause);
Q_INVOKABLE void  setPivotPoint(osg::QReflect_Vec3d *pivot);
Q_INVOKABLE void  setTimeMultiplier( double multiplier);
Q_INVOKABLE void  setTimeOffset( double offset);
Q_INVOKABLE void  setUseInverseMatrix( bool useInverseMatrix);
Q_INVOKABLE void  update(osg::QReflect_Node *node);
Q_PROPERTY(bool  Pause  READ getPause WRITE setPause NOTIFY PauseChanged)
Q_PROPERTY(bool  UseInverseMatrix  READ getUseInverseMatrix WRITE setUseInverseMatrix NOTIFY UseInverseMatrixChanged)
Q_PROPERTY(double  TimeMultiplier  READ getTimeMultiplier WRITE setTimeMultiplier NOTIFY TimeMultiplierChanged)
Q_PROPERTY(double  TimeOffset  READ getTimeOffset WRITE setTimeOffset NOTIFY TimeOffsetChanged)
Q_PROPERTY(osg::QReflect_AnimationPath * AnimationPath  READ getAnimationPath WRITE setAnimationPath NOTIFY AnimationPathChanged)
signals: void AnimationPathChanged();
public:
signals: void PauseChanged();
public:
signals: void TimeMultiplierChanged();
public:
signals: void TimeOffsetChanged();
public:
signals: void UseInverseMatrixChanged();
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


#endif //osg_AnimationPath_pmocHPP


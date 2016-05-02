#ifndef osg_Point_pmocHPP
#define  osg_Point_pmocHPP 1


#include <osg/Point_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
#include <osg/Point>
#include <osg/Point>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Point: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Point * _model;
QReflect_Point(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Point( );
//Point
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
//const  Vec3 & getDistanceAttenuation();
Q_INVOKABLE  float  getFadeThresholdSize()const;
Q_INVOKABLE  float  getMaxSize()const;
Q_INVOKABLE  float  getMinSize()const;
Q_INVOKABLE  float  getSize()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setDistanceAttenuation(osg::QReflect_Vec3f *distanceAttenuation);
Q_INVOKABLE void  setFadeThresholdSize( float fadeThresholdSize);
Q_INVOKABLE void  setMaxSize( float maxSize);
Q_INVOKABLE void  setMinSize( float minSize);
Q_INVOKABLE void  setSize( float size);
Q_PROPERTY(float  FadeThresholdSize  READ getFadeThresholdSize WRITE setFadeThresholdSize NOTIFY FadeThresholdSizeChanged)
Q_PROPERTY(float  MaxSize  READ getMaxSize WRITE setMaxSize NOTIFY MaxSizeChanged)
Q_PROPERTY(float  MinSize  READ getMinSize WRITE setMinSize NOTIFY MinSizeChanged)
Q_PROPERTY(float  Size  READ getSize WRITE setSize NOTIFY SizeChanged)
signals: void FadeThresholdSizeChanged();
public:
signals: void MaxSizeChanged();
public:
signals: void MinSizeChanged();
public:
signals: void SizeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Point: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Point> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Point();
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


#endif //osg_Point_pmocHPP


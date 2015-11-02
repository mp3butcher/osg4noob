#ifndef osgParticle_Particle_pmocHPP
#define  osgParticle_Particle_pmocHPP 1


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
namespace osgParticle{ 
class QReflect_Interpolator;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_GLBeginEndAdapter;
			} ;
namespace osg{ 
class QReflect_RenderInfo;
			} ;
#include <osgParticle/Particle>

#include<osgParticle/Particle_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Particle: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Shape{
POINT =Particle::POINT,
QUAD =Particle::QUAD,
QUAD_TRIANGLESTRIP =Particle::QUAD_TRIANGLESTRIP,
HEXAGON =Particle::HEXAGON,
LINE =Particle::LINE,
USER =Particle::USER};
  Q_ENUMS(Shape)
private:
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
Particle * _model;
QReflect_Particle(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Particle( );
//Particle
// bool  operator<(const  Particle &);
// void  setAlphaRange(const  rangef &);
// void  setColorRange(const  rangev4 &);
// void  setSizeRange(const  rangef &);
// void  setUpTexCoordsAsPartOfConnectedParticleSystem( ParticleSystem *);
//const  osg::Vec3 & getAngle();
//const  osg::Vec3 & getAngularVelocity();
//const  osg::Vec3 & getPosition();
//const  osg::Vec3 & getPreviousAngle();
//const  osg::Vec3 & getPreviousPosition();
//const  osg::Vec3 & getVelocity();
//const  osg::Vec4 & getCurrentColor();
//const  rangef & getAlphaRange();
//const  rangef & getSizeRange();
//const  rangev4 & getColorRange();
Q_INVOKABLE  bool  isAlive()const;
Q_INVOKABLE  bool  update( double  , bool );
Q_INVOKABLE  double  getAge()const;
Q_INVOKABLE  float  getCurrentAlpha()const;
Q_INVOKABLE  float  getCurrentSize()const;
Q_INVOKABLE  float  getMassInv()const;
Q_INVOKABLE  float  getSTexCoord()const;
Q_INVOKABLE  float  getTTexCoord()const;
Q_INVOKABLE  int  getEndTile()const;
Q_INVOKABLE  int  getNumTiles()const;
Q_INVOKABLE  int  getStartTile()const;
Q_INVOKABLE  int  getTileS()const;
Q_INVOKABLE  int  getTileT()const;
Q_INVOKABLE  osg::QReflect_Drawable * getDrawable()const;
Q_INVOKABLE  osgParticle::QReflect_Interpolator * getAlphaInterpolator()const;
Q_INVOKABLE  osgParticle::QReflect_Interpolator * getColorInterpolator()const;
Q_INVOKABLE  osgParticle::QReflect_Interpolator * getSizeInterpolator()const;
Q_INVOKABLE const double  getDepth()const;
Q_INVOKABLE const double  getLifeTime()const;
Q_INVOKABLE const float  getMass()const;
Q_INVOKABLE const float  getRadius()const;
Q_INVOKABLE const int  getNextParticle()const;
Q_INVOKABLE const int  getPreviousParticle()const;
Q_INVOKABLE osgParticle::QReflect_Particle::Shape  getShape()const;
Q_INVOKABLE void  addAngularVelocity(osg::QReflect_Vec3f *);
Q_INVOKABLE void  addVelocity(osg::QReflect_Vec3f *);
Q_INVOKABLE void  beginRender(osg::QReflect_GLBeginEndAdapter *)const;
Q_INVOKABLE void  endRender(osg::QReflect_GLBeginEndAdapter *)const;
Q_INVOKABLE void  kill();
Q_INVOKABLE void  render(osg::QReflect_GLBeginEndAdapter * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f * , float )const;
Q_INVOKABLE void  render(osg::QReflect_RenderInfo * ,osg::QReflect_Vec3f * ,osg::QReflect_Vec3f *)const;
Q_INVOKABLE void  setAngle(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setAngularVelocity(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3f *);
Q_INVOKABLE void  setShape(osgParticle::QReflect_Particle::Shape );
Q_INVOKABLE void  setTextureTile( int  , int  , int );
Q_INVOKABLE void  setTextureTileRange( int  , int  , int  , int );
Q_INVOKABLE void  setVelocity(osg::QReflect_Vec3f *);
Q_INVOKABLE void  transformAngleVelocity(osg::QReflect_Matrixd *);
Q_INVOKABLE void  transformPositionVelocity(osg::QReflect_Matrixd * ,osg::QReflect_Matrixd * , float );
Q_INVOKABLE void  transformPositionVelocity(osg::QReflect_Matrixd *);
Q_INVOKABLE void pmoc_reverse_setAlphaInterpolator( osgParticle::QReflect_Interpolator *par=0);
Q_INVOKABLE void pmoc_reverse_setColorInterpolator( osgParticle::QReflect_Interpolator *par=0);
Q_INVOKABLE void pmoc_reverse_setDrawable( osg::QReflect_Drawable *par=0);
Q_INVOKABLE void pmoc_reverse_setSizeInterpolator( osgParticle::QReflect_Interpolator *par=0);
Q_INVOKABLE void setAlphaInterpolator( osgParticle::QReflect_Interpolator *par);
Q_INVOKABLE void setColorInterpolator( osgParticle::QReflect_Interpolator *par);
Q_INVOKABLE void setDepth(const double &);
Q_INVOKABLE void setDrawable( osg::QReflect_Drawable *par);
Q_INVOKABLE void setLifeTime(const double &);
Q_INVOKABLE void setMass(const float &);
Q_INVOKABLE void setNextParticle(const int &);
Q_INVOKABLE void setPreviousParticle(const int &);
Q_INVOKABLE void setRadius(const float &);
Q_INVOKABLE void setSizeInterpolator( osgParticle::QReflect_Interpolator *par);
Q_PROPERTY(double Depth  READ getDepth WRITE setDepth NOTIFY DepthChanged)
Q_PROPERTY(double LifeTime  READ getLifeTime WRITE setLifeTime NOTIFY LifeTimeChanged)
Q_PROPERTY(float Mass  READ getMass WRITE setMass NOTIFY MassChanged)
Q_PROPERTY(float Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
Q_PROPERTY(int NextParticle  READ getNextParticle WRITE setNextParticle NOTIFY NextParticleChanged)
Q_PROPERTY(int PreviousParticle  READ getPreviousParticle WRITE setPreviousParticle NOTIFY PreviousParticleChanged)
signals: void AlphaInterpolatorChanged(const osgParticle::QReflect_Interpolator*);
public:
signals: void ColorInterpolatorChanged(const osgParticle::QReflect_Interpolator*);
public:
signals: void DepthChanged(const double&);
public:
signals: void DrawableChanged(const osg::QReflect_Drawable*);
public:
signals: void LifeTimeChanged(const double&);
public:
signals: void MassChanged(const float&);
public:
signals: void NextParticleChanged(const int&);
public:
signals: void PreviousParticleChanged(const int&);
public:
signals: void RadiusChanged(const float&);
public:
signals: void SizeInterpolatorChanged(const osgParticle::QReflect_Interpolator*);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Particle: public pmoc::MetaQQuickClass{
protected:
std::set<osgParticle::Particle* 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Particle();
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


#endif //osgParticle_Particle_pmocHPP


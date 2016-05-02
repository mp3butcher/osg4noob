#ifndef osgParticle_Particle_pmocHPP
#define  osgParticle_Particle_pmocHPP 1


#include <osgParticle/Particle_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Vec3f;
			} ;
namespace osg{ 
class QReflect_Drawable;
			} ;
namespace osgParticle{ 
class QReflect_Interpolator;
			} ;
namespace osgParticle{ 
class QReflect_ParticleSystem;
			} ;
namespace osgParticle{ 
class QReflect_Particle;
			} ;
namespace osg{ 
class QReflect_Matrixd;
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
QReflect_Particle(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Particle( );
//Particle
// void  setAlphaRange(const  rangef &);
// void  setColorRange(const  rangev4 &);
// void  setSizeRange(const  rangef &);
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
Q_INVOKABLE  bool  operator<(osgParticle::QReflect_Particle &P)const;
Q_INVOKABLE  bool  update( double dt , bool onlyTimeStamp);
Q_INVOKABLE  double  getAge()const;
Q_INVOKABLE  double  getDepth()const;
Q_INVOKABLE  double  getLifeTime()const;
Q_INVOKABLE  float  getCurrentAlpha()const;
Q_INVOKABLE  float  getCurrentSize()const;
Q_INVOKABLE  float  getMass()const;
Q_INVOKABLE  float  getMassInv()const;
Q_INVOKABLE  float  getRadius()const;
Q_INVOKABLE  float  getSTexCoord()const;
Q_INVOKABLE  float  getTTexCoord()const;
Q_INVOKABLE  int  getEndTile()const;
Q_INVOKABLE  int  getNextParticle()const;
Q_INVOKABLE  int  getNumTiles()const;
Q_INVOKABLE  int  getPreviousParticle()const;
Q_INVOKABLE  int  getStartTile()const;
Q_INVOKABLE  int  getTileS()const;
Q_INVOKABLE  int  getTileT()const;
Q_INVOKABLE osg::QReflect_Drawable*  getDrawable()const;
Q_INVOKABLE osgParticle::QReflect_Interpolator*  getAlphaInterpolator()const;
Q_INVOKABLE osgParticle::QReflect_Interpolator*  getColorInterpolator()const;
Q_INVOKABLE osgParticle::QReflect_Interpolator*  getSizeInterpolator()const;
Q_INVOKABLE osgParticle::QReflect_Particle::Shape  getShape()const;
Q_INVOKABLE void  addAngularVelocity(osg::QReflect_Vec3f *dv);
Q_INVOKABLE void  addVelocity(osg::QReflect_Vec3f *dv);
Q_INVOKABLE void  beginRender(osg::QReflect_GLBeginEndAdapter *gl)const;
Q_INVOKABLE void  endRender(osg::QReflect_GLBeginEndAdapter *gl)const;
Q_INVOKABLE void  kill();
Q_INVOKABLE void  render(osg::QReflect_GLBeginEndAdapter *gl ,osg::QReflect_Vec3f *xpos ,osg::QReflect_Vec3f *px ,osg::QReflect_Vec3f *py , float scale)const;
Q_INVOKABLE void  render(osg::QReflect_RenderInfo *renderInfo ,osg::QReflect_Vec3f *xpos ,osg::QReflect_Vec3f *xrot)const;
Q_INVOKABLE void  setAlphaInterpolator(osgParticle::QReflect_Interpolator *ai);
Q_INVOKABLE void  setAngle(osg::QReflect_Vec3f *a);
Q_INVOKABLE void  setAngularVelocity(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  setColorInterpolator(osgParticle::QReflect_Interpolator *ci);
Q_INVOKABLE void  setDepth( double d);
Q_INVOKABLE void  setDrawable(osg::QReflect_Drawable *d);
Q_INVOKABLE void  setLifeTime( double t);
Q_INVOKABLE void  setMass( float m);
Q_INVOKABLE void  setNextParticle( int next);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3f *p);
Q_INVOKABLE void  setPreviousParticle( int previous);
Q_INVOKABLE void  setRadius( float r);
Q_INVOKABLE void  setShape(osgParticle::QReflect_Particle::Shape s);
Q_INVOKABLE void  setSizeInterpolator(osgParticle::QReflect_Interpolator *ri);
Q_INVOKABLE void  setTextureTile( int sTile , int tTile , int end);
Q_INVOKABLE void  setTextureTileRange( int sTile , int tTile , int startTile , int endTile);
Q_INVOKABLE void  setUpTexCoordsAsPartOfConnectedParticleSystem(osgParticle::QReflect_ParticleSystem *ps);
Q_INVOKABLE void  setVelocity(osg::QReflect_Vec3f *v);
Q_INVOKABLE void  transformAngleVelocity(osg::QReflect_Matrixd *xform);
Q_INVOKABLE void  transformPositionVelocity(osg::QReflect_Matrixd *xform);
Q_INVOKABLE void  transformPositionVelocity(osg::QReflect_Matrixd *xform1 ,osg::QReflect_Matrixd *xform2 , float r);
Q_PROPERTY(double  Depth  READ getDepth WRITE setDepth NOTIFY DepthChanged)
Q_PROPERTY(double  LifeTime  READ getLifeTime WRITE setLifeTime NOTIFY LifeTimeChanged)
Q_PROPERTY(float  Mass  READ getMass WRITE setMass NOTIFY MassChanged)
Q_PROPERTY(float  Radius  READ getRadius WRITE setRadius NOTIFY RadiusChanged)
Q_PROPERTY(int  NextParticle  READ getNextParticle WRITE setNextParticle NOTIFY NextParticleChanged)
Q_PROPERTY(int  PreviousParticle  READ getPreviousParticle WRITE setPreviousParticle NOTIFY PreviousParticleChanged)
Q_PROPERTY(osg::QReflect_Drawable * Drawable  READ getDrawable WRITE setDrawable NOTIFY DrawableChanged)
Q_PROPERTY(osgParticle::QReflect_Interpolator * AlphaInterpolator  READ getAlphaInterpolator WRITE setAlphaInterpolator NOTIFY AlphaInterpolatorChanged)
Q_PROPERTY(osgParticle::QReflect_Interpolator * ColorInterpolator  READ getColorInterpolator WRITE setColorInterpolator NOTIFY ColorInterpolatorChanged)
Q_PROPERTY(osgParticle::QReflect_Interpolator * SizeInterpolator  READ getSizeInterpolator WRITE setSizeInterpolator NOTIFY SizeInterpolatorChanged)
Q_PROPERTY(osgParticle::QReflect_Particle::Shape  Shape  READ getShape WRITE setShape NOTIFY ShapeChanged)
signals: void AlphaInterpolatorChanged();
public:
signals: void ColorInterpolatorChanged();
public:
signals: void DepthChanged();
public:
signals: void DrawableChanged();
public:
signals: void LifeTimeChanged();
public:
signals: void MassChanged();
public:
signals: void NextParticleChanged();
public:
signals: void PreviousParticleChanged();
public:
signals: void RadiusChanged();
public:
signals: void ShapeChanged();
public:
signals: void SizeInterpolatorChanged();
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



#endif //osgParticle_Particle_pmocHPP


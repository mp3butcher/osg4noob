#ifndef osg_Sequence_pmocHPP
#define  osg_Sequence_pmocHPP 1


#include <osg/Sequence_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
#include <osg/Sequence>
#include <osg/Sequence>

#include <osg/ref_ptr>
#include<osg/Sequence_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Sequence: public pmoc::QQModel
{
Q_OBJECT
public:
 enum LoopMode{
LOOP =Sequence::LOOP,
SWING =Sequence::SWING};
  Q_ENUMS(LoopMode)
private:
public:
 enum SequenceMode{
START =Sequence::START,
STOP =Sequence::STOP,
PAUSE =Sequence::PAUSE,
RESUME =Sequence::RESUME};
  Q_ENUMS(SequenceMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Sequence * _model;
QReflect_Sequence(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Sequence( );
//Sequence
// void  getInterval( LoopMode & , int & , int &);
// void  setTimeList(const  std::vector<double> &);
//const  std::vector<double> & getTimeList();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child , double t);
Q_INVOKABLE  bool  addChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  getClearOnStop()const;
Q_INVOKABLE  bool  getSync()const;
Q_INVOKABLE  bool  insertChild( unsigned int index ,osg::QReflect_Node *child , double t);
Q_INVOKABLE  bool  insertChild( unsigned int index ,osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChild(osg::QReflect_Node *child);
Q_INVOKABLE  bool  removeChildren( unsigned int pos , unsigned int numChildrenToRemove);
Q_INVOKABLE  double  getDefaultTime()const;
Q_INVOKABLE  double  getLastFrameTime()const;
Q_INVOKABLE  double  getTime( unsigned int frame)const;
Q_INVOKABLE  float  getSpeed()const;
Q_INVOKABLE  int  getBegin()const;
Q_INVOKABLE  int  getEnd()const;
Q_INVOKABLE  int  getNumRepeats()const;
Q_INVOKABLE  int  getValue()const;
Q_INVOKABLE  unsigned int  getNumFrames()const;
Q_INVOKABLE osg::QReflect_Sequence::LoopMode  getLoopMode()const;
Q_INVOKABLE osg::QReflect_Sequence::SequenceMode  getMode()const;
Q_INVOKABLE void  getDuration( float &speed , int &nreps)const;
Q_INVOKABLE void  setBegin( int begin);
Q_INVOKABLE void  setClearOnStop( bool clearOnStop);
Q_INVOKABLE void  setDefaultTime( double t);
Q_INVOKABLE void  setDuration( float speed , int nreps);
Q_INVOKABLE void  setEnd( int end);
Q_INVOKABLE void  setInterval(osg::QReflect_Sequence::LoopMode mode , int begin , int end);
Q_INVOKABLE void  setLastFrameTime( double t);
Q_INVOKABLE void  setLoopMode(osg::QReflect_Sequence::LoopMode mode);
Q_INVOKABLE void  setMode(osg::QReflect_Sequence::SequenceMode mode);
Q_INVOKABLE void  setNumRepeats( int nreps);
Q_INVOKABLE void  setSpeed( float speed);
Q_INVOKABLE void  setSync( bool sync);
Q_INVOKABLE void  setTime( unsigned int frame , double t);
Q_INVOKABLE void  setValue( int value);
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *nv);
Q_PROPERTY(bool  ClearOnStop  READ getClearOnStop WRITE setClearOnStop NOTIFY ClearOnStopChanged)
Q_PROPERTY(bool  Sync  READ getSync WRITE setSync NOTIFY SyncChanged)
Q_PROPERTY(double  DefaultTime  READ getDefaultTime WRITE setDefaultTime NOTIFY DefaultTimeChanged)
Q_PROPERTY(double  LastFrameTime  READ getLastFrameTime WRITE setLastFrameTime NOTIFY LastFrameTimeChanged)
Q_PROPERTY(float  Speed  READ getSpeed WRITE setSpeed NOTIFY SpeedChanged)
Q_PROPERTY(int  Begin  READ getBegin WRITE setBegin NOTIFY BeginChanged)
Q_PROPERTY(int  End  READ getEnd WRITE setEnd NOTIFY EndChanged)
Q_PROPERTY(int  NumRepeats  READ getNumRepeats WRITE setNumRepeats NOTIFY NumRepeatsChanged)
Q_PROPERTY(int  Value  READ getValue WRITE setValue NOTIFY ValueChanged)
Q_PROPERTY(osg::QReflect_Sequence::LoopMode  LoopMode  READ getLoopMode WRITE setLoopMode NOTIFY LoopModeChanged)
Q_PROPERTY(osg::QReflect_Sequence::SequenceMode  Mode  READ getMode WRITE setMode NOTIFY ModeChanged)
signals: void BeginChanged();
public:
signals: void ChildCollectionChanged();
public:
signals: void ClearOnStopChanged();
public:
signals: void DefaultTimeChanged();
public:
signals: void EndChanged();
public:
signals: void LastFrameTimeChanged();
public:
signals: void LoopModeChanged();
public:
signals: void ModeChanged();
public:
signals: void NumRepeatsChanged();
public:
signals: void SpeedChanged();
public:
signals: void SyncChanged();
public:
signals: void ValueChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Sequence: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Sequence> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Sequence();
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


#endif //osg_Sequence_pmocHPP


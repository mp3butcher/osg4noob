#ifndef osg_Sequence_pmocHPP
#define  osg_Sequence_pmocHPP 1

#include <osg/Sequence_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
#include <osg/Sequence>
#include <osg/Sequence>

#include <osg/ref_ptr>
#include<osg/Sequence_pmoc.hpp>
namespace osg{
class QReflect_Node; 
}


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
QReflect_Sequence(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Sequence( );
//Sequence
// void  getInterval( LoopMode & , int & , int &);
// void  setTimeList(const  std::vector<double> &);
//const  std::vector<double> & getTimeList();
Q_INVOKABLE  bool  addChild(osg::QReflect_Node * , double );
Q_INVOKABLE  bool  insertChild( unsigned int  ,osg::QReflect_Node * , double );
Q_INVOKABLE  bool  insertChild( unsigned int  ,osg::QReflect_Node *);
Q_INVOKABLE  bool  removeChildren( unsigned int  , unsigned int );
Q_INVOKABLE  double  getTime( unsigned int )const;
Q_INVOKABLE  unsigned int  getNumFrames()const;
Q_INVOKABLE const bool  getClearOnStop()const;
Q_INVOKABLE const bool  getSync()const;
Q_INVOKABLE const double  getDefaultTime()const;
Q_INVOKABLE const double  getLastFrameTime()const;
Q_INVOKABLE const float  getSpeed()const;
Q_INVOKABLE const int  getBegin()const;
Q_INVOKABLE const int  getEnd()const;
Q_INVOKABLE const int  getNumRepeats()const;
Q_INVOKABLE const int  getValue()const;
Q_INVOKABLE osg::QReflect_Sequence::LoopMode  getLoopMode()const;
Q_INVOKABLE osg::QReflect_Sequence::SequenceMode  getMode()const;
Q_INVOKABLE void  getDuration( float & , int &)const;
Q_INVOKABLE void  setDuration( float  , int );
Q_INVOKABLE void  setInterval(osg::QReflect_Sequence::LoopMode  , int  , int );
Q_INVOKABLE void  setLoopMode(osg::QReflect_Sequence::LoopMode );
Q_INVOKABLE void  setMode(osg::QReflect_Sequence::SequenceMode );
Q_INVOKABLE void  setTime( unsigned int  , double );
Q_INVOKABLE void  traverse(osg::QReflect_NodeVisitor *);
Q_INVOKABLE void setBegin(const int &);
Q_INVOKABLE void setClearOnStop(const bool &);
Q_INVOKABLE void setDefaultTime(const double &);
Q_INVOKABLE void setEnd(const int &);
Q_INVOKABLE void setLastFrameTime(const double &);
Q_INVOKABLE void setNumRepeats(const int &);
Q_INVOKABLE void setSpeed(const float &);
Q_INVOKABLE void setSync(const bool &);
Q_INVOKABLE void setValue(const int &);
Q_PROPERTY(bool ClearOnStop  READ getClearOnStop WRITE setClearOnStop NOTIFY ClearOnStopChanged)
Q_PROPERTY(bool Sync  READ getSync WRITE setSync NOTIFY SyncChanged)
Q_PROPERTY(double DefaultTime  READ getDefaultTime WRITE setDefaultTime NOTIFY DefaultTimeChanged)
Q_PROPERTY(double LastFrameTime  READ getLastFrameTime WRITE setLastFrameTime NOTIFY LastFrameTimeChanged)
Q_PROPERTY(float Speed  READ getSpeed WRITE setSpeed NOTIFY SpeedChanged)
Q_PROPERTY(int Begin  READ getBegin WRITE setBegin NOTIFY BeginChanged)
Q_PROPERTY(int End  READ getEnd WRITE setEnd NOTIFY EndChanged)
Q_PROPERTY(int NumRepeats  READ getNumRepeats WRITE setNumRepeats NOTIFY NumRepeatsChanged)
Q_PROPERTY(int Value  READ getValue WRITE setValue NOTIFY ValueChanged)
virtual Q_INVOKABLE void   addChild( osg::QReflect_Node *par);//{return new osg::QReflect_Node(_model->getChild());}
virtual Q_INVOKABLE void pmoc_reverse_addChild( osg::QReflect_Node *par);//{_model->setChild(par->_model);emit ChildCollectionChanged(par);}
signals: void BeginChanged(const int&);
public:
signals: void ChildCollectionChanged();
public:
signals: void ClearOnStopChanged(const bool&);
public:
signals: void DefaultTimeChanged(const double&);
public:
signals: void EndChanged(const int&);
public:
signals: void LastFrameTimeChanged(const double&);
public:
signals: void NumRepeatsChanged(const int&);
public:
signals: void SpeedChanged(const float&);
public:
signals: void SyncChanged(const bool&);
public:
signals: void ValueChanged(const int&);
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

#endif //osg_Sequence_pmocHPP


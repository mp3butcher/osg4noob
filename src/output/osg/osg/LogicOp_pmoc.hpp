#ifndef osg_LogicOp_pmocHPP
#define  osg_LogicOp_pmocHPP 1


#include <osg/LogicOp_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/LogicOp>
#include <osg/LogicOp>

#include <osg/ref_ptr>
#include<osg/LogicOp_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LogicOp: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Opcode{
CLEAR =LogicOp::CLEAR,
SET =LogicOp::SET,
COPY =LogicOp::COPY,
COPY_INVERTED =LogicOp::COPY_INVERTED,
NOOP =LogicOp::NOOP,
INVERT =LogicOp::INVERT,
AND =LogicOp::AND,
NAND =LogicOp::NAND,
OR =LogicOp::OR,
NOR =LogicOp::NOR,
XOR =LogicOp::XOR,
EQUIV =LogicOp::EQUIV,
AND_REVERSE =LogicOp::AND_REVERSE,
AND_INVERTED =LogicOp::AND_INVERTED,
OR_REVERSE =LogicOp::OR_REVERSE,
OR_INVERTED =LogicOp::OR_INVERTED};
  Q_ENUMS(Opcode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LogicOp * _model;
QReflect_LogicOp(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LogicOp( );
//LogicOp
//virtual  bool  getModeUsage( StateAttribute::ModeUsage &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE osg::QReflect_LogicOp::Opcode  getOpcode()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setOpcode(osg::QReflect_LogicOp::Opcode opcode);
Q_PROPERTY(osg::QReflect_LogicOp::Opcode  Opcode  READ getOpcode WRITE setOpcode NOTIFY OpcodeChanged)
signals: void OpcodeChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LogicOp: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LogicOp> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LogicOp();
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


#endif //osg_LogicOp_pmocHPP


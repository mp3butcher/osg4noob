#ifndef osg_BlendFunci_pmocHPP
#define  osg_BlendFunci_pmocHPP 1
#include <osg/BlendFunci_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/BlendFunci>
#include <osg/BlendFunci>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_BlendFunci: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
BlendFunci * _model;
QReflect_BlendFunci(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_BlendFunci( );
//BlendFunci
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE const unsigned int  getIndex()const;
Q_INVOKABLE void setIndex(const unsigned int &);
Q_PROPERTY(unsigned int Index  READ getIndex WRITE setIndex NOTIFY IndexChanged)
signals: void IndexChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_BlendFunci: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::BlendFunci> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_BlendFunci();
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

#endif //osg_BlendFunci_pmocHPP


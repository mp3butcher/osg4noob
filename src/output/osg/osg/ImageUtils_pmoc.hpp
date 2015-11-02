#ifndef osg_ImageUtils_pmocHPP
#define  osg_ImageUtils_pmocHPP 1
#include <osg/ImageUtils_pmoc.hpp>
#include <QObject>
#include <osg/ImageUtils>

#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CastAndScaleToFloatOperation: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 0;}

/// inheritance simulated via composition
struct CastAndScaleToFloatOperation * _model;
QReflect_CastAndScaleToFloatOperation(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CastAndScaleToFloatOperation( );
//CastAndScaleToFloatOperation
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CastAndScaleToFloatOperation: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_CastAndScaleToFloatOperation();
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

#endif //osg_ImageUtils_pmocHPP


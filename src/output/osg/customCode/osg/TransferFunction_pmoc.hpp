#ifndef osg_TransferFunction_customHPP
#define  osg_TransferFunction_customHPP 1

//includes
#include <osg/TransferFunction_pmoc.hpp>
#include <QObject>
#include <osg/Object_pmoc.hpp>
#include <osg/TransferFunction>

#include <osg/TransferFunction_pmoc.hpp>
namespace osg{
class  QMLTransferFunction: public QReflect_TransferFunction
{
Q_OBJECT
public:
QMLTransferFunction(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTransferFunction :public MetaQReflect_TransferFunction{};

}
  Q_DECLARE_METATYPE(osg::QMLTransferFunction)
#include <osg/TransferFunction_pmoc.hpp>
#include <QObject>
#include <osg/TransferFunction>

#include <osg/TransferFunction_pmoc.hpp>
#include <osg/TransferFunction_pmoc.hpp>
namespace osg{
class  QMLTransferFunction1D: public QReflect_TransferFunction1D
{
Q_OBJECT
public:
QMLTransferFunction1D(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTransferFunction1D :public MetaQReflect_TransferFunction1D{};

}
  Q_DECLARE_METATYPE(osg::QMLTransferFunction1D)

#endif //osg_TransferFunction_customHPP


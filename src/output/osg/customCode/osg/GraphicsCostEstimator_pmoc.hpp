#ifndef osg_GraphicsCostEstimator_customHPP
#define  osg_GraphicsCostEstimator_customHPP 1

//includes
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>

#include <osg/Referenced_pmoc.hpp>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
namespace osg{
class  QMLGraphicsCostEstimator: public QReflect_GraphicsCostEstimator
{
Q_OBJECT
public:
QMLGraphicsCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGraphicsCostEstimator :public MetaQReflect_GraphicsCostEstimator{};

}
  Q_DECLARE_METATYPE(osg::QMLGraphicsCostEstimator)
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>

#include <osg/GraphicsCostEstimator_pmoc.hpp>
namespace osg{
class  QMLClampedLinearCostFunction1D: public QReflect_ClampedLinearCostFunction1D
{
Q_OBJECT
public:
QMLClampedLinearCostFunction1D(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLClampedLinearCostFunction1D :public MetaQReflect_ClampedLinearCostFunction1D{};

}
  Q_DECLARE_METATYPE(osg::QMLClampedLinearCostFunction1D)
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>

#include <osg/Referenced_pmoc.hpp>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
namespace osg{
class  QMLGeometryCostEstimator: public QReflect_GeometryCostEstimator
{
Q_OBJECT
public:
QMLGeometryCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLGeometryCostEstimator :public MetaQReflect_GeometryCostEstimator{};

}
  Q_DECLARE_METATYPE(osg::QMLGeometryCostEstimator)
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>

#include <osg/Referenced_pmoc.hpp>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
namespace osg{
class  QMLTextureCostEstimator: public QReflect_TextureCostEstimator
{
Q_OBJECT
public:
QMLTextureCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLTextureCostEstimator :public MetaQReflect_TextureCostEstimator{};

}
  Q_DECLARE_METATYPE(osg::QMLTextureCostEstimator)
#include <osg/GraphicsCostEstimator_pmoc.hpp>
#include <QObject>
#include <osg/GraphicsCostEstimator>

#include <osg/Referenced_pmoc.hpp>
#include <osg/GraphicsCostEstimator_pmoc.hpp>
namespace osg{
class  QMLProgramCostEstimator: public QReflect_ProgramCostEstimator
{
Q_OBJECT
public:
QMLProgramCostEstimator(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLProgramCostEstimator :public MetaQReflect_ProgramCostEstimator{};

}
  Q_DECLARE_METATYPE(osg::QMLProgramCostEstimator)

#endif //osg_GraphicsCostEstimator_customHPP


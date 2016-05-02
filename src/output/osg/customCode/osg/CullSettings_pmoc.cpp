#include <osg/CullSettings>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/CullSettings_pmoc.hpp>
using namespace pmoc;

int osg::QMLCullSettings::computeNearFarMode()const
{

    switch(_model->getComputeNearFarMode())
    {

    case  CullSettings::DO_NOT_COMPUTE_NEAR_FAR :
        return 0;
    case         CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES:
        return 1;
    case         CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES:
        return 2;
    case        CullSettings::COMPUTE_NEAR_USING_PRIMITIVES:
        return 3;
    default :
        return -1;

    }



}
void osg::QMLCullSettings::computeNearFarMode(int i)
{


    if(i!=computeNearFarMode() )
    {
        switch(i)
        {
        case 0:
            _model->setComputeNearFarMode(CullSettings::DO_NOT_COMPUTE_NEAR_FAR);
            break;
        case 1:
            _model->setComputeNearFarMode(CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES);
            break;
        case 2:
            _model->setComputeNearFarMode(CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES);
            break;
        case 3:
            _model->setComputeNearFarMode(CullSettings::COMPUTE_NEAR_USING_PRIMITIVES);
            break;
        default :
            _model->setComputeNearFarMode(CullSettings::DO_NOT_COMPUTE_NEAR_FAR);
            break;
            emit computeNearFarModeChanged(i);


        }
    }
}

osg::QMLCullSettings::QMLCullSettings(const pmoc::Instance *i,QObject* parent):QReflect_CullSettings(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLCullSettings::connect2View(QQuickItem*i)
{
    this->_view=QReflect_CullSettings::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLCullSettings::updateModel()
{
    QReflect_CullSettings::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_CullSettings_pmoc.cpp"
#endif




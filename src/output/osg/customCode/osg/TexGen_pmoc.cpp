#include <osg/TexGen>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/TexGen_pmoc.hpp>
using namespace pmoc;
using namespace osg;


int osg::QMLTexGen::mode()const
{
    switch(_model->getMode())
    {

    case TexGen::OBJECT_LINEAR :
        return 0;
    case TexGen::EYE_LINEAR :
        return 1;
    case TexGen::SPHERE_MAP :
        return 2;
    case TexGen::NORMAL_MAP :
        return 3;
    case TexGen::REFLECTION_MAP :
        return 4;

    default:
        return -1;
    }
}
void osg::QMLTexGen::mode(int m)
{
    if(m!=mode())
    {
        switch(m)
        {
        case 0:
            _model->setMode( TexGen::OBJECT_LINEAR );
            break;
        case 1:
            _model->setMode( TexGen::EYE_LINEAR );
            break;
        case 2:
            _model->setMode( TexGen::SPHERE_MAP );
            break;
        case 3:
            _model->setMode( TexGen::NORMAL_MAP );
            break;
        case 4:
            _model->setMode( TexGen::REFLECTION_MAP );
            break;

        }

        emit modeChanged(m);
    }

}

osg::QMLTexGen::QMLTexGen(pmoc::Instance *i,QObject* parent):QReflect_TexGen(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLTexGen::connect2View(QQuickItem*i)
{
    this->_view=QReflect_TexGen::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLTexGen::updateModel()
{
    QReflect_TexGen::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_TexGen_pmoc.cpp"
#endif



#include <osg/Node>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <iostream>
#include <customCode/osg/Node_pmoc.hpp>

using namespace pmoc;
osg::QMLNode::QMLNode(pmoc::Instance *i,QObject* parent):QReflect_Node(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLNode::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Node::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here


// updateModel();

    return this->_view;
}
QString  osg::QMLNode::nodeMask()const
{

    unsigned int mask=_model->getNodeMask();

    return QString::number(mask,16);
}
void  osg::QMLNode::nodeMask(QString s)
{
    if(s!=nodeMask())
    {
///String to hex
//const QString str = QLatin1String("AA110011");
        bool ok;
        const unsigned int parsedValue = s.toUInt(&ok, 16);
        if (!ok)
        {
        }
        _model->setNodeMask(parsedValue);
        emit nodeMaskChanged(s);
    }


}

void  osg::QMLNode::updateModel()
{
    QReflect_Node::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here

    ///pop the stateset associated if exists
    /*	if(_model->getStateSet()){
    	QQuickItem* qmlStateSet;
    PMOCQCOMPONENT(*_model->getStateSet(),_view,qmlStateSet);
    }*/

    if(_model->getStateSet())
    {
        PMOCSAFEADDVIRTUALOBJECT(*_model->getStateSet(),inst,osg::StateSet);///giving a concrete mother prevent children to be virtual inherited
        QQUICKCOMPONENTWITHNAME(  inst,_view,"StateSet");
    }
    if(_model->getUpdateCallback())
    {
//PMOCSAFEADDOBJECT(*_model->getUpdateCallback(),inst);
        std::cerr<<typeid(_model->getUpdateCallback()).name()<<typeid(*_model->getUpdateCallback()).name()<<endl;
        PMOCSAFEADDVIRTUALOBJECT(*_model->getUpdateCallback(),inst,osg::Object); ///Object is concrete class of osg::Callback
        /*pmoc::Instance OUTINSTANCE;
        try{

        //OUTINSTANCE =pmoc::Instance(PMOCMETACLASS(*_model->getUpdateCallback()),reinterpret_cast<void*>(dynamic_cast<osg::Object*>( _model->getUpdateCallback()) ),false);

         OUTINSTANCE =pmoc::Instance(PMOCMETACLASS(*_model->getUpdateCallback()) ,reinterpret_cast<void*>( ( dynamic_cast<osg::Object*>(_model->getUpdateCallback())) ),false);
         }catch (std::bad_typeid& bt)
          {
            std::cerr << "bad_typeid caught: " << bt.what() << '\n';
          }*/
        QQUICKCOMPONENTWITHNAME(  inst,_view,"UpdateCallback");
    }

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Node_pmoc.cpp"
#endif




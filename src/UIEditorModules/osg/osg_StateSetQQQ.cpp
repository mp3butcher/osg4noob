#include "osg_StateSetQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/StateSet>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;

///Copy Construction////////////////
osg_StateSetQQQ_QModel::osg_StateSetQQQ_QModel(const osg_StateSetQQQ_QModel&o):QQModel(o)
{
    _model=o._model;
}

///Destruction////////////////
osg_StateSetQQQ_QModel::~osg_StateSetQQQ_QModel() {};

///DefaultConstructor////////////////
osg_StateSetQQQ_QModel::osg_StateSetQQQ_QModel(Instance *i,QObject* parent):QQModel(i,parent)
{
    _model=reinterpret_cast<osg::StateSet*>(i->ptr);

    qRegisterMetaType<pmoc::osg_StateSetQQQ_QModel>();
    qmlRegisterType<pmoc::osg_StateSetQQQ_QModel>("osg_StateSetQQQ_QModel",1,0,"osg_StateSetQQQ_QModel");;


    _currentattrib=0;
    for( osg::StateSet::AttributeList::const_iterator it= _model->getAttributeList().begin();
            it!=_model->getAttributeList().end() ; it++)
    {
        osg::StateAttribute * s=(*it).second.first;

        Instance inst =PMOCADDOBJECT(*s);
        QString classname=QString(inst.model->id().c_str());
        _attlist.addStateAttrib( StateAttribObject(classname ,"yellow"));

    }

    for( osg::StateSet::TextureAttributeList::const_iterator it= _model->getTextureAttributeList().begin();
            it!=_model->getTextureAttributeList().end() ; it++)
    {

        for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
        {
            osg::StateAttribute * s=(*it2).second.first;

            Instance inst =PMOCADDOBJECT(*s);
            QString classname=QString(inst.model->id().c_str());
            _attlist.addStateAttrib( StateAttribObject(classname ,"yellow"));
        }
    }

}
QQuickItem *osg_StateSetQQQ_QModel::connect2View(QQuickItem*i)
{
    this->_view=i;
    ///connect this's signals/slot to its qml component	///CustomiZE here


    connect(_view,SIGNAL(attributeselected(int)),this,SLOT(popStateAttribute(int)));

    return this->_view;
}

void osg_StateSetQQQ_QModel::popStateAttribute(int i)
{
    if(_currentattrib)_currentattrib->setParentItem(0);
    osg::StateSet::AttributeList::const_iterator its;
    int cpt=0;
    for( its= _model->getAttributeList().begin();            its!=_model->getAttributeList().end() &&cpt!=i; its++)cpt++;

    if (  its!=_model->getAttributeList().end())
    {
        //reached
        osg::StateAttribute * s=(*its).second.first;
        Instance inst=PMOCADDOBJECT(*s);
        _currentattrib=QQUICKCOMPONENT(inst,_view);
    }
    else
    {
        osg::StateSet::AttributeList::const_iterator it2;
        for( osg::StateSet::TextureAttributeList::const_iterator it= _model->getTextureAttributeList().begin();
                it!=_model->getTextureAttributeList().end() ; it++)
        {

            for(it2=(*it).begin(); it2!=(*it).end()&&cpt<i; it2++)
            {

                cpt++;
            }
        }


        osg::StateAttribute * s=(*it2).second.first;
        Instance inst=PMOCADDOBJECT(*s);
        _currentattrib=QQUICKCOMPONENT(inst,_view);


    }
}
///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_StateSetQQQ::Imports() const
{
    return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_StateSetQQQ::PREcompoQML()const
{
    return string("");
}
const std::string osg_StateSetQQQ::POSTcompoQML()const
{
    return string("");
}
QQModel* osg_StateSetQQQ::createQQModel(Instance*i)
{
    return new osg_StateSetQQQ_QModel(i);
}

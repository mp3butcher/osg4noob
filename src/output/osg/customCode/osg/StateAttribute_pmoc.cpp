#include <osg/StateAttribute>
//includes
#include <MetaQQuickLibraryRegistry.h>

#include <customCode/osg/StateAttribute_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <QQuickItem>
using namespace pmoc;
osg::QMLStateAttribute::QMLStateAttribute(const pmoc::Instance *i,QObject* parent):QReflect_StateAttribute(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLStateAttribute::connect2View(QQuickItem*i)
{
    this->_view=QReflect_StateAttribute::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}

int  osg::QMLStateAttribute::overrideMode()const
{
    int ret=-1;
    QReflect_StateSet* ssrefl=0;
    QQuickItem* item=_view;
    while(item->parentItem()&&ssrefl==0)
    {
        ssrefl=(item->parentItem()->property("qmodel").value<QReflect_StateSet*>());
        item=item->parentItem();
    }
    if(ssrefl)
    {

        osg::StateSet*ss=ssrefl->_model;

        for( osg::StateSet::AttributeList::const_iterator it= ss->getAttributeList().begin();
                it!=ss->getAttributeList().end() ; it++)
        {
            if((*it).second.first ==_model)
            {
                //  (*it).second.second

                /*  if( (*it).second.second & StateAttribute::ON)return(1);///ON
                else return(0);///OFF*/
                if( (*it).second.second & StateAttribute::OVERRIDE)return(1); //|OVERRIDE";
                else return(0);

            }
        }
        for( osg::StateSet::TextureAttributeList::const_iterator it= ss->getTextureAttributeList().begin();
                it!=ss->getTextureAttributeList().end() ; it++)
        {

            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                if((*it2).second.first ==_model)
                {
                    //  (*it).second.second
                    if( (*it2).second.second & StateAttribute::OVERRIDE)return(1); //|OVERRIDE";
                    else return(0);

                }
            }
        }
    }


    return ret;
}


void osg::QMLStateAttribute::modeValue(int v)
{
    QReflect_StateSet* ssrefl=0;
    QQuickItem* item=_view;
    if(modeValue()!=v)
    {
        while(item->parentItem()&&ssrefl==0)
        {
            ssrefl=(item->parentItem()->property("qmodel").value<QReflect_StateSet*>());
            item=item->parentItem();
        }
        if(ssrefl)
        {

            osg::StateSet*ss=ssrefl->_model;
            StateAttribute::GLModeValue mv;
            if(overrideMode()==1)mv=mv|StateAttribute::OVERRIDE;
            if(v==1)mv=mv|StateAttribute::ON;
            else mv=mv|StateAttribute::OFF;

            ss->setAssociatedModes(_model,mv);
            emit modeValueChanged(v);

        }
    }
}

void osg::QMLStateAttribute::overrideMode(int v)
{
    QReflect_StateSet* ssrefl=0;
    QQuickItem* item=_view;
    if(v!=overrideMode())
    {
        while(item->parentItem()&&ssrefl==0)
        {
            ssrefl=(item->parentItem()->property("qmodel").value<QReflect_StateSet*>());
            item=item->parentItem();
        }
        if(ssrefl)
        {

            osg::StateSet*ss=ssrefl->_model;
            StateAttribute::GLModeValue mv;
            if(v==1)mv=mv|StateAttribute::OVERRIDE;
            if(modeValue()==1)mv=mv|StateAttribute::ON;
            else mv=mv|StateAttribute::OFF;

            ss->setAssociatedModes(_model,mv);
            emit overrideModeChanged(v);

        }
    }
}
int  osg::QMLStateAttribute::modeValue()const
{
    int ret=-1;
    QReflect_StateSet* ssrefl=0;
    QQuickItem* item=_view;
    while(item->parentItem()&&ssrefl==0)
    {
        ssrefl=(item->parentItem()->property("qmodel").value<QReflect_StateSet*>());
        item=item->parentItem();
    }
    if(ssrefl)
    {

        osg::StateSet*ss=ssrefl->_model;

        for( osg::StateSet::AttributeList::const_iterator it= ss->getAttributeList().begin();
                it!=ss->getAttributeList().end() ; it++)
        {
            if((*it).second.first ==_model)
            {
                //  (*it).second.second

                /*  if( (*it).second.second & StateAttribute::ON)return(1);///ON
                else return(0);///OFF*/
                if( (*it).second.second & StateAttribute::ON)
                    return(1); //|OVERRIDE";
                else return(0);

            }
        }
        for( osg::StateSet::TextureAttributeList::const_iterator it= ss->getTextureAttributeList().begin();
                it!=ss->getTextureAttributeList().end() ; it++)
        {

            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                if((*it2).second.first ==_model)
                {
                    //  (*it).second.second
                    if( (*it2).second.second & StateAttribute::ON)return(1); //|OVERRIDE";
                    else return(0);

                }
            }
        }
    }


    return ret;
}
void  osg::QMLStateAttribute::updateModel()
{
    QReflect_StateAttribute::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
    QReflect_StateSet* ssrefl=dynamic_cast<QReflect_StateSet*>(_view->parentItem());
    if(ssrefl)
    {
        osg::StateSet*ss=ssrefl->_model;
        ss->getAttributeList();
        for( osg::StateSet::AttributeList::const_iterator it= ss->getAttributeList().begin();
                it!=ss->getAttributeList().end() ; it++)
        {
            if((*it).second.first ==_model)
            {
                //  (*it).second.second

                if( (*it).second.second & StateAttribute::ON)modeValue(1);///ON
                else modeValue(0);///OFF
                if( (*it).second.second & StateAttribute::OVERRIDE)overrideMode(1); //|OVERRIDE";
                else overrideMode(0);

            }
        }
        for( osg::StateSet::TextureAttributeList::const_iterator it= ss->getTextureAttributeList().begin();
                it!=ss->getTextureAttributeList().end() ; it++)
        {

            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                if((*it2).second.first ==_model)
                {
                    //  (*it).second.second

                    if( (*it2).second.second & StateAttribute::ON)modeValue(1);///ON
                    else modeValue(0);///OFF
                    if( (*it2).second.second & StateAttribute::OVERRIDE)overrideMode(1); //|OVERRIDE";
                    else overrideMode(0);

                }
            }
        }

    }

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StateAttribute_pmoc.cpp"
#endif



#include <osg/StateSet>
#include <iostream>
#include <sstream>
//includes
#include <QtGui/qopengl.h>
#include <QQuickItem>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Texture2D_pmoc.hpp>
#include <customCode/osg/Texture1D_pmoc.hpp>
#include <customCode/osg/Texture3D_pmoc.hpp>
#include <customCode/osg/Texture3D_pmoc.hpp>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <customCode/osg/StateAttribute_pmoc.hpp>

#include <MetaQQuickLibraryRegistry.h>
using namespace std;

using namespace pmoc;

///All possible Modes                         CASEMODE( GL_CLIP_DISTANCE )
#define ALLCASES                        CASEMODE(GL_LIGHTING)\
                        CASEMODE(GL_ALPHA_TEST)\
                         CASEMODE( GL_BLEND)\
  CASEMODE(GL_COLOR_LOGIC_OP)\
  CASEMODE(GL_CULL_FACE)\
  CASEMODE(GL_DEBUG_OUTPUT)\
  CASEMODE(GL_DEBUG_OUTPUT_SYNCHRONOUS)\
  CASEMODE(GL_DEPTH_CLAMP)\
 CASEMODE(GL_DEPTH_TEST)\
  CASEMODE(GL_DITHER)\
  CASEMODE(GL_FRAMEBUFFER_SRGB)\
  CASEMODE(GL_LINE_SMOOTH)\
  CASEMODE(GL_MULTISAMPLE)\
  CASEMODE(GL_POLYGON_OFFSET_FILL)\
  CASEMODE(GL_POLYGON_OFFSET_LINE)\
  CASEMODE(GL_POLYGON_OFFSET_POINT)\
  CASEMODE(GL_POLYGON_SMOOTH)\
  CASEMODE(GL_PRIMITIVE_RESTART)\
  CASEMODE(GL_PRIMITIVE_RESTART_FIXED_INDEX)\
  CASEMODE(GL_RASTERIZER_DISCARD)\
  CASEMODE(GL_SAMPLE_ALPHA_TO_COVERAGE)\
  CASEMODE(GL_SAMPLE_ALPHA_TO_ONE)\
  CASEMODE(GL_SAMPLE_COVERAGE)\
  CASEMODE(GL_SAMPLE_SHADING)\
  CASEMODE(GL_SAMPLE_MASK)\
  CASEMODE(GL_SCISSOR_TEST)\
  CASEMODE(GL_STENCIL_TEST)\
  CASEMODE(GL_TEXTURE_CUBE_MAP_SEAMLESS)\
  CASEMODE(GL_PROGRAM_POINT_SIZE)\
  \
CASEMODE(  GL_COLOR_MATERIAL)\
 CASEMODE( GL_AUTO_NORMAL)\
  CASEMODE(GL_FOG)\
  CASEMODE(GL_LINE_STIPPLE)\
  CASEMODE(GL_NORMALIZE)\
  CASEMODE(GL_POINT_SMOOTH)\
CASEMODE(GL_POLYGON_STIPPLE )\
CASEMODE(GL_TEXTURE_1D 		)\
CASEMODE(GL_TEXTURE_2D 		)\
CASEMODE(GL_TEXTURE_GEN_Q 		)\
CASEMODE(GL_TEXTURE_GEN_R 	)\
CASEMODE(GL_TEXTURE_GEN_S 		)\
CASEMODE(GL_TEXTURE_GEN_T 	)

void osg::QMLStateSet::setMode(QString mode,bool status,bool override)
{
    StateAttribute::GLModeValue val;
    if(status)val=StateAttribute::ON;
    else val=StateAttribute::OFF;

    if(override)val=val|StateAttribute::OVERRIDE;

#define CASEMODE(XXX) if(mode==#XXX)    _model->setMode(XXX,val);

ALLCASES

}
void osg::QMLStateSet::setAttribute(osg::QReflect_StateAttribute * p)
{
    _model->setAttributeAndModes(p->_model,StateAttribute::ON);
}
void osg::QMLStateSet::pmoc_reverse_setAttribute(osg::QReflect_StateAttribute *p)
{
    if(p->_model->asTexture())
    {

        int tu=-1;
        int cpttexattlist=0;
        for( osg::StateSet::TextureAttributeList::const_iterator it= _model->getTextureAttributeList().begin();
                it!=_model->getTextureAttributeList().end() ; it++)
        {
            int cptattlist=0;
            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                osg::StateAttribute * s=(*it2).second.first;
                if(s==p->_model)
                {
                    tu=cpttexattlist;//(*it2).second.second;
//cerr<<(*it2).second.second<<" "<<(*it2).first.second<<endl;
//cerr<<cpttexattlist<<" "<<cptattlist++<<endl;

                    _model->removeTextureAttribute(tu,p->_model);
                    _model->setTextureAttribute(tu,0,StateAttribute::OFF);
                    break;
                }
            }
            if(tu!=-1)break;
            cpttexattlist++;
        }

    }

    else
    {
        _model->setAttributeAndModes(p->_model,StateAttribute::OFF|StateAttribute::OVERRIDE);
        _model->removeAttribute(p->_model );
    }
}
void osg::QMLStateSet::addUniform(osg::QReflect_Uniform * p)
{
    _model->addUniform(p->_model, StateAttribute::ON);
}
void osg::QMLStateSet::pmoc_reverse_addUniform(osg::QReflect_Uniform *p)
{
    _model->removeUniform(p->_model);
}
///For Textures

int osg::QMLStateSet::getTextureUnit(QQModel*mod)
{
    osg::QMLTexture2D * tex= dynamic_cast<osg::QMLTexture2D*>(mod);
    if(tex)
    {

        cout<<"Modelist"<<endl;
        for(osg::StateSet::TextureModeList::iterator tuit=_model->getTextureModeList().begin(); tuit!=_model->getTextureModeList().end(); tuit++)
        {
            for(osg::StateSet::ModeList::iterator tuit2=(*tuit).begin(); tuit2!=(*tuit).end(); tuit2++)
            {

                cout<<(*tuit2).second<<endl;
            }
        }

        int cpttexattlist=0;
        for( osg::StateSet::TextureAttributeList::const_iterator it= _model->getTextureAttributeList().begin();
                it!=_model->getTextureAttributeList().end() ; it++)
        {

            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                osg::StateAttribute * s=(*it2).second.first;
                if(s==tex->_model)return cpttexattlist;// (*it2).second.second;
            }
            cpttexattlist++;
        }

    }
}
osg::QMLStateSet::QMLStateSet(const pmoc::Instance *i,QObject* parent):QReflect_StateSet(i,parent)
{
//custom initializations

    qmlRegisterType<pmoc::StateAttribListModel>("StateAttribListModel",1,0,"StateAttribListModel");
    textype.push_back(osg::StateAttribute::TEXENV);
    textype.push_back(osg::StateAttribute::TEXGEN);
    textype.push_back(osg::StateAttribute::TEXMAT);
    textype.push_back(osg::StateAttribute::TEXTURE);
    _currentattrib=0;
    // updateModel();
}
QQuickItem* osg::QMLStateSet::connect2View(QQuickItem*i)
{
    this->_view=QReflect_StateSet::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

   connect(_view,SIGNAL(attributeselected(int)),this,SLOT(popStateAttribute(int)));

     connect(_view,SIGNAL(texattributeselected(int)),this,SLOT(popTextureStateAttribute(int)));
     connect(_view,SIGNAL(uniformselected(int)),this,SLOT(popUniform(int)));

///HACK THE COMBOBOX
    //  QQuickItem *hack=_view->findChild<QQuickItem*>("renderingHintBox2Hack");
    // if(hack) hack->setProperty("currentIndex",  getRenderingHint());


    return this->_view;
}

void  osg::QMLStateSet::updateModel()
{
    _uniformslist.resetListViewModel();
    for( osg::StateSet::UniformList::const_iterator it= _model->getUniformList().begin();
            it!=_model->getUniformList().end() ; it++)
    {
        cerr<<osg::Uniform::getTypename((*it).second.first->getType())<<endl;
        if((*it).second.first.valid())
        {
            osg::Uniform * s=(*it).second.first.get();

            PMOCSAFEADDOBJECT( *s,inst);
            QString classname=QString(inst.model->id().c_str());
            _uniformslist.addStateAttrib( StateAttribObject(classname ,QString(s->getName().c_str())));
        }
    }
    emit uniformsListChanged(&_uniformslist);
    _attlist.resetListViewModel();
    for( osg::StateSet::AttributeList::const_iterator it= _model->getAttributeList().begin();
            it!=_model->getAttributeList().end() ; it++)
    {
        if((*it).second.first.valid())
        {
            osg::StateAttribute * s=(*it).second.first.get();

            PMOCSAFEADDOBJECT( *s,inst);
            QString classname=QString(inst.model->id().c_str());
            _attlist.addStateAttrib( StateAttribObject(classname ,QString(s->getName().c_str())));
        }
    }



    _texattlist.resetListViewModel();
    /*    for( osg::StateSet::TextureAttributeList::const_iterator it= _model->getTextureAttributeList().begin();
                it!=_model->getTextureAttributeList().end() ; it++)
        {


            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
            {
                osg::StateAttribute * s=(*it2).second.first;
                cerr<<"AttributeList"<<(*it2).second.second<<endl;
                cerr<<"AttributeList"<<(*it2).first.second<<endl;
                cerr<<"AttributeList"<<(*it2).first.first<<endl;
                Instance inst =PMOCADDOBJECT(*s);
                QString classname=QString(inst.model->id().c_str());
                cerr<<classname.toStdString()<<endl;
                _texattlist.addStateAttrib( StateAttribObject(classname ,"yellow"));
            }
        }*/


    osg::StateAttribute* temp;
    for(    vector<osg::StateAttribute::Type>::iterator it= textype.begin(); it!=textype.end(); it++)
    {
        for(int i=0; i<100; i++)
        {
            temp=_model->getTextureAttribute(i,*it);
            if(temp)
            {
                stringstream ss;
                ss<<i;
                PMOCSAFEADDOBJECT( *temp,inst);
                QString classname=QString((ss.str()+inst.model->id()).c_str());
                cerr<<classname.toStdString()<<endl;
                _texattlist.addStateAttrib( StateAttribObject(classname ,QString(temp->getName().c_str())));
            }

        }

    }

    _modelist.resetListViewModel();
    for(StateSet::ModeList::iterator it=_model->getModeList().begin(); it!=_model->getModeList().end(); it++)
    {
        QString modename;
        QString modevalue;

#undef CASEMODE
#define CASEMODE(XXX) case XXX: modename=#XXX;break;
        switch((*it).first)
        {
     ALLCASES




        }
        if( (*it).second & StateAttribute::ON)modevalue+="ON";
        else modevalue+="OFF";
        if( (*it).second & StateAttribute::OVERRIDE)modevalue+="|OVERRIDE";

        _modelist.addStateAttrib( StateAttribObject(modename ,modevalue));

    }

    emit texstateAttribsChanged(&_texattlist);
    emit stateAttribsChanged(&_attlist);
    emit uniformsListChanged(&_uniformslist);
    emit modeListChanged(&_modelist);
}

void  osg::QMLStateSet::popUniform(int i)
{
    ///HACK OSG: in case of UNDEFINED type Shader recently added
    //remove all shader and readd them
    vector<osg::ref_ptr<osg::Uniform> > temp;
    for( osg::StateSet::UniformList::const_iterator it= _model->getUniformList().begin();
            it!=_model->getUniformList().end() ; it++)
        temp.push_back((*it).second.first);

    for(vector< osg::ref_ptr<osg::Uniform> >::iterator it=temp.begin(); it!=temp.end(); it++)
        _model->removeUniform(*it);


    for(vector< osg::ref_ptr<osg::Uniform> >::iterator it=temp.begin(); it!=temp.end(); it++)
        _model->addUniform(*it);

    //if(_currentattrib)delete _currentattrib;
    _currentattrib=0;//_currentattrib->setParentItem(0);
    osg::StateSet::UniformList::const_iterator it=_model->getUniformList().begin();
    int cpt=0;

    for(  ;   it!=_model->getUniformList().end()&&cpt<i ; it++)
    {
        if((*it).second.first.valid())
        {
            cerr<<osg::Uniform::getTypename((*it).second.first->getType())<<endl;
            cpt++;
        }
    }
    if(it!=_model->getUniformList().end() )
    {


        osg::Uniform * s=(*it).second.first;
        PMOCSAFEADDOBJECT( *s,inst);
        QQUICKCOMPONENTWITHNAME(inst,_view,"Uniform");


    }
}
void  osg::QMLStateSet::popStateAttribute(int i)
{
    //if(_currentattrib)delete _currentattrib;
    _currentattrib=0;//_currentattrib->setParentItem(0);
    osg::StateSet::AttributeList::const_iterator its= _model->getAttributeList().begin(); ;
    int cpt=0;
    for( its= _model->getAttributeList().begin();            its!=_model->getAttributeList().end() &&cpt!=i; its++)cpt++;

    if (  its!=_model->getAttributeList().end())
    {
        //reached
        osg::StateAttribute * s=(*its).second.first;
        PMOCSAFEADDOBJECT( *s,inst);
        _currentattrib=QQUICKCOMPONENTWITHNAME(inst,_view,"Attribute");
    }

}

void  osg::QMLStateSet::popTextureStateAttribute(int i)
{
    //if(_currentattrib)delete _currentattrib;
    _currentattrib=0;//_currentattrib->setParentItem(0);
    int cpt=0;
    {

        osg::StateAttribute* temp=0;
        for(    vector<osg::StateAttribute::Type>::iterator it= textype.begin(); it!=textype.end()&&cpt<=i; it++)
        {
            for(int xi=0; xi<100&&cpt<=i; xi++)
            {
                temp=_model->getTextureAttribute(xi,*it);
                if(temp)cpt++;


            }
        }
        if (temp)
        {
            PMOCSAFEADDOBJECT( *temp,inst);
            QString classname=QString(inst.model->id().c_str());
            cerr<<classname.toStdString()<<endl;
            _currentattrib=QQUICKCOMPONENTWITHNAME(inst,_view,"Attribute");
        }

    }

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_StateSet_pmoc.cpp"
#endif

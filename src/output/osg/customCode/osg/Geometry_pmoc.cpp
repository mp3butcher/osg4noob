#include <osg/Geometry>
//includes
#include <customCode/osg/Geometry_pmoc.hpp>
#include <customCode/osg/Array_pmoc.hpp>
#include <customCode/osg/PrimitiveSet_pmoc.hpp>
#include <MetaQQuickLibraryRegistry.h>
#include <osgUtil/TangentSpaceGenerator>
#include <sstream>
using namespace std;
using namespace pmoc;

deprecated_osg::QMLGeometry::QMLGeometry(pmoc::Instance *i,QObject* parent):QReflect_Geometry(i,parent)
{
//custom initializations
}
QQuickItem* deprecated_osg::QMLGeometry::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Geometry::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}

#include <customCode/osg/Geometry_pmoc.hpp>


void osg::QMLGeometry::generateTangentSpace(int normapmaptu,int coordindex)
{
    osg::ref_ptr<osgUtil::TangentSpaceGenerator >gen=new osgUtil::TangentSpaceGenerator;
    gen->generate(_model,normapmaptu);//normalmaptextureunit

    _model->setVertexAttribArray(coordindex,gen->/*getBinormalArray()*/getTangentArray (),osg::Array:: BIND_PER_VERTEX);
    _model->setVertexAttribArray(coordindex+1,gen->getBinormalArray(),osg::Array:: BIND_PER_VERTEX);
    updateModel();
}


osg::QMLGeometry::QMLGeometry(pmoc::Instance *i,QObject* parent):QReflect_Geometry(i,parent)
{
//custom initializations
    qmlRegisterType<pmoc::StateAttribListModel>();
}

QQuickItem* osg::QMLGeometry::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Geometry::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here
//    updateModel();
    // connect(_view,SIGNAL(drawableselected(int)),this,SLOT(DrawableSelected(int)) );



    return this->_view;
}

void osg::QMLGeometry::updateModel()
{
    osg::QReflect_Geometry::updateModel();
//reset listview
///orphans child
//if(_clickeddrawable)delete _clickeddrawable;
//_clickeddrawable=0;//->setParentItem(0);

    int cpt=0;


    _qvertexArray.resetListViewModel();
    osg:: Array* vaa=_model->getVertexArray();
    if(vaa)
    {
        QString classname;
        classname+=QString(vaa->className());
        StateAttribObject dra(classname,QString( vaa->getName().c_str()));
        _qvertexArray.addStateAttrib(dra);

    }
    emit vertexArrayChanged(&_qvertexArray );

    _qnormalArray.resetListViewModel();
    vaa=_model->getNormalArray();
    if(vaa)
    {
        QString classname;
        classname+=QString(vaa->className());
        StateAttribObject dra(classname,QString( vaa->getName().c_str()));
        _qnormalArray.addStateAttrib(dra);

    }
    emit normalArrayChanged(&_qnormalArray );

    _qtexCoordArray.resetListViewModel();
    for(osg::Geometry::ArrayList::iterator it=_model->getTexCoordArrayList().begin(); it!=_model->getTexCoordArrayList().end(); it++)
    {
        osg:: Array* vaa=(*it);
        stringstream ss;
        ss<<cpt++;
        if(vaa)
        {

            QString classname=QString((ss.str()).c_str());
            classname+=QString(vaa->className());
            StateAttribObject dra(classname,QString( vaa->getName().c_str()));
            _qtexCoordArray.addStateAttrib(dra);
        }
    }

    emit vertexAttribArraysChanged(&_qtexCoordArray );
    _qvertexAttribArray.resetListViewModel();
    for(int i=0; i<100; i++)
    {
        osg:: Array *vaa=_model->getVertexAttribArray(i);
        vaa=_model->getVertexAttribArray(i);
        if(vaa)
        {
            stringstream ss;
            ss<<i;

            /*Instance inst=PMOCADDOBJECT(   *dr);
            QString classname=QString( inst.model->id().c_str());*/
            QString classname=QString((ss.str()).c_str());
            classname+=QString(vaa->className());
            StateAttribObject dra(classname,QString( vaa->getName().c_str()));
            _qvertexAttribArray.addStateAttrib(dra);
        }
    }
    emit vertexAttribArraysChanged(&_qvertexAttribArray );

    _qprimitiveSet.resetListViewModel();
    for(int pri=0; pri<_model->getNumPrimitiveSets(); pri++)

    {
        osg:: PrimitiveSet* pr=_model->getPrimitiveSet(pri);

        if(pr)
        {

            osg::DrawElements *drawelmt=pr->getDrawElements();

            QString classname;
            classname+=QString(pr->className());
            QString  type( pr->getName().c_str());
            if(drawelmt)
            {
#define CASE(XXX) case PrimitiveSet::XXX: type+=#XXX;break;
                switch(    drawelmt->getMode())
                {
                    CASE(POINTS)
                    CASE(LINES)
                    CASE(LINE_STRIP)CASE(LINE_LOOP)CASE(TRIANGLES)
                    CASE(TRIANGLE_STRIP)CASE(TRIANGLE_FAN)CASE(QUADS)
                    CASE(QUAD_STRIP)CASE(POLYGON)CASE(LINES_ADJACENCY)
                    CASE(LINE_STRIP_ADJACENCY)CASE(TRIANGLES_ADJACENCY)CASE(TRIANGLE_STRIP_ADJACENCY)CASE(PATCHES)

                }
            }
            StateAttribObject dra(classname,type);
            _qprimitiveSet.addStateAttrib(dra);
        }
    }

    emit primitiveSetChanged(&_qprimitiveSet );


}
///add attrib array to the first unsettted index
void osg::QMLGeometry::addVertexAttribArray(osg::QReflect_Array*par)
{

    for(int i=0; i<100; i++)
    {
        const osg:: Array *vaa=_model->getVertexAttribArray(i);
        vaa=_model->getVertexAttribArray(i);
        if(!vaa)
        {

            _model->setVertexAttribArray(i,par->_model);
            return;

        }
    }
}
///find in ordered collection and remove
void osg::QMLGeometry::pmoc_reverse_addVertexAttribArray(osg::QReflect_Array*par)
{
    for(int i=0; i<100; i++)
    {
        osg:: Array *vaa=_model->getVertexAttribArray(i);
        vaa=_model->getVertexAttribArray(i);
        if(vaa)
        {
            if(vaa==par->_model)
            {
                _model->setVertexAttribArray(i,NULL);
                return;
            }
        }
    }
}

     void osg::QMLGeometry::pmoc_reverse_addPrimitiveSet(osg::QReflect_PrimitiveSet*p){
     int i=0;
     for(;i<_model->getNumPrimitiveSets()&&p->_model!=_model->getPrimitiveSet(i);i++);

     if(i!=_model->getNumPrimitiveSets()){
     _model->removePrimitiveSet(i);
     }

     }
///add texcoord array to the first unsettted index
void osg::QMLGeometry::addTexCoordArray(osg::QReflect_Array*par)
{

    for(int i=0; i<100; i++)
    {
        const osg:: Array *vaa=_model->getTexCoordArray(i);

        if(!vaa)
        {

            _model->setTexCoordArray(i,par->_model);
            return;

        }
    }
}
///find in ordered collection and remove
void osg::QMLGeometry::pmoc_reverse_addTexCoordArray(osg::QReflect_Array*par)
{
    for(int i=0; i<100; i++)
    {
        osg:: Array *vaa=_model->getTexCoordArray(i);

        if(vaa)
        {
            if(vaa==par->_model)
            {
                _model->setTexCoordArray(i,NULL);
                return;
            }
        }
    }
}

void osg::QMLGeometry::popVertexArray(int i)
{
    if(i==0) ///there can be only one
    {
        osg:: Array* vaa=_model->getVertexArray();
        pmoc::MetaQQuickClass*cl= PMOCGETMETACLASS("osg::Array");

        if(cl&&vaa)///normal...no derived manipulable as we don't care a lot about vertices arrray human manipulation
        {

            Instance inst;
            inst.model=cl;
            inst.ptr=reinterpret_cast<void*>(dynamic_cast<osg::Array*>(vaa));

            cl->getGuiComponent((QQuickView*)_view->window(),inst,_view,"VertexAttrib");///TODO: Add ix as


        }
    }
}

void osg::QMLGeometry::popNormalArray(int i)
{
    if(i==0) ///there can be only one
    {
        osg:: Array* vaa=_model->getNormalArray();
        pmoc::MetaQQuickClass*cl= PMOCGETMETACLASS("osg::Array");

        if(cl&&vaa)///normal...no derived manipulable as we don't care a lot about vertices arrray human manipulation
        {

            Instance inst;
            inst.model=cl;
            inst.ptr=reinterpret_cast<void*>(dynamic_cast<osg::Array*>(vaa));

            cl->getGuiComponent((QQuickView*)_view->window(),inst,_view,"VertexAttrib");///TODO: Add ix as


        }

    }
}
void osg::QMLGeometry::popSelectedTexCoordArray(int id)
{

    int ix=0;
    osg:: Array* vaa=0;//*_model->getTexCoordArrayList().begin();
    for(osg::Geometry::ArrayList::iterator it=_model->getTexCoordArrayList().begin(); it!=_model->getTexCoordArrayList().end()&&ix!=id+1; it++)
    {
        if((*it))
        {
            vaa=(*it);

            ix++;
        }
    }
    if(ix==id+1)
    {

        pmoc::MetaQQuickClass*cl= PMOCGETMETACLASS("osg::Array");

        if(cl)///normal...no derived manipulable as we don't care a lot about vertices arrray human manipulation
        {

            Instance inst;
            inst.model=cl;
            inst.ptr=reinterpret_cast<void*>(dynamic_cast<osg::Array*>(vaa));
            cout<<typeid(*vaa).name()<<endl;
            cl->getGuiComponent((QQuickView*)_view->window(),inst,_view,"TexCoordArray");///TODO: Add ix as


        }
    }
}

void osg::QMLGeometry::popSelectedVertexAttribArray(int id)
{

    int ix=0;
    int vertexattribindex;
    osg::Array* vaa=0;

    for(int i=0; i<100&&ix!=id+1; i++)
    {
        vaa=_model->getVertexAttribArray(i);
        if(vaa)
        {
            vertexattribindex=i;
            ix++;
        }
    }
    pmoc::MetaQQuickClass*cl= PMOCGETMETACLASS("osg::Array");

    if(cl&&vaa)///normal...no derived manipulable as we don't care a lot about vertices arrray human manipulation
    {

        Instance inst;
        inst.model=cl;
        inst.ptr=reinterpret_cast<void*>(dynamic_cast<osg::Array*>(vaa));

        cl->getGuiComponent((QQuickView*)_view->window(),inst,_view,"VertexAttrib");///TODO: Add ix as


    }

}


void osg::QMLGeometry::popSelectedPrimitiveSet(int id)
{

    int ix=0;
    int vertexattribindex;
    osg::PrimitiveSet* pr=0;

    for(int i=0; i<_model->getNumPrimitiveSets()&&ix!=id+1; i++)
    {
        pr=_model->getPrimitiveSet(i);
        if(pr)
        {
            vertexattribindex=i;
            ix++;
        }
    }

    QQuickItem * selectedpr;
    if(pr)
        PMOCQCOMPONENT(*pr,_view,selectedpr);
}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Geometry_pmoc.cpp"
#endif

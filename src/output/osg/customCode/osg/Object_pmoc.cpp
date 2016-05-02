#include <osg/Object>
//includes
#include <customCode/osg/Object_pmoc.hpp>
#include <MetaQQuickLibraryRegistry.h>
osg::QMLDummyObject::QMLDummyObject(const pmoc::Instance *i,QObject* parent):QReflect_DummyObject(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLDummyObject::connect2View(QQuickItem*i)
{
    this->_view=QReflect_DummyObject::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
#include <customCode/osg/Object_pmoc.hpp>
osg::QMLObject::QMLObject(const pmoc::Instance *i,QObject* parent):QReflect_Object(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLObject::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Object::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here


    return this->_view;
}

  void   osg::QMLObject::updateModel(){


        emit dataVarianceChanged(dataVariance());
  }
int osg::QMLObject::dataVariance()const
{
    switch( _model->getDataVariance())
    {
    case Object::DataVariance::DYNAMIC:
        return 0;
    case Object::DataVariance::STATIC:
        return 1;
    default:
        return 2;//UNSPECIFIED
    }
}
void osg::QMLObject::dataVariance(int s)
{
    if(s!=dataVariance())
    {
        switch(s)
        {
        case 0:
            _model->setDataVariance(Object::DataVariance::DYNAMIC);
            break;
        case 1:
            _model->setDataVariance(Object::DataVariance::STATIC);
            break;
        case 2:
            _model->setDataVariance(Object::DataVariance::UNSPECIFIED);
            break;
        }
        emit dataVarianceChanged(s);
    }

}
typedef struct
{

    pmoc::MetaQQuickClass * operator()(const std::type_info& t_info)
    {
        pmoc::MetaQQuickClass  *cl=0;
        try
        {
            cl=pmoc::MetaQQuickLibraryRegistry::instance()->getMetaClassByTypeInfo(t_info);
        }
        catch (std::bad_typeid& bt)
        {
            std::cerr << "bad_typeid caught: " << bt.what() << '\n';
        }
        return cl;
    }

} MetaClassGetter;
#define NEWPMOCMETACLASS(REF) MetaClassGetter()(typeid(REF))


QString osg::QMLObject::className()const
{

    pmoc::MetaQQuickClass* cl=0;

    try
    {
        Object* n=reinterpret_cast<Object*>(this->_instance.ptr);
        // std::cout << typeid(*_model).name() << '\n';
        //cl=PMOCMETACLASS(*n);

        PMOCSAFEADDOBJECT( *n,i);
        cl=i.model;
    }
    catch (std::bad_typeid& bt)
    {
        std::cerr << "bad_typeid caught: " << bt.what() << '\n';
    }
    catch (...)
    {
        std::cerr << "caught: error" << '\n';
    }
    /*  cl=NEWPMOCMETACLASS(*_model);*/
    return QString(cl?cl->id().c_str():"type not known by pmoc" );
};


///overloaded in order not to seek osg::Object methods (considerered kind of useless)
void osg::QMLObject::generateDisambiguationPossibilities(pmoc::MetaQQuickClass*paramtype,pmoc::SetPossibilities& posses,bool inv)
{
///do nothing:) cut link with osg::QReflect_Object::generateDisambiguationPossibilities(paramtype,posses,inv);
}


#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Object_pmoc.cpp"
#endif

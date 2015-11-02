#include <osg/Transform>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Transform_pmoc.hpp>
#include <osgManipulator/RotateCylinderDragger>
#include <osgManipulator/Command>
#include <osgManipulator/TabPlaneTrackballDragger>

#include <osgManipulator/TabBoxTrackballDragger>
#include <osgManipulator/TranslateAxisDragger>
#include <osgManipulator/TranslatePlaneDragger>

using namespace pmoc;
using namespace osg;

class PlaneConstraint : public osgManipulator::Constraint
{
public:
        PlaneConstraint() {}

        virtual bool constrain(osgManipulator::TranslateInLineCommand& command) const
        {
            //OSG_NOTICE<<"PlaneConstraint TranslateInLineCommand "<<command.getTranslation()<<std::endl;
            return true;
        }
        virtual bool constrain(osgManipulator::TranslateInPlaneCommand& command) const
        {
            //command.setTranslation(osg::Vec3(0.0f,0.0f,0.0f));
           // OSG_NOTICE<<"PlaneConstraint TranslateInPlaneCommand "<<command.getTranslation()<<std::endl;
            return true;
        }
        virtual bool constrain(osgManipulator::Scale1DCommand& command) const
        {
            //command.setScale(1.0f);
           // OSG_NOTICE<<"PlaneConstraint Scale1DCommand"<<command.getScale()<<std::endl;
            return true;
        }
        virtual bool constrain(osgManipulator::Scale2DCommand& command) const
        {
            //command.setScale(osg::Vec2d(1.0,1.0));
           // OSG_NOTICE<<"PlaneConstraint Scale2DCommand "<<command.getScale()<<std::endl;
            return true;
        }
        virtual bool constrain(osgManipulator::ScaleUniformCommand& command) const
        {
           // OSG_NOTICE<<"PlaneConstraint ScaleUniformCommand"<<command.getScale()<<std::endl;
            return true;
        }
};



osgManipulator::Dragger* createDragger(const std::string& name)
{
    osgManipulator::Dragger* dragger = 0;
    if ("TabPlaneDragger" == name)
    {
        osgManipulator::TabPlaneDragger* d = new osgManipulator::TabPlaneDragger();
        d->setupDefaultGeometry();
        d->addConstraint(new PlaneConstraint());
        dragger = d;
    }
    else if ("TabPlaneTrackballDragger" == name)
    {
        osgManipulator::TabPlaneTrackballDragger* d = new osgManipulator::TabPlaneTrackballDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("TabBoxTrackballDragger" == name)
    {
        osgManipulator::TabBoxTrackballDragger* d = new osgManipulator::TabBoxTrackballDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("TrackballDragger" == name)
    {
        osgManipulator::TrackballDragger* d = new osgManipulator::TrackballDragger();
        d->setupDefaultGeometry();
        //d->setAxisLineWidth(5.0f);
        //d->setPickCylinderHeight(0.1f);
        dragger = d;
    }
    else if ("Translate1DDragger" == name)
    {
        osgManipulator::Translate1DDragger* d = new osgManipulator::Translate1DDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("Translate2DDragger" == name)
    {
        osgManipulator::Translate2DDragger* d = new osgManipulator::Translate2DDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("TranslateAxisDragger" == name)
    {
        osgManipulator::TranslateAxisDragger* d = new osgManipulator::TranslateAxisDragger();
        d->setupDefaultGeometry();
        d->setAxisLineWidth(5.0f);
        d->setPickCylinderRadius(0.05f);
        d->setConeHeight(0.2f);
        dragger = d;
    }
    else if ("TranslatePlaneDragger" == name)
    {
        osgManipulator::TranslatePlaneDragger* d = new osgManipulator::TranslatePlaneDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("Scale1DDragger" == name)
    {
        osgManipulator::Scale1DDragger* d = new osgManipulator::Scale1DDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("Scale2DDragger" == name)
    {
        osgManipulator::Scale2DDragger* d = new osgManipulator::Scale2DDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("RotateCylinderDragger" == name)
    {
        osgManipulator::RotateCylinderDragger* d = new osgManipulator::RotateCylinderDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else if ("RotateSphereDragger" == name)
    {
        osgManipulator::RotateSphereDragger* d = new osgManipulator::RotateSphereDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }
    else
    {
        osgManipulator::TabBoxDragger* d = new osgManipulator::TabBoxDragger();
        d->setupDefaultGeometry();
        dragger = d;
    }

    return dragger;
}

// The DraggerContainer node is used to fix the dragger's size on the screen
class DraggerContainer : public osg::Group
{
public:
    DraggerContainer() : _draggerSize(240.0f), _active(true) {}

    DraggerContainer( const DraggerContainer& copy, const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY )
    :   osg::Group(copy, copyop),
        _dragger(copy._dragger), _draggerSize(copy._draggerSize), _active(copy._active)
    {}

    META_Node( osgManipulator, DraggerContainer );

    void setDragger( osgManipulator::Dragger* dragger )
    {
        _dragger = dragger;
        if ( !containsNode(dragger) ) addChild( dragger );
    }

    osgManipulator::Dragger* getDragger() { return _dragger.get(); }
    const osgManipulator::Dragger* getDragger() const { return _dragger.get(); }

    void setDraggerSize( float size ) { _draggerSize = size; }
    float getDraggerSize() const { return _draggerSize; }

    void setActive( bool b ) { _active = b; }
    bool getActive() const { return _active; }

    void traverse( osg::NodeVisitor& nv )
    {
        if ( _dragger.valid() )
        {
            if ( _active && nv.getVisitorType()==osg::NodeVisitor::CULL_VISITOR )
            {
                osgUtil::CullVisitor* cv = static_cast<osgUtil::CullVisitor*>(&nv);

                float pixelSize = cv->pixelSize(_dragger->getBound().center(), 0.48f);
                if ( pixelSize!=_draggerSize )
                {
                    float pixelScale = pixelSize>0.0f ? _draggerSize/pixelSize : 1.0f;
                    osg::Vec3d scaleFactor(pixelScale, pixelScale, pixelScale);

                    osg::Vec3 trans = _dragger->getMatrix().getTrans();
                    _dragger->setMatrix( osg::Matrix::scale(scaleFactor) * osg::Matrix::translate(trans) );
                }
            }
        }
        osg::Group::traverse(nv);
    }

protected:
    osg::ref_ptr<osgManipulator::Dragger> _dragger;
    float _draggerSize;
    bool _active;
};
osg::QMLTransform::~QMLTransform(){

}
osg::QMLTransform::QMLTransform(pmoc::Instance *i,QObject* parent):QReflect_Transform(i,parent){
//custom initializations
_dragger=0;
 /* _dragger = createDragger(name);

    osg::ref_ptr<osg::Group> root = new osg::Group;
    root->addChild(_model);

    if ( false )
    {
        DraggerContainer* draggerContainer = new DraggerContainer;
        draggerContainer->setDragger( dragger );
        root->addChild(draggerContainer);
    }
    else
        root->addChild(dragger);

    float scale = scene->getBound().radius() * 1.6;
    _dragger->setMatrix(osg::Matrix::scale(scale, scale, scale) *
                       osg::Matrix::translate(scene->getBound().center()));

    if (dynamic_cast<osgManipulator::TabPlaneDragger*>(dragger))
    {
        _dragger->addTransformUpdating(_model, osgManipulator::DraggerTransformCallback::HANDLE_TRANSLATE_IN_LINE);
    }
    else
    {
        _dragger->addTransformUpdating(_model);
    }

    // we want the dragger to handle it's own events automatically
    dragger->setHandleEvents(true);

    // if we don't set an activation key or mod mask then any mouse click on
    // the dragger will activate it, however if do define either of ActivationModKeyMask or
    // and ActivationKeyEvent then you'll have to press either than mod key or the specified key to
    // be able to activate the dragger when you mouse click on it.  Please note the follow allows
    // activation if either the ctrl key or the 'a' key is pressed and held down.
    dragger->setActivationModKeyMask(osgGA::GUIEventAdapter::MODKEY_CTRL);
    dragger->setActivationKeyEvent('a');*/
}
QQuickItem* osg::QMLTransform::connect2View(QQuickItem*i){
	this->_view=QReflect_Transform::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTransform::updateModel(){
	  QReflect_Transform::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Transform_pmoc.cpp"
#endif




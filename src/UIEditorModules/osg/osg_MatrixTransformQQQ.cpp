#include "osg_MatrixTransformQQQ.hpp"
#include <list>
#include <iostream>
#include <fstream>
#include <typeinfo>
#include <memory>
#include "Export.h"
#include <MetaQQuickClass.h>
#include <osg/MatrixTransform>

#include <MetaLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
using namespace std;
using namespace pmoc;
/*
#define P2MOCMETACLASS(OBJECTREF)  pmoc::MetaLibraryRegistry::instance()->getMetaClassByTypeInfo(typeid(OBJECTREF))
#define P2MOCADDOBJECT(OBJECTREF) pmoc::Instance(P2MOCMETACLASS(OBJECTREF) ,(void*)(&OBJECTREF),false)

#define QQUICKCOMPONENT2(INSTANCE,PAPA) QQUICKMETACLASS(INSTANCE.model->id())->getGuiComponent((QQuickView*)_view->window(),INSTANCE,PAPA);

#define BACK2(CLASS,CLASSNAME,INSTANCE) ( (INSTANCE.model->id()==std::string(CLASSNAME))?(reinterpret_cast<CLASS*>(INSTANCE.ptr)):(NULL) )
*/
using namespace std;
//using namespace osg;
using namespace pmoc;

///virtual Instance &MetaClass::DownCast(Instance&i){
/*
<metasclass ptr> test,ori=reinterpret_cast< metaclass>(i.ptr);
<for c in metasclass->child>
if( test=dynamic_cast< c > (ori) ){i.ptr=(void)test;i.model=crt->id();return crt->DownCast(i);}
....
return i;
}*/
osg_MatrixTransformQQQ_QModel::~osg_MatrixTransformQQQ_QModel(){
cout<<"fok transform"<<endl;
}
#define VECTOR3DTOSOG(XXX) osg::Vec3( (XXX).x(),(XXX).y(),(XXX).z())
void osg_MatrixTransformQQQ_QModel::setrotation(QColor&color){
	if(_rotation != color){
			_rotation = color;
			 osg::Matrixf mat;

			/*if self._creationrecord:mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
			else :mat=self.mtrans.getMatrix()*/

mat.setTrans(VECTOR3DTOSOG( _position));
mat.scale(VECTOR3DTOSOG( _scale));

			osg::Quat osgq(_rotation.redF(),_rotation.greenF(),_rotation.blueF(),_rotation.alphaF());
			mat.setRotate(osgq);
			_model->setMatrix(mat);
			//if self._creationrecord:self._btbody.setWorldTransform(osgBullet.asBtTransform(mat))

			emit rotationChanged(_rotation);
}
}
QColor osg_MatrixTransformQQQ_QModel::getrotation()const{
return _rotation;
}
void osg_MatrixTransformQQQ_QModel::setposition(QVector3D&color){
if(_position != color){
_position = color;
			 osg::Matrixf mat;

			/*if self._creationrecord:mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
			else :mat=self.mtrans.getMatrix()*/

mat.setTrans(VECTOR3DTOSOG( _position));
mat.scale(VECTOR3DTOSOG( _scale));

			osg::Quat osgq(_rotation.redF(),_rotation.greenF(),_rotation.blueF(),_rotation.alphaF());
			mat.setRotate(osgq);
			_model->setMatrix(mat);
			//if self._creationrecord:self._btbody.setWorldTransform(osgBullet.asBtTransform(mat))

			emit positionChanged(_position);
}
}
QVector3D osg_MatrixTransformQQQ_QModel::getposition()const{
return _position;
}
void osg_MatrixTransformQQQ_QModel::setscale(QVector3D&color){
if(_scale != color){
_scale = color;
			 osg::Matrixf mat;

			/*if self._creationrecord:mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
			else :mat=self.mtrans.getMatrix()*/

mat.setTrans(VECTOR3DTOSOG( _position));
mat.scale(VECTOR3DTOSOG( _scale));

			osg::Quat osgq(_rotation.redF(),_rotation.greenF(),_rotation.blueF(),_rotation.alphaF());
			mat.setRotate(osgq);
			_model->setMatrix(mat);
			//if self._creationrecord:self._btbody.setWorldTransform(osgBullet.asBtTransform(mat))

			emit scaleChanged(_scale);
}
}
QVector3D osg_MatrixTransformQQQ_QModel::getscale()const{
return _scale;
}

osg_MatrixTransformQQQ_QModel::osg_MatrixTransformQQQ_QModel(const osg_MatrixTransformQQQ_QModel&o):QQModel(o){
        _model=o._model;
}
osg_MatrixTransformQQQ_QModel::osg_MatrixTransformQQQ_QModel(Instance*i,QObject* parent):QQModel(i,parent){
            _model=reinterpret_cast<osg::MatrixTransform*>(i->ptr);

             const osg::Matrixf &mat=_model->getMatrix();
		osg::Vec3 osgt=mat.getTrans();
		osg::Quat osgq=mat.getRotate();
		osg::Vec3 osgs=mat.getScale();

	_position=QVector3D(osgt.x(),osgt.y(),osgt.z());
		_rotation=QColor(osgq.x(),osgq.y(),osgq.z(),osgq.w());
		_scale=QVector3D(osgs.x(),osgs.y(),osgs.z());

    /*
    		self.mtrans=osg.MatrixTransform()#default model
		self._creationrecord=None #if its a rigidbody

		#osg.Matrix
		self._position=None
		self._rotation=None
		self._scale=None
		if self._creationrecord:
			#getMatrixFrom bullet
			mat=osgBullet.asOsgMatrix(self._btbody.getWorldTransform())
		else:
			#getMatrix()isGood

		self._position=QtGui.QVector3D(osgt.x(),osgt.y(),osgt.z())
		self._rotation=QtGui.QColor(osgq.x(),osgq.y(),osgq.z(),osgq.w())
		self._scale=QtGui.QVector3D(osgs.x(),osgs.y(),osgs.z())*/

}
QQuickItem *osg_MatrixTransformQQQ_QModel::connect2View(QQuickItem*i){
	 this->_view=i;

    ///connect this's signals/slot to its qml component	///CustomiZE here
    osg::Node * n=_model;
    MetaClass * met=PMOCMETACLASS(*n);

      /*  const osg::Matrixf &mat=model->getMatrix();
    osg::Matrixf nonconst=mat;///copy const must be managed here else object is destructed

//pmoc::MetaClass * met=PMOCMETACLASS("osg::Matrixf");

    Instance inst=PMOCADDOBJECT(nonconst);//P2MOCADDOBJECT(osg::Matrixf, &nonconst );
    osg::Matrixf * m=BACK(osg::Matrixf,"osg::Matrixf",inst);

    QQUICKMETACLASS("osg::MatrixTransform")->//createQQModel(&inst);
    getGuiComponent((QQuickView*)_view->window(),inst,_view);


    QQuickItem * child=QQUICKCOMPONENT(inst,_view); */
///connect with child

	return this->_view;
}


///////////////////////////////////////////META CLASS STRING///////////////////
const std::string osg_MatrixTransformQQQ::Imports() const{
 return string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg_MatrixTransformQQQ::PREcompoQML()const{return string("");}
const std::string osg_MatrixTransformQQQ::POSTcompoQML()const{return string("");}
QQModel* osg_MatrixTransformQQQ::createQQModel(Instance*i){ return new osg_MatrixTransformQQQ_QModel(i);}

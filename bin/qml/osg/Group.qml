import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0
import ".."

FocusScope {

    width: 320
    height: 300
    id: main //FocusScope For keyboard events
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    //  x: 400
    //    y: 50
    property var qmodel


    /*     function getChildByObjectName(obj, name)
{
    if (obj.objectName == name)
        return obj
               for (var idx in obj.children)
        {
            var f = getChildByObjectName(obj.children[idx], name)
                    if (f)
                        return f
            }
    return 0
}
property var objtest
Component.onCompleted:
{
    if (objtest)
        objtest.parent = null
                         var naming = "StateSet"
                                      gc ()
                                      pmocjs.clearComponentCache()

                                      var component = Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
                                              naming = "osg/StateSet"

                                                      var qmlnaming = naming.replace("/", "_")+"QQQ"
                                                              naming =naming.replace("/","::")
                                                                      //var cl=pmocjs.getClassByName(naming)
                                                                      // console.log(cl)
                                                                      if (component.status == Component.Ready)
        {
            objtest = component.createObject(main)
                      component=null
                                console.log("Qt.qsdqsdqsd(obj)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
                                console.log(Component.url)
                                console.log(getChildByObjectName(objtest, "osg_StateSetQQQ"))

                                var injection=getChildByObjectName(objtest,qmlnaming)
                                              naming= "Object"
                                                      var injectparent=injection.parent
                                                              component=Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
                                                                      naming = "osg/Object"

                                                                              qmlnaming = naming.replace("/", "_")+"QQQ"
                                                                                      naming =naming.replace("/","::")
                                                                                              if (component.status == Component.Ready)
            {
                var objtest2 = component.createObject()
                               component=null
                                         var injection2=getChildByObjectName(objtest2,qmlnaming)
                                                        //injection2.parent.children.clear()
                                                        injection2.parent=injectparent
                                                                injection.parent=injection2
                                                                        objtest2.parent=null
            }* /

            //obj.setProperty
            ///pmocjs.connect2view(qmod,obj)
        }
        else


*/


 Rectangle { 
	Row{
id:rowstate
property var reduced:false
property var reducedsize:80
property var reducedcontent

//private (inner used)
property var restoredsize

anchors.right:parent.right
Button{
text:'X'
y:4
anchors.right:parent.right
anchors.rightMargin:4
width:20
	height:20
            onClicked: rectangle.parent=null
	}
Button{
text:'_'
y:4
anchors.right:parent.right
anchors.rightMargin:22
width:20
	height:20
            onClicked: {
if(rowstate.reduced==false){
rowstate.reduced=true
rowstate.restoredsize=rectangle.parent.height
rectangle.parent.height=rowstate. reducedsize
//rectangle.height=80
var composite=rectangle.children[1].children[0]
 
for(var i=1;i<composite.children.length;i=i+1)
composite.children[i].visible=false
 
}else{
rowstate.reduced=false
rectangle.parent.height=rowstate.restoredsize
var composite=rectangle.children[1].children[0]
for(var i=1;i<composite.children.length;i=i+1)
composite.children[i].visible=true
 
}
}
	}

}
        border.color: "black"
        border.width: 3
        radius: 10

        color: "yellow"

        anchors.fill: parent
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing Usefull)
            if ((event.key == Qt.Key_C)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("copy")
                pmocjs.setCopyOperand(main.qmodel)
                event.accepted = true
            }
            if ((event.key == Qt.Key_X)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("cut")
                pmocjs.setCopyOperand(main.qmodel)
                subjectrequired(
                            ) //send a signal (this should be connected with parent (a osg::group or subclass)
                event.accepted = true
            }
            if ((event.key == Qt.Key_V)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("paste")
                pmocjs.realPaste()
                event.accepted = true
            }
        }

        /////////// main class hierarchy apparence///////////////////////

        ///CLASSIC PART TOO BEGIN
        MouseArea {
            objectName: 'pmocmousearea'
            anchors.fill: parent
            acceptedButtons:  Qt.RightButton
            drag.target: main
            drag.axis: Drag.XandYAxis
            onClicked: {
//if (mouse.button != Qt.RightButton)
                           pmocjs.setOperand(main.qmodel)
 
}
            /////CLASSIC PART TO END
            Column {
                Component.onDestruction: {
                    addgrp.iconSource = '' ///memory leak in qml engine: force unload icon
                }
                y: 75
                objectName: "osg_GroupQQQ"
                id: obj
                property var osg_Group

		property var childrenlist:[]
		onOsg_GroupChanged:{ 
					for(var i=0;i< osg_Group.getNumChildren();i=i+1){
						var ch= osg_Group.getChild(i); 				 
						 childrenlist[i]=ch.cast("osg::Object")
					}
					childrenlistChanged()
		}
                // //QQModel
                Button {
text:'addQuad'
                    id: addgrp
                    height: 25
                    onClicked:obj.osg_Group.addTexturedQuad();
                }
                Button {


                    height: 25
                    // width: layout.width
                    text: "add Node From File"
                    iconSource: 'qrc:/content/openbutton.png'
                    onClicked: { 
			


                        /*   console.log(JSON.stringify(  (obj.osg_Group.undoActions))) var l = String()
                        (obj.osg_Group.undoActions[0])))
              console.log(obj.osg_Group.undoActions[0])
        console.log(obj.osg_Group.undoActions)
              console.log(main.children[0])*/
                        fileDialog.visible = true
                    }
                }
                FileDialog {
                    modality: Qt.ApplicationModal
                    nameFilters: ["osg File(*.osgt *.osgb)", "All files (*)"]
                    visible: false
                    id: fileDialog
                    title: "Please choose a file"
                    onAccepted: obj.osg_Group.addChildFromFile(
                                    fileDialog.fileUrls[0])
                    onRejected: {
                        console.log("Canceled")
                        //Qt.quit()
                    }
                }

                Column {
                    y: 30

                    ScrollView {
                        height: 75
                        //anchors.fill: parent
                        ListView {
                            //	z:-100
                           ///C++ way 
				//model: obj.osg_Group.children
			   ///js way
				model:obj.childrenlist
                            delegate: Rectangle {
                                property int m_iIndex: model.index
                                height: 25
                                width: 120
                                color: "yellow"
                                //z:-100
                                MouseArea {

                                    anchors.fill: parent

                                    onDoubleClicked: {

                                        //runtime way to popup child
var newqmodel=obj.osg_Group.getChild(parent.m_iIndex);                                
var newqitem=pmocjs.genUI4QQModel(newqmodel,obj.osg_Group.getQuickItem());                                
if(newqitem)newqmodel.connect2View(newqitem);                                     
newqmodel.updateModel()
                                    
//compiletime way to popup child (signal should be connected to a C++ slot)
// obj.osg_Group.childSelected(parent.m_iIndex)

                                    }
                                    Grid {
                                        columns: 2
                                        // id: layout
                                        anchors.fill: parent
                                        Text {
                                            //text: model.name //;onTextChanged:{model.name=text}
						text:model.modelData.className
                                        }
                                        ///model.modelData.name(for unwatched list)
                                        Text {
                                            //text: ":" + model.type
					text:model.modelData.Name
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

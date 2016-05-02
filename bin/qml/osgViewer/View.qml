import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0
import osgViewer_ViewQQQ_QModel 1.0
//import QtQuick 2.1
import osgQtQuick 1.0
import "../.."

FocusScope {

    id: main //FocusScope For keyboard events
    property var qmodel //: osgViewer_View //QQModel
    signal subjectrequired //signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )
    signal drawableselected(int index)

    Rectangle {
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
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

        ///////////END CLASSIC PREAMBULE///////////////////////////////////////////////////
        ///testhack Component.onCompleted:{console.log(geode.qmodel);pmocjs.setOperand(geode.qmodel);}

        //style
        width: 200
        height: 260
        opacity: 1.0
        color: "purple"
        x: 300
        y: 50

        ///CLASSIC PART TOO BEGIN
        MouseArea {
            anchors.fill: parent
            //    hoverEnabled: true
            acceptedButtons: Qt.AllButtons
            drag.target: main
            drag.axis: Drag.XandYAxis
            onClicked: {
                console.log("selected")
                main.focus = true
                pmocjs.setOperand(main.qmodel)
            }
            onPressAndHold: uaContextMenu.popup()
            Menu {
                id: uaContextMenu

                MenuItem {
                    text: 'Copy'
                    shortcut: "Ctrl+C"
                    onTriggered: {
                        pmocjs.setCopyOperand(main.qmodel)
                    }
                }
                MenuItem {
                    text: 'Cut'
                    shortcut: "Ctrl+X"
                    onTriggered: {
                        pmocjs.setCopyOperand(main.qmodel)
                        pmocjs.setCutSubject(main.parent.qmodel)
                        subjectrequired()
                    }
                }
                MenuItem {
                    text: 'Paste'
                    shortcut: "Ctrl+V"
                    onTriggered: {
                        pmocjs.realPaste(main.qmodel)
                    }
                }
                MenuItem {
                    text: 'Remove'
                    shortcut: "Suppr"
                    onTriggered: {
                        pmocjs.setCopyOperand(main.qmodel)
                        pmocjs.setCutSubject(main.parent.qmodel)
                        pmocjs.realRemoval()
                        subjectrequired()
                    }
                }
            }
            /////CLASSIC PART TO END/////////////////////////////////////////////////////
            ColumnLayout {
                id: classmain
                objectName: "osgViewer_ViewQQQ"
                property var osgViewer_View  //QQModel

Button{width:160
    iconSource :'../../content/openbutton.png'
   onClicked :fileDialog.visible=true 
   
   FileDialog {
modality:Qt.ApplicationModal
     nameFilters: [ "osg File(*.osgt *.osgb)", "All files (*)" ]
    visible:false 
    id: fileDialog
    title: "Please choose a file"
    onAccepted: {
    pmocjs.osg_Node_added.connect( classmain.osgViewer_View.childAdded)
        console.log("You chose: " + fileDialog.fileUrls)
        classmain.osgViewer_View.addChildFromFile(fileDialog.fileUrls[0])
    }
    onRejected: {
        console.log("Canceled")
        Qt.quit()
    }
    Component.onCompleted: visible = false
}
    }
                /*onCompleted called befor property setting
                Component.onCompleted:
    pmocjs.osg_Node_added.connect( classmain.osgViewer_View.childAdded)*/



                onParentChanged:   if(parent!=null){  
console.log("osgGroup connect");
     pmocjs.osg_Node_removed.connect(classmain.osgViewer_View.childAdded);
    pmocjs.osg_Node_added.connect( classmain.osgViewer_View.childAdded);
}else{
console.log("osgGroup disconnect");
   pmocjs.osg_Node_removed.disconnect(classmain.osgViewer_View.childAdded);
    pmocjs.osg_Node_added.disconnect( classmain.osgViewer_View.childAdded);
console.log("osgGroup disconnected");
}
Component.onDestruction:{
console.log("osgGroup destruxtion");
   pmocjs.osg_Node_removed.disconnect(classmain.osgViewer_View.childAdded)
    pmocjs.osg_Node_added.disconnect( classmain.osgViewer_View.childAdded)
}
                
//onChildrenChanged:  pmocjs.osg_Node_added.connect(   classmain.osgViewer_View.childAdded)
width: childrenRect.width  
        height: childrenRect.height
 //  width: parent.width-10
            //    height: 240
           //     opacity: 1.0
           //     color: "orange"
                //	x:300
                y: 50
	//x:5
             //   anchors.left: parent.left-5
            //    anchors.right: parent.right+5

                ListView {

                   // anchors.left: parent.left
               // anchors.right: parent.right
                
                   // y: 100
                   width: 400
                    height: 200
                    model: classmain.osgViewer_View.children
                    delegate: Rectangle {
                        property int m_iIndex: model.index
                        id: caseDrawable
                        height: 25
// anchors.fill: parent 
 anchors.leftMargin:5
                        width: parent.width-10
                        color: "red"
                        MouseArea {

                            anchors.fill: parent

                            onDoubleClicked: {
                                console.log(model)

                                console.log(parent.m_iIndex)
                                classmain.osgViewer_View.childSelected(
                                            parent.m_iIndex)

                                //soft way to maintain child preview

                                
                            }
                            Grid {
                                columns: 2
                                width: 200
                                id: layout
                                anchors.fill: parent

                                Label {
                                    text: model.type
                                }
                                TextEdit {

                                    text: model.name
                                    onTextChanged: {
                                        model.name = text
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

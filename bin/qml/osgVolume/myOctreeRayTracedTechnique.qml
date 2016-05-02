import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0
import osgMG_myOctreeRayTracedTechniqueQQQ_QModel 1.0
//import QtQuick 2.1
import osgQtQuick 1.0
import "../.."

FocusScope {

    id: main //FocusScope For keyboard events
    property var qmodel
    signal  
    subjectrequired
    signal //signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )
    drawableselected(int index)

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
        width: childrenRect.width
        height: childrenRect.height
        opacity: 1.0
        color: "purple"
        //x: 300
        y: 50

        ///CLASSIC PART TOO BEGIN
        MouseArea {

            width: childrenRect.width
            height: childrenRect.height
            // anchors.fill: parent
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

            // height: childrenRect.height
            Column {
                width: childrenRect.width
                height: childrenRect.height
                id: classmain
                objectName: "osgMG_myOctreeRayTracedTechniqueQQQ"
                property var osgMG_myOctreeRayTracedTechnique
                onParentChanged: if (parent != null) {
                                     console.log("osgGroup connect")
                                     pmocjs.osg_Node_removed.connect(
                                                 classmain.osgMG_myOctreeRayTracedTechnique.childAdded)
                                     pmocjs.osg_Node_added.connect(
                                                 classmain.osgMG_myOctreeRayTracedTechnique.childAdded)
                                 } else {
                                     console.log("osgGroup disconnect")
                                     pmocjs.osg_Node_removed.disconnect(
                                                 classmain.osgMG_myOctreeRayTracedTechnique.childAdded)
                                     pmocjs.osg_Node_added.disconnect(
                                                 classmain.osgMG_myOctreeRayTracedTechnique.childAdded)
                                     console.log("osgGroup disconnected")
                                 }

Rectangle{ //    width:dalist.width
     width: childrenRect.width
                height: childrenRect.height
             
                    Button {
 height: 25
width:layout.width
              //          anchors.fill: parent
                        text: "add Node From File"
                        iconSource: '../../content/openbutton.png'
                        onClicked: {
                            fileDialog.visible = true
                        }

                        FileDialog {
                            modality: Qt.ApplicationModal
                            nameFilters: ["osg File(*.osgt *.osgb)", "All files (*)"]
                            visible: false
                            id: fileDialog
                            title: "Please choose a file"
                            onAccepted: {
                                pmocjs.osg_Node_added.connect(
                                            classmain.osgMG_myOctreeRayTracedTechnique.childAdded)
                                console.log("You chose: " + fileDialog.fileUrls)
                                classmain.osgMG_myOctreeRayTracedTechnique.addChildFromFile(
                                            fileDialog.fileUrls[0])
                            }
                            onRejected: {
                                console.log("Canceled")
                                Qt.quit()
                            }
                            //Component.onCompleted: visible = false
                        }
                    }

                    /*onCompleted called befor property setting
                                                                    Component.onCompleted:
                                                                                                                                                        pmocjs.osg_Node_added.connect( classmain.osgMG_myOctreeRayTracedTechnique.childAdded)*/

                    //onChildrenChanged:  pmocjs.osg_Node_added.connect(   classmain.osgMG_myOctreeRayTracedTechnique.childAdded)
                    //width: childrenRect.width
                    //  height: childrenRect.height
                    //  width: parent.width-10
                    //    height: 240
                    //     opacity: 1.0
                    //     color: "orange"
                    //	x:300
                    //y: 50
                    //x:5
                    //   anchors.left: parent.left-5
                    //    anchors.right: parent.right+5

                    //width: childrenRect.width
                    //height: childrenRect.height
}
                Rectangle{
             id:hackColumnLayout //HACK used to adapt height with list size
             height: 0
                width:10
                color:"transparent"
            }


                    ListView {
                        y:25
x:10
id:dalist
                       // anchors.fill:parent
                        width: childrenRect.width
                       height: childrenRect.height
                        // anchors.left: parent.left
                        // anchors.right: parent.right

                       //HACK used to changed layout height
                       onHeightChanged:hackColumnLayout.height= height+10;
                       onWidthChanged:hackColumnLayout.width=  width;
                        // y: 100
                        // width: 400
                        //height: 200
                        model: classmain.osgMG_myOctreeRayTracedTechnique.children


                        delegate: Rectangle {
                            property int m_iIndex: model.index
                            id: caseDrawable
                            height: 25
                            // anchors.fill: parent
                            anchors.leftMargin: 5
                            width: layout.width // parent.width-10
                            color: "red"
                            MouseArea {
                             width: childrenRect.width
                                       height: childrenRect.height
                             //  anchors.fill: parent
                                onDoubleClicked: {
                                    console.log(model)

                                    console.log(parent.m_iIndex)
                                    classmain.osgMG_myOctreeRayTracedTechnique.childSelected(
                                                parent.m_iIndex)

                                    //soft way to maintain child preview
                                }
                                Grid {    width: childrenRect.width
                                       height: childrenRect.height
                           
                                    columns: 2
                                    //  width: 200
                                    id: layout

                                    //anchors.fill: parent
                                    Label {
                                        text: model.type
                                    }
                                    Label {

                                        text: model.name
                                        
                                    }
                                }
                            }

                        }}
                    }
                }
            }}




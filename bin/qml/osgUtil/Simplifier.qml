import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import osg_NodeQQQ_QModel 1.0
//import QtQuick 2.1
import osgQtQuick 1.0
import "../.."


FocusScope {

    PropertyAnimation on x { to: 400 }
    PropertyAnimation on y { to: 50 }
  //  x: 400
//    y: 50
    id: main //FocusScope For keyboard events
    property var qmodel //: osg_Geode //QQModel
    signal subjectrequired //signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )
    signal drawableselected(int index)

    ColumnLayout{
Rectangle {
// anchors.fill:parent
        id: rectangle
        //focus: true
        Keys.onPressed: {

            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
            if ((event.key == Qt.Key_C)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("copy")
                globalEditor.setCopyOperand(main.qmodel)
                event.accepted = true
            }
            if ((event.key == Qt.Key_X)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("cut")
                globalEditor.setCopyOperand(main.qmodel)
                subjectrequired(
                            ) //send a signal (this should be connected with parent (a osg::group or subclass)
                event.accepted = true
            }
            if ((event.key == Qt.Key_V)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("paste")
                globalEditor.realPaste()
                event.accepted = true
            }
        }

        /////////// main class hierarchy apparence///////////////////////
       //style
    // width: childrenRect.width
        //implicit_height:obj.implicit_height
    //    height: childrenRect.height
        opacity: 1.0
        color: "green"

        ///CLASSIC PART TOO BEGIN
        MouseArea {width: childrenRect.width
        //implicit_height:obj.implicit_height
        height: childrenRect.height
            //anchors.fill: parent
            //    hoverEnabled: true
            acceptedButtons: Qt.AllButtons
            drag.target: main
            drag.axis: Drag.XandYAxis
            onClicked: {
                console.log("selected")
                main.focus = true
                globalEditor.setOperand(main.qmodel)
            }
            onPressAndHold: uaContextMenu.popup()
            Menu {
                id: uaContextMenu

                MenuItem {
                    text: 'Copy'
                    shortcut: "Ctrl+C"
                    onTriggered: {
                        globalEditor.setCopyOperand(main.qmodel)
                    }
                }
                MenuItem {
                    text: 'Cut'
                    shortcut: "Ctrl+X"
                    onTriggered: {
                        globalEditor.setCopyOperand(main.qmodel)
                        globalEditor.setCutSubject(main.parent.qmodel)
                        subjectrequired()
                    }
                }
                MenuItem {
                    text: 'Paste'
                    shortcut: "Ctrl+V"
                    onTriggered: {
                        globalEditor.realPaste(main.qmodel)
                    }
                }
                MenuItem {
                    text: 'Remove'
                    shortcut: "Suppr"
                    onTriggered: {
                        globalEditor.setCopyOperand(main.qmodel)
                        globalEditor.setCutSubject(main.parent.qmodel)
                        globalEditor.realRemoval()
                        subjectrequired()
                    }
                }
            }

            /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
            Rectangle {
    border.color: "black"
     border.width: 3
     radius: 10

width:400// childrenRect.width
             height: 200//childrenRect.height
//                anchors.fill: parent
                color: "yellow"
//ColumnLayout{
                id: obj
                objectName: "osgUtil_SimplifierQQQ"
                property var osgUtil_Simplifier
                //QQModel
                /*onCompleted called befor property setting..have to emit a fake parentChanged signal*/
  y:50
                //height: 250
                //implicit_height: 250
                // width: 200

                GroupBox {
                    title: "Simplifier Property"

                    Grid {
                      //  height: 250
                        columns: 2
                    //    width: 200
                        id: layout
                     //   anchors.fill: parent
Label {
                            verticalAlignment: Text.AlignVCenter
                            font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "Sample ratio:" //obj.osg_Node.type
                        }
                        TextField {
                            verticalAlignment: Text.AlignVCenter

                            text: obj.osgUtil_Simplifier.sampleRatio.toFixed(3)
                            onAccepted: {
                               obj.osgUtil_Simplifier.sampleRatio = parseFloat(text)
                            }
                        }
Label {
                            verticalAlignment: Text.AlignVCenter
                            font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "Maximum Error:" //obj.osg_Node.type
                        }
                        TextField {
                            verticalAlignment: Text.AlignVCenter

                            text: obj.osgUtil_Simplifier.maximumError.toFixed(3)
                            onAccepted: {
                               obj.osgUtil_Simplifier.maximumError = parseFloat(text)
                            }
                        }

 Label {
                            verticalAlignment: Text.AlignVCenter
                            font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "Maximum Length:" //obj.osg_Node.type
                        }
                        TextField {
                            verticalAlignment: Text.AlignVCenter

                            text: obj.osgUtil_Simplifier.maximumLength.toFixed(3)
                            onAccepted: {
                               obj.osgUtil_Simplifier.maximumLength = parseFloat(text)
                            }
                        }
  Label {
                            verticalAlignment: Text.AlignVCenter
                            font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "Do TriStrip:" //obj.osg_Node.type
                        }
                        CheckBox {
                         //   verticalAlignment: Text.AlignVCenter

                            checked: obj.osgUtil_Simplifier.doTriStrip

                        }
  Label {
                            verticalAlignment: Text.AlignVCenter
                            font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "Do smoothing:" //obj.osg_Node.type
                        }
                        CheckBox {
                         //   verticalAlignment: Text.AlignVCenter

                            checked: obj.osgUtil_Simplifier.smoothing

                        }


   }                 }
                }
            }
        }
    }
}

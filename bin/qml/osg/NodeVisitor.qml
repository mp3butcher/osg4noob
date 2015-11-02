import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

//import QtQuick 2.1
import osgQtQuick 1.0
import "../.."

FocusScope {

    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    //  x: 400
    //    y: 50
    id: main //FocusScope For keyboard events
    property var qmodel
    ColumnLayout {
        Rectangle {
            border.color: "black"
            border.width: 3
            radius: 10
            width: 256
            height: 300
            color: "yellow"
            // anchors.fill:parent
            id: rectangle
            //focus: true
            Keys.onPressed: {
                console.log("Geode")
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

            ///CLASSIC PART TOO BEGIN
            MouseArea {
                objectName: 'pmocmousearea'
                //  width: childrenRect.width
                // height: childrenRect.height
                anchors.fill: parent
                //    hoverEnabled: true
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

                    if (mouse.button == Qt.RightButton)
                        uaContextMenu.popup()
                    else {
                        console.log("selected")
                        main.focus = true
                        globalEditor.setOperand(main.qmodel)
                    }
                }
                // onPressAndHold: uaContextMenu.popup()
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
                            globalEditor.popQQModelUi(
                                        globalEditor.getCopyOperand(),
                                        main.qmodel.getQuickItem())
                            main.qmodel.modelChanged()
                        }
                    }
                    MenuItem {
                        text: 'Remove'
                        shortcut: "Suppr"
                        onTriggered: {

                            globalEditor.setCopyOperand(main.qmodel)
                            globalEditor.setCutSubject(main.parent.qmodel)
                            globalEditor.isCutAction = false
                            globalEditor.realRemoval()
                            subjectrequired()
                            //main.parent.qmodel.modelChanged()
                            main.parent = null
                        }
                    }
                }

                /////CLASSIC PART TO END/////////////////////////////////////////////////////
                Column {
                    y: 50
                    id: obj
                    objectName: "osg_NodeVisitorQQQ"
                    property var osg_NodeVisitor
                    //QQModel
                    /*onCompleted called befor property setting..have to emit a fake parentChanged signal*/
                    Button {
                        width: 160
                        iconSource: '../../content/openbutton.png'
                        onClicked: {

                            obj.osg_NodeVisitor.applyVisitor()

                            //globalEditor.osg_Node_removed.connect(classmain.osg_Group.childrenChanged);
                            //globalEditor.osg_Node_added.connect(classmain.osg_Group.childAdded);
                            //  globalEditor.osg_NodeCallback_removed.connect( obj.osg_Node.callbacksChanged)
                            //                    globalEditor.osg_NodeCallback_added.connect(                                obj.osg_Node.callbacksChanged)
                        }
                        //height: 250
                        //implicit_height: 250
                        // width: 200
                        GroupBox {
                            title: "NodeVisitor Property"

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
                                    text: "Name:" //obj.osg_Node.type
                                }
                                TextField {
                                    verticalAlignment: Text.AlignVCenter

                                    text: obj.osg_Node.name
                                    onTextChanged: {
                                        obj.osg_Node.name = text
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

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
    signal //: osg_Geode //QQModel
    subjectrequired
    signal //signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )
    drawableselected(int index)

    ColumnLayout {
        Rectangle {
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
            color: "green"

            ///CLASSIC PART TOO BEGIN
            MouseArea {
objectName:'pmocmousearea'
                width: childrenRect.width
                height: childrenRect.height
                //anchors.fill: parent
                //    hoverEnabled: true
                acceptedButtons:Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

		   if (mouse.button == Qt.RightButton)
			    uaContextMenu.popup()
		   else{
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
globalEditor.popQQModelUi(globalEditor.getCopyOperand(),
main.qmodel.getQuickItem()
)
 main.qmodel.modelChanged()
                        }
                    }
                    MenuItem {
                        text: 'Remove'
                        shortcut: "Suppr"
                        onTriggered: {

                            globalEditor.setCopyOperand(main.qmodel)
                            globalEditor.setCutSubject(main.parent.qmodel)
globalEditor.isCutAction=false
                            globalEditor.realRemoval()
                            subjectrequired()
 //main.parent.qmodel.modelChanged()
			    main.parent=null;
                        }
                    }
                }


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
                Rectangle {
                    border.color: "black"
                    border.width: 3
                    radius: 10
                    width: childrenRect.width
                    height: childrenRect.height
                    color: "yellow"

                    Column {  width: childrenRect.width
                    height: childrenRect.height
                        id: obj
                        objectName: "osg_ObjectQQQ"
                       property var osg_Object
                        //QQModel
                        /*onCompleted called befor property setting..have to emit a fake parentChanged signal*/
                        onParentChanged: {

                            globalEditor.osg_ObjectCallback_removed.connect(
                                        obj.osg_Object.callbacksChanged)
                            //                    globalEditor.osg_ObjectCallback_added.connect(                                obj.osg_Object.callbacksChanged)
                        }
                        //height: 250
                        //implicit_height: 250
                        // width: 200
/*
Button{
text:'fisfok' 
 anchors.fill:parent
menu:maintoolbar.m_Add_a_Child
onClicked: globalEditor.menu.parent=obj;
}*/

                        GroupBox {//x:10

                            title:  obj.osg_Object.className+" Properties"

                            Grid {

                    width: childrenRect.width
                    height: childrenRect.height
                                //  height: 250
                                columns: 2
                                //    width: 200
                                id: layout

                                //   anchors.fill: parent
                                Label {
                                    verticalAlignment: Text.AlignVCenter
                                  //  font.pointSize: 14
                                    //textFormat: Text.PlainText
                                    text: "Name:" //obj.osg_Object.type
                                }
                                TextField {
                                    verticalAlignment: Text.AlignVCenter

                                    text: obj.osg_Object.Name
                                    onTextChanged: {
                                        obj.osg_Object.Name = text
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

import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0
import QtQuick 2.1

import ".."


FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 350
    height: 500
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }

    Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10

        color: "orange"
        anchors.fill: parent
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing Usefull)
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

        ///CLASSIC PART TOO BEGIN
        MouseArea {
            objectName: 'pmocmousearea'
            anchors.fill: parent
            acceptedButtons: Qt.AllButtons
            drag.target: main
            drag.axis: Drag.XandYAxis
            onClicked: if (mouse.button != Qt.RightButton)
                           globalEditor.setOperand(main.qmodel)

                
                /////CLASSIC PART TO END



                    Column {
                        onOsg_StateAttributeChanged:  { console.log('onOsg_StateAttributeChanged!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!')

                        //    modevalue.currentIndex=obj.osg_StateAttribute.modeValue
                            overrideMode.currentIndex=obj.osg_StateAttribute.overrideMode
                        }
                        id:obj
                        objectName: "osg_StateAttributeQQQ"
                        property var osg_StateAttribute



                        y:75 //size of Object UI


                            Grid {

                                //anchors.fill: parent
                                columns: 2
                                spacing: 1
                                id: grid

                           /*     Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "mode"
                                    }
                                }
                                ComboBox {  id:modevalue
                                    width: 200;
                                    model: ["OFF", "ON" ]
                                    currentIndex:   obj.osg_StateAttribute.modeValue
                                onCurrentIndexChanged: {
                                   obj.osg_StateAttribute.modeValue=currentIndex;
                                }
                                }*/

                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "overrideMode"
                                    }
                                }
                                ComboBox { id:overrideMode
                                    width: 200;
                                    model: ["", "OVERRIDE","PROTECTED" ]
                                    currentIndex:   obj.osg_StateAttribute.overrideMode
                                onCurrentIndexChanged: {
                                   obj.osg_StateAttribute.overrideMode=currentIndex;
                                }

                                }







                            }
                        }
                    }
        }
    }



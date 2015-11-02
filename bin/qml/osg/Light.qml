import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import "../.."
import ".."

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 600
    height: 210
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

    //  x: 400
    //    y: 50


    Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10

        color: "purple"
        anchors.fill: parent
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

        ///CLASSIC PART TOO BEGIN
        MouseArea {
            objectName: 'pmocmousearea'
            anchors.fill: parent
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


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
                ColumnLayout {
                    y: 75
                    id: classmain
                    objectName: "osg_LightQQQ"
                    property var osg_Light

                    //QQModel

                    //  width: parent.width-10
                    //    height: 240
                    //     opacity: 1.0
                    //     color: "orange"
                    //	x:300
                    //  y: 50
                    //x:5
                    Grid {
                        columns: 2
                        Label {
                            text: "lightNum"

                        }
                        TextField{

                            text:classmain.osg_Light.LightNum
                            onAccepted:classmain.osg_Light.LightNum=parseInt(text)
                        }

                        Label {
                            text: "position"
                        }
                        Row {
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.position.x.toFixed(3)
                                onAccepted: classmain.osg_Light.position.x = parseFloat(
                                                text)
                            }
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.position.y.toFixed(3)
                                onAccepted: classmain.osg_Light.position.y = parseFloat(
                                                text)
                            }
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.position.z.toFixed(3)
                                onAccepted: classmain.osg_Light.position.z = parseFloat(
                                                text)
                            }
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.position.w.toFixed(3)
                                onAccepted: classmain.osg_Light.position.w = parseFloat(
                                                text)
                            }
                        }
                        Label {
                            text: "direction"
                        }
                        Row {
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.direction.x.toFixed(3)
                                onAccepted: classmain.osg_Light.direction.x = parseFloat(
                                                text)
                            }
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.direction.y.toFixed(3)
                                onAccepted: classmain.osg_Light.direction.y = parseFloat(
                                                text)
                            }
                            TextField {
                                width: lengestlabel.width
                                text: classmain.osg_Light.direction.z.toFixed(3)
                                onAccepted: classmain.osg_Light.direction.z = parseFloat(
                                                text)
                            }
                        }

                        Label {
                            text: "constantattenuation"
                        }
                        TextField {
                            text: classmain.osg_Light.ConstantAttenuation
                            onAccepted: classmain.osg_Light.ConstantAttenuation = parseFloat(
                                            text)
                        }

                        Label {
                            text: "linearAttenuation"
                        }
                        TextField {
                            text: classmain.osg_Light.LinearAttenuation
                            onAccepted: classmain.osg_Light.LinearAttenuation = parseFloat(
                                            text)
                        }

                        Label {
                            id: lengestlabel
                            text: "quadraticattenuation"
                        }
                        TextField {
                            text: classmain.osg_Light.QuadraticAttenuation
                            onAccepted: classmain.osg_Light.QuadraticAttenuation = parseFloat(
                                            text)
                        }
                    }
                }
            }
        }
    }


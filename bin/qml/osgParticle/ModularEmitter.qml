import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick 2.1
import ".."

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 380
    height: 450
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

        color: "yellow"
        anchors.fill: parent
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
                    pmocjs.setOperand(main.qmodel)
                }
            }

            /////////////////////////////////END CLASSIC//////////////////////////////////////////////
            Column {
                y:25
                id: obj
                objectName: "osgParticle_ModularEmitterQQQ"
                property var osgParticle_ModularEmitter
                GroupBox {
                    anchors.fill: parent
                    title: "ModularEmitter Properties"
                    Rectangle {
                        color: "transparent"
                        width: 150
                        height: 60
                        ColumnLayout {


                                Label {
                                    text: "NumParticlesToCreateMovementCompensationRatio"
                                }
                                TextField {
                                    text:  main.qmodel. NumParticlesToCreateMovementCompensationRatio
                                    onAccepted:  main.qmodel. NumParticlesToCreateMovementCompensationRatio=parseInt(text)
                                }


                                Label {
                                    text: "BoundingBox"
                                }

                            RowLayout {
                                TextField {
                                    text: main.qmodel.minBound.x.toFixed(1)
                                }
                                TextField {
                                    text: main.qmodel.minBound.y.toFixed(1)
                                }
                                TextField {
                                    text: main.qmodel.minBound.z.toFixed(1)
                                }
                            }
                            RowLayout {
                                TextField {
                                    text: main.qmodel.maxBound.y.toFixed(1)
                                }
                                TextField {
                                    text: main.qmodel.maxBound.y.toFixed(1)
                                }
                                TextField {
                                    text: main.qmodel.maxBound.z.toFixed(1)
                                }
                            }
                        }
                    }
                }
            }

        }
    }
}

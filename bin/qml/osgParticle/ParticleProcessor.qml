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
    height: 250
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

            /////////////////////////////////END CLASSIC//////////////////////////////////////////////
            Column {
                y:55
                id: obj
                objectName: "osgParticle_ParticleProcessorQQQ"
                property var osgParticle_ParticleProcessor
                GroupBox {
                    anchors.fill: parent
                    title: "ParticleProcessor Properties"
                    Rectangle {
                        color: "transparent"
                        width: 150
                        height: 60
                        ColumnLayout {


                            RowLayout{Label {text:"LifeTime "}
                            TextField {text: obj.osgParticle_ParticleProcessor.LifeTime.toFixed(3);onAccepted:obj.osgParticle_ParticleProcessor.LifeTime=parseFloat(text);}
                            }
                            RowLayout{Label {text:"CurrentTime "}
                            TextField {text: obj.osgParticle_ParticleProcessor.CurrentTime.toFixed(3);onAccepted:obj.osgParticle_ParticleProcessor.CurrentTime=parseFloat(text);}
                            }
                            RowLayout{Label {text:"ResetTime "}
                            TextField {text: obj.osgParticle_ParticleProcessor.ResetTime.toFixed(3);onAccepted:obj.osgParticle_ParticleProcessor.ResetTime=parseFloat(text);}
                            }
                            RowLayout{Label {text:"StartTime "}
                            TextField {text: obj.osgParticle_ParticleProcessor.StartTime.toFixed(3);onAccepted:obj.osgParticle_ParticleProcessor.StartTime=parseFloat(text);}
                            }
                            RowLayout{Label {text:"EndLess "}
                                CheckBox {
                                    checked: obj.osgParticle_ParticleProcessor.Endless
                                    onClicked: {
                                        obj.osgParticle_ParticleProcessor.Endless = checked
                                    }
                                }
                            }
                            RowLayout{Label {text:"Enable "}
                                CheckBox {
                                    checked: obj.osgParticle_ParticleProcessor.Enable
                                    onClicked: {
                                        obj.osgParticle_ParticleProcessor.Enable = checked
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

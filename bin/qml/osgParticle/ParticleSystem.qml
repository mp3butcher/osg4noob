import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 350
    height: 300
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

            /////////////////////////////////END CLASSIC//////////////////////////////////////////////
            Column {
                id: obj
                objectName: "osgParticle_ParticleSystemQQQ"
                property var osgParticle_ParticleSystem
                //QQModel
                y: 70
                x: 8

                Grid {
                    columns: 2
                    spacing: 1
                    id: grid
                    anchors.fill: parent
                    rows: 6

                    Label {
                        width: 217
                        text: "useVertexArray"
                    }

                    CheckBox {
                        checked: obj.osgParticle_ParticleSystem.UseVertexArray
                        onClicked: {
                            obj.osgParticle_ParticleSystem.UseVertexArray = checked
                        }
                    }

                    Label {
                        width: 217
                        text: "useShaders"
                    }

                    CheckBox {
                        checked: obj.osgParticle_ParticleSystem.UseShaders
                        onClicked: {
                            obj.osgParticle_ParticleSystem.UseShaders = checked
                        }
                    }
                    Label {
                        width: 217
                        text: "DoublePass Rendering"
                    }

                    CheckBox {
                        checked: obj.osgParticle_ParticleSystem.DoublePassRendering
                        onClicked: {
                            obj.osgParticle_ParticleSystem.DoublePassRendering = checked
                        }
                    }
                    Label {
                        width: 217
                        text: "FreezeOnCull"
                    }

                    CheckBox {
                        checked: obj.osgParticle_ParticleSystem.FreezeOnCull
                        onClicked: {
                            obj.osgParticle_ParticleSystem.FreezeOnCull = checked
                        }
                    }
                    Label {
                        width: 217
                        text: "Frozen"
                    }

                    CheckBox {
                        checked: obj.osgParticle_ParticleSystem.Frozen
                        onClicked: {
                            obj.osgParticle_ParticleSystem.Frozen = checked
                        }
                    }
                }
            }
        }
    }
}

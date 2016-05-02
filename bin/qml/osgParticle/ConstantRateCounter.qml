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
            onClicked: if (mouse.button != Qt.RightButton)
                           pmocjs.setOperand(main.qmodel)
            /////////////////////////////////END CLASSIC//////////////////////////////////////////////
            ColumnLayout {
y:75
                id: obj
                objectName: "osgParticle_ConstantRateCounterQQQ"
                property var osgParticle_ConstantRateCounter

                //style
                width: 320
                height: 276
                opacity: 1.0

                Row {
                    Label {
                        text: "minimumNumberOfParticlesToCreate"
                    }
                    TextField {
                        text: obj.osgParticle_ConstantRateCounter.MinimumNumberOfParticlesToCreate
                        onAccepted: obj.osgParticle_ConstantRateCounter.MinimumNumberOfParticlesToCreate = parseInt(
                                        text)
                    }
                }
                Row {
                    Label {
                        text: "numberOfParticlesPerSecondToCreate"
                    }
                    TextField {
                        text: obj.osgParticle_ConstantRateCounter.NumberOfParticlesPerSecondToCreate
                        onAccepted: obj.osgParticle_ConstantRateCounter.NumberOfParticlesPerSecondToCreate = parseFloat(
                                        text)
                    }
                }
            }
        }
    }
}

import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0

import ".."

FocusScope {
    id: main //FocusScope For keyboard events

    property var qmodel
    signal shaderSelect(int index)

    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }
    width: 420
    height: 300
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }

    //  x: 400
    //    y: 50
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


            ////////////////////////////////////////////CLASSIC PART TO END/////////////////////////////////////////////////////////////////////

            //   PropertyAnimation on x { to: -400 }

            //height:0
            Column {
                id: classmain
                objectName: "osg_LODQQQ"
                property var osg_LOD

                //: osg_LOD //QQModel
                y: 95


                    // PropertyAnimation on y { to: 500 }

                    //color: "turquoise"
                    //	x:300


                        Grid {
                            columns: 4
                            Label {
                                text: "Child Index"
                            }
                            Label {
                                text: "minRange"
                            }
                            Label {
                                text: "MaxRange"
                            }
                            Button {
                                // iconSource: '../../content/openbutton.png'
                                text: "SetRange"
                                onClicked: {

                                    classmain.osg_LOD.setRange(
                                                parseInt(scaleField.text),
                                                parseFloat(minField.text),
                                                parseFloat(maxField.text))
                                }
                            }
                            TextField {
                                id: scaleField
                                onAccepted: text = parseInt(text)
                            }

                            TextField {
                                id: minField
                                onAccepted: text = parseFloat(text)
                            }
                            TextField {
                                id: maxField
                                onAccepted: text = parseFloat(text)
                            }
                        }
ScrollView{
    y: 100
    width: 200
    height: 50
                        ListView {

                            anchors.fill: parent

                            //    model: main.qmodel.drawables
                            model: classmain.osg_LOD.rangelist
                            delegate: Rectangle {
                                property int m_iIndex: model.index
                                id: caseDrawable
                                height: 25
                                width: 250
                                color: "green"
                                MouseArea {

                                    anchors.fill: parent

                                    onDoubleClicked: {
                                        console.log(model)

                                        console.log(parent.m_iIndex)
                                        classmain.osg_LOD.DrawableSelected(
                                                    parent.m_iIndex)
                                    }
                                    Grid {
                                        columns: 3
                                        width: 200
                                        id: layout
                                        anchors.fill: parent

                                        Label {
                                            text: model.index
                                        }
                                        TextField {

                                            text: model.minRange
                                            onAccepted: {


                                                //		model.minRange=parseFloat(Text)
                                            }
                                        }
                                        TextField {

                                            text: model.maxRange
                                            onAccepted: {


                                                //model.maxRange=parseFloat(Text)
                                            }
                                        }

                            }}
                        }
                    }
                }
            }
        }
    }
}

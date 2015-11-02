import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0
import QtQuick 2.1

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }

    //  x: 400
    //    y: 50
    ColumnLayout {

        Rectangle {
            border.color: "black"
            border.width: 3
            radius: 10

            color: "#e8c720"
            width: 400
            height: 150

            ///CLASSIC PART TOO BEGIN
            MouseArea {
                objectName: 'pmocmousearea'
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
                /////CLASSIC PART TO END

                /////////////////////////////////END CLASSIC//////////////////////////////////////////////
                Column {
                    y: 50
                    id: obj
                    objectName: "osg_TexGenQQQ"
                    property var osg_TexGen


                    //style
                    GroupBox {
                        title: "TexGen Properties"

                        Grid {
                            Button {

                                onClicked: obj.osg_TexGen.removefromStateSet()
                            }

                            ComboBox {
                                objectName: "TexGenComboBox2Hack"
                                id: typeshader
                                model: ["OBJECT_LINEAR", "EYE_LINEAR", "SPHERE_MAP", "NORMAL_MAP", "REFLECTION_MAP"]
                                currentIndex: obj.osg_TexGen.mode
                                width: 200
                                onCurrentIndexChanged: {
                                    console.log(currentIndex)
                                    obj.osg_TexGen.mode = currentIndex
                                }
                            }

                            //anchors.fill: parent
                            columns: 2
                            spacing: 1
                            id: grid

                            Rectangle {
                                color: "transparent"
                                height: 20
                                width: 160
                                Label {
                                    text: "ImageFile"
                                }
                            }
                            Rectangle {
                                color: "transparent"
                                height: 20
                                width: 160
                                TextField {
                                    text: mainQModelTexGen.m_parentModel.mode
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

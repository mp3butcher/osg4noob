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

                
                /////CLASSIC PART TO END



                    Column {  ColorPicker {
                            id: colorpicker0
                            visible: false
                            z: 1000
                            x: 200
                            onCurrentColorChanged: obj.osg_Texture3D.bordercolor = currentColor
                            onPreviousColorChanged: colorpicker0.visible = !colorpicker0.visible
                        }
                        id:obj
                        objectName: "osg_TextureQQQ"
                        property var osg_Texture
                        y:75 //size of Object UI
                        GroupBox {
                            title: "Texture Properties"

                            Grid {

                                //anchors.fill: parent
                                columns: 2
                                spacing: 1
                                id: grid
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "Mandatory texture unit"
                                    }
                                }
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    TextField {
                                        id: tu
                                        text: obj.osg_Texture.textureUnit
                                        onTextChanged: obj.osg_Texture.textureUnit = parseInt(
                                                           text)
                                    }
                                }
                               /* Button {
                                    width: 160
                                    iconSource: '../../content/openbutton.png'
                                    onClicked: obj.osg_Texture.addToStateSet(
                                                   main.parent.qmodel)
                                }
                                Button {
                                    width: 160
                                    iconSource: '../../content/openbutton.png'
                                    onClicked: {
                                        console.log(main.parent.qmodel)
                                       obj.osg_Texture.removeFromStateSet(
                                                    main.parent.qmodel);
parent=null;

                                    }
                                }*/
                               }
                        }
                    }
                }
            }

}

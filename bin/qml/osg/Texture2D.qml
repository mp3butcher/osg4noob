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
                            onCurrentColorChanged: obj.osg_Texture2D.bordercolor = currentColor
                            onPreviousColorChanged: colorpicker0.visible = !colorpicker0.visible
                        }
                        id:obj
                        objectName: "osg_Texture2DQQQ"
                        property var osg_Texture2D
                        y:75 //size of Object UI
                        GroupBox {
                            title: "Texture2D Properties"

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
                                        text: obj.osg_Texture2D.textureUnit
                                        onTextChanged: obj.osg_Texture2D.textureUnit = parseInt(
                                                           text)
                                    }
                                }
                                Button {
                                    width: 160
                                    iconSource: '../../content/openbutton.png'
                                    onClicked: obj.osg_Texture2D.addToStateSet(
                                                   main.parent.qmodel)
                                }
                                Button {
                                    width: 160
                                    iconSource: '../../content/openbutton.png'
                                    onClicked: {
                                        console.log(main.parent.qmodel)
                                       obj.osg_Texture2D.removeFromStateSet(
                                                    main.parent.qmodel);
parent=null;

                                    }
                                }
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
                                    Label {
                                        text: obj.osg_Texture2D.filename
                                    }
                                }

                                Button {
                                    width: 160
                                    iconSource: '../../content/openbutton.png'
                                    onClicked: fileDialog.visible = true

                                    FileDialog {
                                        nameFilters: ["classic image files (*.png *.jpg)", "All files (*)"]
                                        visible: false
                                        modality: Qt.ApplicationModal
                                        id: fileDialog
                                        title: "Please choose a file"
                                        onAccepted: {
                                            console.log("You chose: " + fileDialog.fileUrls)
                                            obj.osg_Texture2D.filename = fileDialog.fileUrls[0]
                                           //obj.osg_Texture2D.filename = fileDialog.fileUrls[0]
                                        }
                                        onRejected: {
                                            console.log("Canceled")
                                            Qt.quit()
                                        }
                                        Component.onCompleted: visible = false
                                    }
                                }

                                Image {
                                    cache: false
                                    y: 20
                                    width: 160
                                    height: 160
                                    source:obj.osg_Texture2D.qtimage
                                }

                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "WrapMode S"
                                    }
                                }
                                /*ComboBox {  width: 200; model: ["REPEAT", "CLAMP", "CLAMP_TO_EDGE", "CLAMP_TO_BORDER" ]
                                onCurrentIndexChanged: {console.log(model.find(main.qmodel.wrap_s));main.qmodel.wrap_s=model[currentIndex];}}*/
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    TextField {
                                        text: obj.osg_Texture2D.wrap_t
                                        onTextChanged: obj.osg_Texture2D.wrap_t = text
                                    }
                                }

                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "WrapMode T"
                                    }
                                }
                                /*ComboBox { width: 200; model: ["REPEAT", "CLAMP", "CLAMP_TO_EDGE", "CLAMP_TO_BORDER" ]
                                onCurrentIndexChanged: main.qmodel.wrap_t=model[currentIndex];}*/
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    TextField {
                                        text: obj.osg_Texture2D.wrap_s
                                        onTextChanged: obj.osg_Texture2D.wrap_s = text
                                    }
                                }
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "Border Color"
                                    }
                                }
                                Rectangle {
                                    color: obj.osg_Texture2D.bordercolor
                                    height: 20
                                    width: 160
                                    MouseArea {
                                        anchors.fill: parent
                                        hoverEnabled: true
                                        acceptedButtons: Qt.AllButtons
                                        drag.target: main
                                        drag.axis: Drag.XandYAxis
                                        onClicked: colorpicker0.visible = !colorpicker0.visible
                                    }
                                }
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "width"
                                    }
                                }
                               TextField{
                                   text:obj.osg_Texture2D.TextureWidth
                                   onAccepted:obj.osg_Texture2D.TextureWidth=parseInt(text)
                                }
                               Rectangle {
                                   color: "transparent"
                                   height: 20
                                   width: 160
                                   Label {
                                       text: "height"
                                   }
                               }
                              TextField{
                                  text:obj.osg_Texture2D.TextureHeight
                                  onAccepted:obj.osg_Texture2D.TextureHeight=parseInt(text)
                               }

                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "Border width"
                                    }
                                }
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    TextField {
                                        text:obj.osg_Texture2D.borderwidth
                                        onTextChanged: obj.osg_Texture2D.borderwidth = parseInt(
                                                           text)
                                    }
                                }
                            }
                        }
                    }
                }
            }

}

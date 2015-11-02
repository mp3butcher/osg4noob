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
                        onOsg_ImageChanged:  internalTextureFormat.currentIndex=obj.osg_Image.internalTextureFormat
                        ColorPicker {
                            id: colorpicker0
                            visible: false
                            z: 1000
                            x: 200
                            onCurrentColorChanged: obj.osg_Image.bordercolor = currentColor
                            onPreviousColorChanged: colorpicker0.visible = !colorpicker0.visible
                        }
                        id:obj
                        objectName: "osg_ImageQQQ"
                        property var osg_Image
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
                                    TextField {
                                        text: obj.osg_Image.Filename
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
                                    obj.osg_Image.Filename= fileDialog.fileUrls[0]

                                        }
                                        onRejected: {
                                            console.log("Canceled")
                                            Qt.quit()
                                        }
                                        Component.onCompleted: visible = false
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
                                /*ComboBox {  width: 200; model: ["REPEAT", "CLAMP", "CLAMP_TO_EDGE", "CLAMP_TO_BORDER" ]
                                onCurrentIndexChanged: {console.log(model.find(main.qmodel.wrap_s));main.qmodel.wrap_s=model[currentIndex];}}*/
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    TextField {
                                        text: obj.osg_Image.s()
                                     //   onTextChanged: obj.osg_Image.s = text
                                    }
                                }

                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    Label {
                                        text: "height"
                                    }
                                }
                                /*ComboBox { width: 200; model: ["REPEAT", "CLAMP", "CLAMP_TO_EDGE", "CLAMP_TO_BORDER" ]
                                onCurrentIndexChanged: main.qmodel.wrap_t=model[currentIndex];}*/
                                Rectangle {
                                    color: "transparent"
                                    height: 20
                                    width: 160
                                    TextField {
                                        text: obj.osg_Image.t()
                                        //onTextChanged: obj.osg_Image.t = text
                                    }
                                }
                                Button {

                                    height: 20
                                    width: 160

                                        text: "allocate"

                                    onClicked:obj.osg_Image.allocateImage(parseInt(width.text),parseInt(height.text),parseInt(depth.text),pixelformat.text ,type.text)
                                }
                                Row{
                                    TextField{
                                        id:width
                                        text:"0"
                                    }
                                    TextField{
                                        id:height
                                        text:"0"
                                    }
                                    TextField{
                                        id:depth
                                        text:"0"
                                    }
                                    TextField{
                                        id:pixelformat
                                        text:"GL_RGBA"
                                    }
                                    TextField{
                                        id:type
                                        text:"GL_UNSIGNED_INT"
                                    }


                            }

                              Rectangle {
                                  color: "transparent"
                                  height: 20
                                  width: 160
                                  Label {
                                      text: "internalTextureFormat"
                                  }
                              }

                             ComboBox {

                                 id: internalTextureFormat
                                 model: ["GL_RGBA8", "GL_RGBA16", "GL_RGBA16F","GL_RGBA32F"]
                                 currentIndex:obj.osg_Image.internalTextureFormat
                                 width: 200
                                 onCurrentIndexChanged: {
                                     console.log(currentIndex)
                           obj.osg_Image.internalTextureFormat = currentIndex

                                 }
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
                                        text:obj.osg_Image.borderwidth
                                        onTextChanged: obj.osg_Image.borderwidth = parseInt(
                                                           text)
                                    }
                                }
                            }
                        }
                    }
                }
            }

}

import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick 2.1
import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import ".."

import QtQuick 2.1
import QtQuick.Dialogs 1.0

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 320
    height: 200
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
                /////////////////////////////////END CLASSIC//////////////////////////////////////////////
                Column {
y:75
                    id: obj
                    objectName: "osg_ShaderQQQ"
                    property var osg_Shader

                    //QQModel
                    GroupBox {
                        title: "Shader Type"


                        //onParentChanged:{console.log("ARGARAFAEGERGFAEFAFAAE");typeshader.currentIndex= obj.osg_Shader.shaderType}
                        Column {
                            anchors.fill: parent
                            ComboBox {
                                objectName: "shadertypeComboBox2Hack"
                                id: typeshader
                                model: ["UNDEFINED", "VERTEX_SHADER", "GEOMETRY_SHADER", "FRAGMENT_SHADER", "COMPUTE_SHADER", "TESSELATION_EVALUATION_SHADER", "TESSELATION_CONTROL_SHADER"] //obj.osg_Shader.typeList //
                                currentIndex: obj.osg_Shader.getShaderType()
                                width: 200
                                //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                                onCurrentIndexChanged: {
                                    console.log(currentIndex)
                                    obj.osg_Shader.shaderType = currentIndex
                                    if (currentIndex != 0)
                                        typeshader.enabled = false
                                    //  currentIndex: obj. osg_Shader.shaderType
                                }
                            }

                            Button {

                                //    anchors.fill: parent
                                text: "set Source From File"
                                iconSource: '../../content/openbutton.png'
                                onClicked: {
                                    fileDialog.visible = true
                                }

                                FileDialog {
                                    modality: Qt.ApplicationModal
                                    nameFilters: ["osg File(*.osgt *.osgb)", "All files (*)"]
                                    visible: false
                                    id: fileDialog
                                    title: "Please choose a file"
                                    onAccepted: {
                                        console.log("You chose: " + fileDialog.fileUrls)
                                        obj.osg_Shader.setSourceFromFile(
                                                    fileDialog.fileUrls[0])
                                    }
                                    onRejected: {
                                        console.log("Canceled")
                                        Qt.quit()
                                    }
                                    //Component.onCompleted: visible = false
                                }
                            }
                        }
                    }
                }
            }
        }
}



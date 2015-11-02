import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."

FocusScope {
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }

    width: 320
    height: 200
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    //  x: 400
    //    y: 50
    id: main //FocusScope For keyboard events
    property var qmodel


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

            y: 75
            id: obj
            objectName: "osg_ScriptQQQ"
            property var osg_Script

            GroupBox {
                title: "Script node callback Properties"
                Grid {

                    //     width: childrenRect.width
                    //          height: childrenRect.height
                    columns: 2
                    id: layout
                    anchors.fill: parent

                    Label {
                        width: 51
                        height: 25
                        verticalAlignment: Text.AlignVCenter
                        //  font.pointSize: 14
                        //textFormat: Text.PlainText
                        text: "Name:"
                        //obj.osg_Object.type
                    }
                    TextField {
                        x: 0
                        width: 178
                        height: 25

                        verticalAlignment: Text.AlignVCenter

                        text: obj.osg_Script.Language

                        onTextChanged: {
                            if (obj.osg_Script.Language != text) {
                                obj.osg_Script.Language = text
                            }
                        }
                    }
                    Button {
                        text: "update Script"
                        onClicked: {
                            main.parent.qmodel.updateModel()
                            main.qmodel = null
                            main.parent=null
                        }
                    }
                }
            }
        }
    }
}
}

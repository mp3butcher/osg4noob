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
    height: 300
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

    signal drawableselected(int index)

    Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10
        color: "#e8c720"

        anchors.fill: parent
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
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
            onClicked: {

                if (mouse.button == Qt.RightButton)
                    uaContextMenu.popup()
                else {
                    console.log("selected")
                    main.focus = true
                    pmocjs.setOperand(main.qmodel)
                }
            }

            Column {
                y:75
                objectName: "osg_UniformQQQ"
                id: obj
                property var osg_Uniform // //QQModel

                GroupBox {

               

                    // onParentChanged:{if(parent!=null)connectEditor(); else disconnectEditor();}
                   

                    /*   if(main.parent!= 'null') {  console.log(" parent changed");connectEditor() }
                    else{console.log("no parent");   pmocjs.osg_StateAttribute_added.disconnect(
                                                    obj.osg_Uniform.StateSetUpdate);}
                                                       Component.onDestruction:  {console.log("destruction");   pmocjs.osg_StateAttribute_added.disconnect(
                                                                                       obj.osg_Uniform.StateSetUpdate);}
                                                                                              */
                    //y:200
                    height: 150
                    width: 120
                    title: "StateSet"
                    Grid {
                        columns: 2
                        width: 200
                        height: 50

                        anchors.fill: parent
                        /* Label { font.pointSize: 14
                                text: "rendering Hint"
                                        }*/
                        ComboBox {
                            objectName: "typeBox2Hack"
                            model: obj.osg_Uniform.uniformtypelist
                            currentIndex: obj.osg_Uniform.type
                            width: 200

                            onCurrentIndexChanged: {
                                console.log("Rendereing type" + currentIndex)
                                obj.osg_Uniform.type = currentIndex
                                //currentIndex=obj.osg_Uniform.renderingHint;
                            }
                        }
                    }

                    Column {
                        y: 30
                        Label {
                               text: obj.osg_Uniform.NumElements
                           }
                        Label {
                            text: 'name'
                        }
                        TextField {
                            text: obj.osg_Uniform.name
                            onAccepted: obj.osg_Uniform.name = text
                        }
                        Label {
                            text: 'value'
                        }
                        TextField {
                            text: obj.osg_Uniform.stringValue
                            onAccepted: obj.osg_Uniform.stringValue = text
                        }
                    }
                }
            }
        }
    }
}

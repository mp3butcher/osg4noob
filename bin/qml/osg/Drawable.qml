import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

//import QtQuick 2.1



FocusScope {

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



    ColumnLayout {
        Rectangle {
            // anchors.fill:parent
            id: rectangle
            x: 0
            width: 256
            height: 256
            //focus: true
             

            /////////// main class hierarchy apparence///////////////////////
            //style
            // width: childrenRect.width
            //implicit_height:obj.implicit_height
            //    height: childrenRect.height
            opacity: 1.0
            color: "green"

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

                ////////////////////////////////CLASSIC PART TO END/////////////////////////////////////////////////
                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////


                    Column {
                        y:75
                    id: classmain
                    objectName: "osg_DrawableQQQ"
                    property var osg_Drawable




                    
                    GroupBox {
                        width: 250
                        height: 71
                        title: "DrawableProperties"

                        Grid {
                            //classmain.osg_Drawable
                            //anchors.fill: parent
                            columns: 2
                            spacing: 1
                            id: grid
                            anchors.fill: parent
                            rows: 2


                            Rectangle {
                                color: "transparent"
                                height: 20
                                width: 217
                                Label {
                                    text: "useVBO"
                                }
                            }

                            CheckBox {
                                checked: classmain.osg_Drawable.UseVertexBufferObjects
                                onClicked: {
                                    classmain.osg_Drawable.UseVertexBufferObjects = checked
                                }
                            }

                            Rectangle {
                                color: "transparent"

                                width: 217
                                height: 20
                                Label {
                                    text: "useDisplayList"
                                }
                            }
                            CheckBox {

                                checked: classmain.osg_Drawable.UseDisplayList

                                onClicked: {
                                    classmain.osg_Drawable.UseDisplayList = checked
                                    console.log(classmain.osg_Drawable)
                                    globalEditor.selected(
                                                classmain.osg_Drawable)
                                }
                            }

                        /*      Rectangle {
                                color: "transparent"
                                width: 300
                                height: 60
                              ColumnLayout {
                                    Label {
                                        text: "BoundingBox"
                                    }
                                    RowLayout {
                                        TextField {
                                            text: classmain.osg_Drawable.minBound.x.toFixed(
                                                      1)
                                        }
                                        TextField {
                                            text: classmain.osg_Drawable.minBound.y.toFixed(
                                                      1)
                                        }
                                        TextField {
                                            text: classmain.osg_Drawable.minBound.z.toFixed(
                                                      1)
                                        }
                                    }
                                    RowLayout {
                                        TextField {
                                            text: classmain.osg_Drawable.maxBound.y.toFixed(
                                                      1)
                                        }
                                        TextField {
                                            text: classmain.osg_Drawable.maxBound.y.toFixed(
                                                      1)
                                        }
                                        TextField {
                                            text: classmain.osg_Drawable.maxBound.z.toFixed(
                                                      1)
                                        }
                                    }
                                }
                            }*/
                            }
                        }
                    }
                }
                //Component.onCompleted:main.selected();
            }
        }
    }


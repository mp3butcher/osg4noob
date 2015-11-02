import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0

import ".."

FocusScope {
    width: 320
    height: 200
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
}
    
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    id: main
    property var qmodel

    //this
    ColumnLayout {
        anchors.fill: parent
        Rectangle {
            // main rectangle
            id: rectangle
            border.color: "black"
            border.width: 3
            radius: 10
            color: "yellow"
            anchors.fill: parent
            /////CLASSIC PART BEGIN/////////////////////////////////////////////////////
            MouseArea {
                objectName: 'pmocmousearea' ///PMOC MANDATORY MouseArea

                anchors.fill: parent
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: if (mouse.button == Qt.LeftButton)
                               globalEditor.setOperand(main.qmodel)

                /////CLASSIC PART END/////////////////////////////////////////////////////
                Column {

                    id: obj
                    objectName: "osg_BoxQQQ" ///to link with Pmoc Class Box
                    property var osg_Box
                    y: 75 ///osg_Node Bottom

                    ScrollView{
                        height:400
                    ListView{
                        model:obj.osg_Box.doActions;
                        delegate: Rectangle {
                            property int m_iIndex: model.index

                            height: 25
                            anchors.leftMargin: 5
                            width: 200
                            color: "green"
                            MouseArea {
                                anchors.fill: parent

                                Grid {

                                    columns: 2

                                    Label {
                                        text: model.modelData
                                    }

                                }
                            }
                        }
                    }
                    }
                    Button {
                        y: 50
                        height: 25
                        width: layout.width
                        text: "add Node From File"
                        iconSource: '../../content/openbutton.png'
                        onClicked: {
                            console.log( JSON.stringify((obj.osg_Box.undoActions)));
                           var l= String();
                            console.log( JSON.stringify((obj.osg_Box.undoActions[0])));
                            console.log(obj.osg_Box.undoActions[0])

                            console.log(obj.osg_Box.undoActions)
                            console.log(main.children[0])
                            fileDialog.visible = true
                        }

                        FileDialog {
                            modality: Qt.ApplicationModal
                            nameFilters: ["osg File(*.osgt *.osgb)", "All files (*)"]
                            visible: false
                            id: fileDialog
                            title: "Please choose a file"
                            onAccepted: obj.osg_Box.addChildFromFile(fileDialog.fileUrls[0]);
                            onRejected: {
                                console.log("Canceled")
                                Qt.quit()
                            }
                        }
                    }

                    ScrollView {
                        height: 75

                        ListView {
                            y: 25
                            x: 10
                            id: dalist

                            model: obj.osg_Box.children

                            delegate: Rectangle {
                                property int m_iIndex: model.index
                                id: caseDrawable
                                height: 25
                                // anchors.fill: parent
                                anchors.leftMargin: 5
                                width: 200
                                color: "green"
                                MouseArea {
                                    anchors.fill: parent
                                    onDoubleClicked: obj.osg_Box.childSelected(
                                                         parent.m_iIndex)
                                    Grid {

                                        columns: 2

                                        Label {
                                            text: model.type
                                        }
                                        Label {
                                            text: model.name
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

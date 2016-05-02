import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

Rectangle {
//property var editorWindow;


    id: objRoot
    objectName: "objRoot"
y:50
x:10
    width: 400
    height: 600
    color: "green"
   opacity:0.7
Button{
text:'ReparseTree'
anchors.right:parent.right
onClicked:editorWindow.reparseTreeView()
}

  MouseArea {

            anchors.fill: parent
            hoverEnabled: true
            acceptedButtons:  Qt.RightButton
            drag.target: objRoot
            drag.axis: Drag.XandYAxis


    
    Component {
        id: objRecursiveDelegate
        Column {
            id: objRecursiveColumn
            objectName: "objRecursiveColumn"
            property int m_iIndex: model.index
            property var m_parentModel: model.parentModel
            clip: true
            MouseArea {
function printmodel(){

 for (var i = 0; i < objRepeater.count; i++) {
console.log( objRepeater[i].name);
}
return 0;
}
                id: objMouseArea
                objectName: "objMouseArea"
                width: objRow.implicitWidth
                height: objRow.implicitHeight
                onDoubleClicked: {
				
					if(true){//model.type==qsTr("osg::Geode")){console.log( model.type);
					screen.nodeselected(model.name)
					

					}
                    for (var i = 0; i < parent.children.length; i++) {
					 
                        if (parent.children[i].objectName !== "objMouseArea") {
                            parent.children[i].visible = !parent.children[i].visible
                        }
                    }
                }
                drag.target: objDragRect
                onReleased: {
                    if (objDragRect.Drag.target) {
                        objDragRect.Drag.drop()
                    }
                }
                Row {
                    id: objRow
                    Item {
                        id: objIndentation
                        height: 20
                        width: model.level * 20
                    }
                    Rectangle {
                        id: objDisplayRowRect
                        height: objNodeName.implicitHeight + 5
                        width: objCollapsedStateIndicator.width + objNodeName.implicitWidth + objNodeType.implicitWidth + 5
                        border.color: "green"
                        border.width: 2
                        color: "black" //"#31312c"
                        DropArea {
                            keys: [model.parentModel]
                            anchors.fill: parent
                            onEntered: objValidDropIndicator.visible = true
                            onExited: objValidDropIndicator.visible = false
                            onDropped: {
                                objValidDropIndicator.visible = false
                                if (drag.source.m_objTopParent.m_iIndex !== model.index) {
console.log("moving"+(  drag.source.m_objTopParent.m_iIndex)+" to "+(model.index) )

                           //         objRecursiveColumn.m_parentmodel
objModel.move(
                                                drag.source.m_objTopParent.m_iIndex,
                                                model.index, 1)
                                }
                            }
                            Rectangle {
                                id: objValidDropIndicator
                                anchors.fill: parent
                                visible: false
                                onVisibleChanged: {
                                    visible ? objAnim.start() : objAnim.stop()
                                }
                                SequentialAnimation on color {
                                    id: objAnim
                                    loops: Animation.Infinite
                                    running: false
                                    ColorAnimation {
                                        from: "#31312c"
                                        to: "green"
                                        duration: 400
                                    }
                                    ColorAnimation {
                                        from: "green"
                                        to: "#31312c"
                                        duration: 400
                                    }
                                }
                            }
                        }
                        Rectangle {
                            id: objDragRect
                            property var m_objTopParent: objRecursiveColumn
                            Drag.active: objMouseArea.drag.active
                            Drag.keys: [model.parentModel]
                            border.color: "pink"
                            border.width: 2
                            opacity: .85
                            states: State {
                                when: objMouseArea.drag.active
                                AnchorChanges {
                                    target: objDragRect
                                    anchors {
                                        horizontalCenter: undefined
                                        verticalCenter: undefined
                                    }
                                }
                                ParentChange {
                                    target: objDragRect
                                    parent: objRoot
                                }
                            }
                            anchors {
                                horizontalCenter: parent.horizontalCenter
                                verticalCenter: parent.verticalCenter
                            }
                            height: objDisplayRowRect.height
                            width: objDisplayRowRect.width
                            visible: Drag.active
                            color: "green"
                            Text {
                                anchors.fill: parent
                                horizontalAlignment: Text.AlignHCenter
                                verticalAlignment: Text.AlignVCenter
                                text: model.name
                                font {
                                    bold: true
                                    pixelSize: 18
                                }
                                color: "transparent"
                            }
                        }
                        Text {
                            id: objCollapsedStateIndicator
                            anchors {
                                left: parent.left
                                top: parent.top
                                bottom: parent.bottom
                            }
                            width: 20
                            horizontalAlignment: Text.AlignHCenter
                            verticalAlignment: Text.AlignVCenter
                            text: objRepeater.count
                                  > 0 ? objRepeater.visible ? qsTr("-") : qsTr(
                                                                  "+") : qsTr(
                                                                  "")
                            font {
                                bold: true
                                pixelSize: 18
                            }
                            color: "yellow"
                        }
 
                        Text {
                            id: objNodeName
                            anchors {
                                left: objCollapsedStateIndicator.right
                                top: parent.top
                                bottom: parent.bottom
                            }
                            text: model.name
                            color: objRepeater.count > 0 ?"#8ae234" : "#fd2a2a" //green or red
                            font {
                                bold: model.selected
                                pixelSize: 14
                            }
                            verticalAlignment: Text.AlignVCenter
                        }
          Text {
                            id: objNodeType
                            anchors {
                                left: objNodeName.right
                                top: parent.top
                                bottom: parent.bottom
                            }
                            text: ':'+model.type
                            color: objRepeater.count > 0 ? "#8ae234" : "#fd2a2a" //green or red
                            font {
                                bold: model.selected
                                pixelSize: 14
                            }
                            verticalAlignment: Text.AlignVCenter
                        }
 
                    }
                }
            }
            Rectangle {
                id: objSeparator
                anchors {
                    left: parent.left
                    right: parent.right
                }
                height: 1
                color: "transparent"
            }
            Repeater {
                id: objRepeater
                objectName: "objRepeater"
                model: subNode
                delegate: objRecursiveDelegate
            }
        }
    }
    ColumnLayout {
        objectName: "objColLayout"
        anchors.fill: parent
        ScrollView {
            Layout.fillHeight: true
            Layout.fillWidth: true
            ListView {
                objectName: "objListView"
                model: objModel
                delegate: objRecursiveDelegate
                interactive: false
            }
        }
        
    }}
}

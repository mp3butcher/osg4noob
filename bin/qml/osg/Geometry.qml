import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick 2.1


//import osg_GeodeQQQ_QModel 1.0 //avoid the use of signal but do shit with polymorphic father
import ".."

FocusScope {
    width: 320
    height: 500
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
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
            color: "cyan"
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

                ////////////////////////////////CLASSIC PART TO END/////////////////////////////////////////////////
                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////

                //QQModel
                Column {
                    y: 20
                    objectName: "osg_GeometryQQQ"
                    property var osg_Geometry
                    id: obj

                    Button {
                        // anchors.top:parent.top+100
                        x: 10
                        width: 200
                        text: 'generate tangentspace'

                        onClicked: obj.osg_Geometry.generateTangentSpace(0, 6)
                    }
                    Label{
                        text:"vertexarray"
                    }
                                        ScrollView {
                                            height: 25
                                            x: 10
                                            ListView {
                                                //                        y:25

                                                // anchors.fill:parent

                                                // anchors.left: parent.left
                                                // anchors.right: parent.right

                                                // y: 100
                                                // width: 400
                                                //height: 200
                                                model: obj.osg_Geometry.vertexArray

                                                delegate: Rectangle {
                                                    property int m_iIndex: model.index
                                                    id: caseDrawable
                                                    height: 25
                                                    width:120
                                                    color: "turquoise"
                                                    MouseArea {
                                                        anchors.fill: parent
                                                        onDoubleClicked: {

                                                            obj.osg_Geometry.popVertexArray(
                                                                        parent.m_iIndex)

                                                        }
                                                        Grid {
                                                            columns: 2
                                                            //  width: 200
                                                            id: layout

                                                            Label {
                                                                text: model.type
                                                            }
                                                            TextEdit {

                                                                text: model.name

                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        Label{
                                            text:"normalarray"
                                        }
                                                            ScrollView {
                                                                height: 25
                                                                x: 10
                                                                ListView {
                                                                    //                        y:25

                                                                    // anchors.fill:parent

                                                                    // anchors.left: parent.left
                                                                    // anchors.right: parent.right

                                                                    // y: 100
                                                                    // width: 400
                                                                    //height: 200
                                                                    model: obj.osg_Geometry.normalArray

                                                                    delegate: Rectangle {
                                                                        property int m_iIndex: model.index

                                                                        height: 25
                                                                        width:120
                                                                        color: "turquoise"
                                                                        MouseArea {
                                                                            anchors.fill: parent
                                                                            onDoubleClicked: {

                                                                                obj.osg_Geometry.popNormalArray(
                                                                                            parent.m_iIndex)

                                                                            }
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
                                                            Label{
                                                                text:"texcoordarrays"
                                                            }
                                                                                ScrollView {
                                                                                    height: 75
                                                                                    x: 10
                                                                                    ListView {
                                                                                        //                        y:25

                                                                                        // anchors.fill:parent

                                                                                        // anchors.left: parent.left
                                                                                        // anchors.right: parent.right

                                                                                        // y: 100
                                                                                        // width: 400
                                                                                        //height: 200
                                                                                        model: obj.osg_Geometry.texCoordArrays

                                                                                        delegate: Rectangle {
                                                                                            property int m_iIndex: model.index

                                                                                            height: 25
                                                                                            width:120
                                                                                            color: "turquoise"
                                                                                            MouseArea {
                                                                                                anchors.fill: parent
                                                                                                onDoubleClicked: {

                                                                                                    obj.osg_Geometry.popSelectedTexCoordArray(
                                                                                                                parent.m_iIndex)

                                                                                                }
                                                                                                Grid {
                                                                                                    columns: 2
                                                                                                    //  width: 200


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
                                                                                Label{
                                                                                    text:"vertexattribarray"
                                                                                }
                                                                                                    ScrollView {
                                                                                                        height: 75
                                                                                                        x: 10
                                                                                                        ListView {
                                                                                                            //                        y:25

                                                                                                            // anchors.fill:parent

                                                                                                            // anchors.left: parent.left
                                                                                                            // anchors.right: parent.right

                                                                                                            // y: 100
                                                                                                            // width: 400
                                                                                                            //height: 200
                                                                                                            model: obj.osg_Geometry.vertexAttribArrays

                                                                                                            delegate: Rectangle {
                                                                                                                property int m_iIndex: model.index

                                                                                                                height: 25
                                                                                                                width:120
                                                                                                                color: "turquoise"
                                                                                                                MouseArea {
                                                                                                                    anchors.fill: parent
                                                                                                                    onDoubleClicked: {

                                                                                                                        obj.osg_Geometry.popSelectedVertexAttribArray(
                                                                                                                                    parent.m_iIndex)

                                                                                                                    }
                                                                                                                    Grid {
                                                                                                                        columns: 2
                                                                                                                        //  width: 200
                                                                                                                        id: layout

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
                                                                                                    Label{
                                                                                                        text:"primitiveSets"
                                                                                                    }
                                                                                                                        ScrollView {
                                                                                                                            height: 75
                                                                                                                            x: 10
                                                                                                                            ListView {
                                                                                                                                //                        y:25

                                                                                                                                // anchors.fill:parent

                                                                                                                                // anchors.left: parent.left
                                                                                                                                // anchors.right: parent.right

                                                                                                                                // y: 100
                                                                                                                                // width: 400
                                                                                                                                //height: 200
                                                                                                                                model: obj.osg_Geometry.primitiveSet

                                                                                                                                delegate: Rectangle {
                                                                                                                                    property int m_iIndex: model.index

                                                                                                                                    height: 25
                                                                                                                                    width:120
                                                                                                                                    color: "turquoise"
                                                                                                                                    MouseArea {
                                                                                                                                        anchors.fill: parent
                                                                                                                                        onDoubleClicked: {

                                                                                                                                            obj.osg_Geometry.popSelectedPrimitiveSet(
                                                                                                                                                        parent.m_iIndex)

                                                                                                                                        }
                                                                                                                                        Grid {
                                                                                                                                            columns: 2
                                                                                                                                            //  width: 200
                                                                                                                                            id: layout

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

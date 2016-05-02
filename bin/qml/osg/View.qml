import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

//import QtQuick 2.1
import ".."

FocusScope {
    width: 316
    height: 100
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
            color: "orange"
            anchors.fill: parent
            /////CLASSIC PART BEGIN/////////////////////////////////////////////////////
            MouseArea {
                objectName: 'pmocmousearea' ///PMOC MANDATORY MouseArea

                anchors.fill: parent
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: if (mouse.button == Qt.LeftButton)
                               pmocjs.setOperand(main.qmodel)


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////

                    Column {
                        onosg_ViewChanged:   {///HACK (ComboBox index not updated automatiquelly)
                          variance.currentIndex=obj.osg_View.dataVariance
                       }

                   //height: childrenRect.height
                        id: obj
                        objectName: "osg_ViewQQQ"
                        property var osg_View

                        anchors.leftMargin: 5
                        //height: 30
                        anchors.fill: parent


                        GroupBox {
                            id: groupBox1
                            x: 12
                            anchors.fill: parent
                            //x:10

                            title:  obj.osg_View.className+" Properties"

                            Grid {

                 //     width: childrenRect.width
                  //          height: childrenRect.height
                                columns: 2
                                rows:2
                                id: layout
                                anchors.fill: parent

                                Label {
                                    width: 96
                                    height: 25
                                    verticalAlignment: Text.AlignVCenter
                                    //  font.pointSize: 14
                                    //textFormat: Text.PlainText
                                    text: "Name:"
                                    //obj.osg_View.type
                                }
                                TextField {
                                    x: 0
                                    width: 178
                                    height: 25

                                    verticalAlignment: Text.AlignVCenter

                                    text: obj.osg_View.Name


                                    onTextChanged: {
                                        if( obj.osg_View.Name != text )
                                        obj.osg_View.Name = text
                                    }
                                }
                                Label {
                                    width: 96
                                    height: 25
                                    verticalAlignment: Text.AlignVCenter

                                    text: "DataVariance:"

                                }
                                ComboBox {

                                    id: variance
                                    model: ["DYNAMIC", "STATIC", "UNSPECIFIED"]
                                    currentIndex: obj.osg_View.dataVariance
                                    width: 200
                                    //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                                    onCurrentIndexChanged: {
                                        console.log(currentIndex)
                                       obj.osg_View.dataVariance = currentIndex

                                    }
                                }
                            }
                        }
                    }
                }
            }

    }

}

import QtQuick 2.0
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
                               pmocjs.setOperand(main.qmodel)


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////

                    Item {
                      

                   //height: childrenRect.height
                        id: obj
                        objectName: "osg_ObjectQQQ"
                        property var osg_Object

///REQUIRED HACK (ComboBox index not updated automatiquelly)
			 onOsg_ObjectChanged:{ 
				 varianceenum.enumOwner=obj.osg_Object  
			}
						 
  			 
                        anchors.leftMargin: 5
                        //height: 30
                        anchors.fill: parent


                        GroupBox {
                            id: groupBox1
                            x: 12
                            anchors.fill: parent
                            //x:10

                            title:  obj.osg_Object.className+" Properties"

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
                                    //obj.osg_Object.type
                                }
                                TextField {
                                    x: 0
                                    width: 178
                                    height: 25

                                    verticalAlignment: Text.AlignVCenter

                                    text: obj.osg_Object.Name


                                    onTextChanged: {
                                        if( obj.osg_Object.Name != text )
                                        obj.osg_Object.Name = text
                                    }
                                }
                                Label {
                                    width: 96
                                    height: 25
                                    verticalAlignment: Text.AlignVCenter

                                    text: "DataVariance:"

                                }
EnumComboBox{
id:varianceenum
width: 200
 enumName: "DataVariance"
	   enumWatched:obj.osg_Object.DataVariance
         enumOwner:obj.osg_Object
onCurrentIndexChanged: obj.osg_Object.DataVariance=enumAtCurrentIndex()

}
                                
                            }
                        }
                    }
                }
            }

    }

}

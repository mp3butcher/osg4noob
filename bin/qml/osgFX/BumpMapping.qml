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
            color: "green"
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

            /////CLASSIC PART TO END/////////////////////////////////////////////////////

            // height: childrenRect.height
            Column {
              //  width: childrenRect.width
             //   height: childrenRect.height
                id: classmain
                objectName: "osgFX_BumpMappingQQQ"
                property var osgFX_BumpMapping


Rectangle{     width: 160
    height: 25
                   Column{ Button {
height:50
                      //  anchors.fill: parent
                        text: "prepare Children"
                        iconSource: '../../content/openbutton.png'
                        onClicked: {
                             classmain.osgFX_BumpMapping.prepareChildren();
                        }
 
                    } 
TextField{text:   classmain.osgFX_BumpMapping.NormalMapTextureUnit ;onAccepted:classmain.osgFX_BumpMapping.NormalMapTextureUnit=parseInt(text)}
TextField{text:   classmain.osgFX_BumpMapping.DiffuseTextureUnit; onAccepted:classmain.osgFX_BumpMapping.DiffuseTextureUnit=parseInt(text)}
}
                     
}
           
                        }}
                    }
                }
            



}

import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."

FocusScope {
  onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
}

  width: 256
            height: 100
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

            color: "cyan"
             anchors.fill:parent
            id: rectangle
            //focus: true
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

/////////////////////////////////END CLASSIC//////////////////////////////////////////////
Column{
   // color:"white"
  //anchors.fill: parent
    y:75
    id: obj
    objectName: "osg_Vec3fQQQ"
   property var osg_Vec3f

    Row{
        Label{text:"x"}
        TextField{
            text:obj.osg_Vec3f.x
            onAccepted: obj.osg_Vec3f.x=parseFloat(text)
        }

    }

  }}}
}



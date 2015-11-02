import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."
/*
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

/////////////////////////////////END CLASSIC//////////////////////////////////////////////
Column{*/
   // color:"white"
  //anchors.fill: parent

Rectangle {
width:150
id:main
 anchors.fill: parent
 property var qmodel
    Row{   // y:75
      //  id: obj

        id: obj //FocusScope For keyboard events


       // objectName: 'pmocmousearea'

        objectName: "osg_Vec3dQQQ"
        property var osg_Vec3d


        TextField{width:50
            text:obj.osg_Vec3d.x.toFixed(3)
            onAccepted: obj.osg_Vec3d.x=parseFloat(text)
        }
        TextField{width:50
            text:obj.osg_Vec3d.y.toFixed(3)
            onAccepted: obj.osg_Vec3d.y=parseFloat(text)
        }
        TextField{width:50
            text:obj.osg_Vec3d.z.toFixed(3)
            onAccepted: obj.osg_Vec3d.z=parseFloat(text)
        }

    }
}
  //}}}}



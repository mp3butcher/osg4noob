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
width:200
 anchors.fill: parent
    Row{   // y:75
      //  id: obj

        id: main //FocusScope For keyboard events
        property var qmodel

       // objectName: 'pmocmousearea'

        objectName: "osg_QuatQQQ"
        property var osg_Quat


        TextField{width:50
            text:main.osg_Quat.x.toFixed(3)
            onAccepted: main.osg_Quat.x=parseFloat(text)
        }
        TextField{width:50
            text:main.osg_Quat.y.toFixed(3)
            onAccepted: main.osg_Quat.y=parseFloat(text)
        }
        TextField{width:50
            text:main.osg_Quat.z.toFixed(3)
            onAccepted: main.osg_Quat.z=parseFloat(text)
        }
        TextField{width:50
            text:main.osg_Quat.w.toFixed(3)
            onAccepted: main.osg_Quat.w=parseFloat(text)
        }

    }
}
  //}}}}



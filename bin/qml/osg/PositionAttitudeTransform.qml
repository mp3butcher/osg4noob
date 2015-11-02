import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


import QtQuick 2.1
import ".."

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 320
    height: 310


    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }

    //  x: 400
    //    y: 50


    Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10

        color: "yellow"
        anchors.fill: parent
        id: rectangle
        //focus: true


        /////////// main class hierarchy apparence///////////////////////

        ///CLASSIC PART TOO BEGIN
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
                    globalEditor.setOperand(main.qmodel)
                }
            }


                /////CLASSIC PART  END/////////////////////////////////////////////////////

/////////////////////////////////END CLASSIC//////////////////////////////////////////////

    Column  {

//y:100
id:classmain
objectName: "osg_PositionAttitudeTransformQQQ"
property var osg_PositionAttitudeTransform //QQModel
//anchors.fill: parent
  //  columns: 2
//    spacing: 1
onOsg_PositionAttitudeTransformChanged:   {
    //inner pmoc component injection
    console.log('inner pmoc component injection')
   globalEditor.popQQModelUi(osg_PositionAttitudeTransform.getPosition(),rowpos)
   globalEditor.popQQModelUi(osg_PositionAttitudeTransform.getRotation(),rowrot)
   globalEditor.popQQModelUi(osg_PositionAttitudeTransform.getScale(),rowscale)


}


//
Row{
    //columns:2
    Label{ height: 25;width:60;
        text:"position"
        wrapMode: Text.WordWrap
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter

    }
    Rectangle{id:rowpos
        //inject here
        x:60
    }

}
Row{
    //columns:2
    Label{ height: 25;width:60;
        text:"rotation"
        wrapMode: Text.WordWrap
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter

    }
    Rectangle{id:rowrot
        x:60
        //width:120
    }

}

Row{
    //columns:2
    Label{ height: 25;width:60;
        text:"scale"
        wrapMode: Text.WordWrap
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter

    }
    Rectangle{id:rowscale
        x:60
        //width:120

    }
    TextField{
x:400
width:20
        onAccepted:{
            console.log(rowscale.children[0].qmodel)
            rowscale.children[0].qmodel.x=0.01;
            rowscale.children[0].qmodel.y=0.01;
            rowscale.children[0].qmodel.z=0.01;
        }
    }

}
/*
Rectangle{ color: "transparent"; height:20;width: 100;Label {text:"Rotation";font.pointSize: 14}}
    Rectangle{  color: "transparent"; height:20;width: 50;
    Grid{
    columns:4
    TextField{ width: 50;   text:classmain.osg_PositionAttitudeTransform.rotation.r.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.rotation.r=parseFloat(text)
    }
    TextField{  width: 50;      text:classmain.osg_PositionAttitudeTransform.rotation.g.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.rotation.g=parseFloat(text)
    }
    TextField{  width: 50;      text:classmain.osg_PositionAttitudeTransform.rotation.b.toFixed(3)
    onAccepted:{classmain.osg_PositionAttitudeTransform.rotation.b=parseFloat(text)
    }
    }
    TextField{   width: 50;     text:classmain.osg_PositionAttitudeTransform.rotation.a.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.rotation.a=parseFloat(text)
    }
    }

    }

    Rectangle{ color: "transparent"; height:20;width: 100;Label {text:"Position";font.pointSize: 14}}
    Rectangle{  color: "transparent"; height:20;width: 50;
    Grid{
    columns:3
    TextField{  width: 50;    text:classmain.osg_PositionAttitudeTransform.position.x.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.position.x=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_PositionAttitudeTransform.position.y.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.position.y=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_PositionAttitudeTransform.position.z.toFixed(3)
    onAccepted:{classmain.osg_PositionAttitudeTransform.position.z=parseFloat(text)
    console.log("fok");}
    }
    }

    }




    Rectangle{ color: "transparent"; height:20;width: 100;Label {text:"Scale";font.pointSize: 14}}
    Rectangle{  color: "transparent"; height:20;width: 50;
    Grid       {
    columns:3
    TextField{     width: 50; text:classmain.osg_PositionAttitudeTransform.scale.x.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.scale.x=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_PositionAttitudeTransform.scale.y.toFixed(3)
    onAccepted:classmain.osg_PositionAttitudeTransform.scale.y=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_PositionAttitudeTransform.scale.z.toFixed(3)
    onAccepted:{classmain.osg_PositionAttitudeTransform.scale.z=parseFloat(text)
  }
    }
    }
    }*/

    }
    }

}
    }




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
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
            if ((event.key == Qt.Key_C)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("copy")
                pmocjs.setCopyOperand(main.qmodel)
                event.accepted = true
            }
            if ((event.key == Qt.Key_X)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("cut")
                pmocjs.setCopyOperand(main.qmodel)
                subjectrequired(
                            ) //send a signal (this should be connected with parent (a osg::group or subclass)
                event.accepted = true
            }
            if ((event.key == Qt.Key_V)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("paste")
                pmocjs.realPaste()
                event.accepted = true
            }
        }

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
                    pmocjs.setOperand(main.qmodel)
                }
            }


                /////CLASSIC PART  END/////////////////////////////////////////////////////

/////////////////////////////////END CLASSIC//////////////////////////////////////////////

    Column  {
//y:100
id:classmain
objectName: "osg_MatrixTransformQQQ"
property var osg_MatrixTransform //QQModel
//anchors.fill: parent
  //  columns: 2
//    spacing: 1

Rectangle{ color: "transparent"; height:20;width: 100;Label {text:"Rotation";font.pointSize: 14}}
    Rectangle{  color: "transparent"; height:20;width: 50;
    Grid{
    columns:4
    TextField{ width: 50;   text:classmain.osg_MatrixTransform.rotation.r.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.rotation.r=parseFloat(text)
    }
    TextField{  width: 50;      text:classmain.osg_MatrixTransform.rotation.g.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.rotation.g=parseFloat(text)
    }
    TextField{  width: 50;      text:classmain.osg_MatrixTransform.rotation.b.toFixed(3)
    onAccepted:{classmain.osg_MatrixTransform.rotation.b=parseFloat(text)
    }
    }
    TextField{   width: 50;     text:classmain.osg_MatrixTransform.rotation.a.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.rotation.a=parseFloat(text)
    }
    }

    }

    Rectangle{ color: "transparent"; height:20;width: 100;Label {text:"Position";font.pointSize: 14}}
    Rectangle{  color: "transparent"; height:20;width: 50;
    Grid{
    columns:3
    TextField{  width: 50;    text:classmain.osg_MatrixTransform.position.x.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.position.x=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_MatrixTransform.position.y.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.position.y=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_MatrixTransform.position.z.toFixed(3)
    onAccepted:{classmain.osg_MatrixTransform.position.z=parseFloat(text)
    console.log("fok");}
    }
    }

    }




    Rectangle{ color: "transparent"; height:20;width: 100;Label {text:"Scale";font.pointSize: 14}}
    Rectangle{  color: "transparent"; height:20;width: 50;
    Grid       {
    columns:3
    TextField{     width: 50; text:classmain.osg_MatrixTransform.scale.x.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.scale.x=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_MatrixTransform.scale.y.toFixed(3)
    onAccepted:classmain.osg_MatrixTransform.scale.y=parseFloat(text)
    }
    TextField{   width: 50;   text:classmain.osg_MatrixTransform.scale.z.toFixed(3)
    onAccepted:{classmain.osg_MatrixTransform.scale.z=parseFloat(text)
  }
    }
    }
    }

    }
    }

}
    }




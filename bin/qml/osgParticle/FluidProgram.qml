import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 350
    height:500
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

        color: "orange"
        anchors.fill: parent
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
            if ((event.key == Qt.Key_C)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("copy")
                globalEditor.setCopyOperand(main.qmodel)
                event.accepted = true
            }
            if ((event.key == Qt.Key_X)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("cut")
                globalEditor.setCopyOperand(main.qmodel)
                subjectrequired(
                            ) //send a signal (this should be connected with parent (a osg::group or subclass)
                event.accepted = true
            }
            if ((event.key == Qt.Key_V)
                    && (event.modifiers & Qt.ControlModifier)) {
                console.log("paste")
                globalEditor.realPaste()
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

                if (mouse.button != Qt.RightButton)

                    globalEditor.setOperand(main.qmodel)

            }
/////////////////////////////////END CLASSIC//////////////////////////////////////////////
Column{
id:obj
objectName: "osgParticle_FluidProgramQQQ"
property var osgParticle_FluidProgram //QQModel
y:190
x:10
//title:"Fluid Program Properties"
Rectangle{
anchors.fill:parent
color:'transparent'
height:300
width:350

Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
    Label {text:"Fluid Density"}
TextField {text:obj.osgParticle_FluidProgram.FluidDensity.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.FluidDensity=parseFloat(text)}

Label {text:"FluidViscosity"}
TextField {text:obj.osgParticle_FluidProgram.FluidViscosity.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.FluidViscosity=parseFloat(text)}

Label {text:"winddirection"}
	RowLayout{
TextField {text:obj.osgParticle_FluidProgram.windDirection.x.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.windDirection.x=parseFloat(text)}
TextField {text:obj.osgParticle_FluidProgram.windDirection.y.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.windDirection.y=parseFloat(text)}
TextField {text:obj.osgParticle_FluidProgram.windDirection.z.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.windDirection.z=parseFloat(text)}
}

Label {text:"acceleration"}
	RowLayout{
TextField {text:obj.osgParticle_FluidProgram.acceleration.x.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.acceleration.x=parseFloat(text)}
TextField {text:obj.osgParticle_FluidProgram.acceleration.y.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.acceleration.y=parseFloat(text)}
TextField {text:obj.osgParticle_FluidProgram.acceleration.z.toFixed(1);onAccepted:obj.osgParticle_FluidProgram.acceleration.z=parseFloat(text)}
}
}


	}
	}
	}
	}

	}}

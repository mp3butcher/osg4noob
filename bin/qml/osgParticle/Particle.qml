import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

//import ColorComponentsNode 1.0

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 350
    height: 300
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
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing Usefull)
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

/////////////////////////////////END CLASSIC//////////////////////////////////////////////
Column {
id:obj
objectName: "osgParticle_ParticleQQQ"
property var osgParticle_Particle //QQModel
y:0
x:10
Label{
text:"Particle Properties"}
Rectangle{

color:'transparent'
height:400
width:350

Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
	Label {text:"mass"}
TextField {text:obj.osgParticle_Particle.Mass.toFixed(3);onAccepted:obj.osgParticle_Particle.Mass=parseFloat(text)}

Label {text:"lifeTime"}
TextField {text:obj.osgParticle_Particle.LifeTime.toFixed(1);onAccepted:obj.osgParticle_Particle.LifeTime=parseFloat(text)}
Label {text:"radius"}
TextField {text:obj.osgParticle_Particle.Radius.toFixed(2);onAccepted:obj.osgParticle_Particle.Radius=parseFloat(text)}


Label {text:"size range"}
	RowLayout{
TextField {text:obj.osgParticle_Particle.minSize.toFixed(1);onAccepted:obj.osgParticle_Particle.minSize=parseFloat(text)}
TextField {text:obj.osgParticle_Particle.maxSize.toFixed(1);onAccepted:obj.osgParticle_Particle.maxSize=parseFloat(text)}
}

Label {text:"alpha range"}
	RowLayout{
TextField {text:obj.osgParticle_Particle.minAlpha.toFixed(2);onAccepted:obj.osgParticle_Particle.minAlpha=parseFloat(text)}
TextField {text:obj.osgParticle_Particle.maxAlpha.toFixed(2);onAccepted:obj.osgParticle_Particle.maxAlpha=parseFloat(text)}
}

/*
Label {text:"acceleration"}
	RowLayout{
TextField {text:obj.osgParticle_Particle.acceleration.x.toFixed(3);onAccepted:obj.osgParticle_Particle.acceleration.x=parseFloat(text)}
TextField {text:obj.osgParticle_Particle.acceleration.y.toFixed(3);onAccepted:obj.osgParticle_Particle.acceleration.y=parseFloat(text)}
TextField {text:obj.osgParticle_Particle.acceleration.z.toFixed(3);onAccepted:obj.osgParticle_Particle.acceleration.z=parseFloat(text)}
}*/
}


	}
	}
	}
	}

    }

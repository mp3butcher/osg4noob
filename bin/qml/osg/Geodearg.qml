import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


import osg_GeodeQQQ_QModel 1.0 
//import QtQuick 2.1
import osgQtQuick 1.0

FocusScope {

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
    signal //: osg_Geode //QQModel
    subjectrequired
    signal //signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )
    drawableselected(int index)

    ColumnLayout {
        Rectangle {
            // anchors.fill:parent
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
            //style
            // width: childrenRect.width
            //implicit_height:obj.implicit_height
            //    height: childrenRect.height
            opacity: 1.0
            color: "green"

            ///CLASSIC PART TOO BEGIN
            MouseArea {
objectName:'pmocmousearea'
                width: childrenRect.width
                height: childrenRect.height
                //anchors.fill: parent
                //    hoverEnabled: true
                acceptedButtons:Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

		   if (mouse.button == Qt.RightButton)
			    uaContextMenu.popup()
		   else{
		            console.log("selected")
		            main.focus = true
		            pmocjs.setOperand(main.qmodel)
			}

                }
               // onPressAndHold: uaContextMenu.popup()
                Menu {
                    id: uaContextMenu


                    MenuItem {
                        text: 'Copy'
                        shortcut: "Ctrl+C"
                        onTriggered: {
                            pmocjs.setCopyOperand(main.qmodel)
                        }
                    }
                    MenuItem {
                        text: 'Cut'
                        shortcut: "Ctrl+X"
                        onTriggered: {
                            pmocjs.setCopyOperand(main.qmodel)
                            pmocjs.setCutSubject(main.parent.qmodel)

                            subjectrequired()
                        }
                    }
                    MenuItem {
                        text: 'Paste'
                        shortcut: "Ctrl+V"
                        onTriggered: {
                            pmocjs.realPaste(main.qmodel)
pmocjs.popQQModelUi(pmocjs.getCopyOperand(),
main.qmodel.getQuickItem()
)
 main.qmodel.modelChanged()
                        }
                    }
                    MenuItem {
                        text: 'Remove'
                        shortcut: "Suppr"
                        onTriggered: {

                            pmocjs.setCopyOperand(main.qmodel)
                            pmocjs.setCutSubject(main.parent.qmodel)
pmocjs.isCutAction=false
                            pmocjs.realRemoval()
                            subjectrequired()
 //main.parent.qmodel.modelChanged()
			    main.parent=null;
                        }
                    }
                }


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
                Rectangle {
                    border.color: "black"
                    border.width: 3
                    radius: 10
                    width: childrenRect.width
                    height: childrenRect.height
                    color: "yellow"


//anchors.horizontalCenter:parent.horizontalCenter
//anchors.leftMargin:5
//anchors.rightMargin:5
Column{
id:classmain
objectName: "osg_GeodeQQQ"
property var osg_Geode;//: osg_Geode //QQModel 
 onParentChanged:   if(parent!=null){  
console.log("Geode  connect"); 
pmocjs.osg_Drawable_removed.connect(classmain.osg_Geode.updateview);
pmocjs.osg_Drawable_added.connect(classmain.osg_Geode.updateview);
}else{
console.log("Geode disconnect");
pmocjs.osg_Drawable_removed.disconnect(classmain.osg_Geode.updateview);
pmocjs.osg_Drawable_added.disconnect(classmain.osg_Geode.updateview);
console.log("Geode disconnected");
}
  


//width: 200
	//height: 240
	opacity:1.0
	//color: "blue"
//	x:300
	y:500
   anchors.left: parent.left
    anchors.right: parent.right

ListView {

   anchors.left: parent.left
	x:100
	y:100
    width: 200; height: 200
//    model: main.qmodel.drawables
model:classmain.osg_Geode.drawables
    delegate: 
	
    Rectangle {
	 property int m_iIndex: model.index
	id:caseDrawable
	height: 25
        width: 200
        color: "purple" 
		MouseArea {

anchors.fill: parent
          
               
                onDoubleClicked: {console.log(model);
				
					console.log(parent.m_iIndex);
					classmain.osg_Geode.DrawableSelected(parent.m_iIndex)

 
				}
Grid {
columns:2
width:200
    id: layout
    anchors.fill: parent
        
		Label{
		text:model.type
		}
		 TextEdit { 
		
		text: model.name
		onTextChanged:{
		model.name=text
		}
		
	}
    }
}
	}
	}
}}

}
}
}}

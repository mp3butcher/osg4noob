import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0



Rectangle {


    property var name
    property var isClipped

    //  x: target.parent.width - target.x
    //    y: target.parent.height - target.y

    id: pmocpattern
property var h  ;

    RowLayout {
        id: rowLayout1
        x: -149
        y: -67
        width: 100
        height: 100

        Label{
            color: '#fa00ff'
            text:relationname
            font.pointSize: 12
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }

        Button {
            id: button1
            text: qsTr("Button")
        }

        Button {
            id: button2
            text: qsTr("Button")
        }

        ToolButton {
            id: toolButton1
            iconSource: "components/content/top_tick.png"

            activeFocusOnPress: false
            onClicked: {
                var swap=pmocpattern.h;
                isClipped=(swap==40);
                pmocpattern.h=pmocpattern.height

                pmocpattern.height=swap

            }
        }
    }





}

import QtQuick 2.0

Item {
    Grid {
        id: grid

        anchors.fill: parent
        clip: true

        property int squareSize: 8

        columns: Math.ceil(width / squareSize)
        rows:    Math.ceil(height / squareSize)


        Repeater {
            model: grid.columns * grid.rows
            Rectangle {
                width:  grid.squareSize
                height: grid.squareSize
                color:  (index % grid.columns) % 2 === ((index - index % grid.columns) / grid.columns) % 2 ? "white" : "#cccccc"
            }
        }
    }
}

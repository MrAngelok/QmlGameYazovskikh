import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "TheGame"

    GamePalette {
        id: customPalette
    }

    // Центральный контент
    Rectangle {
        anchors.fill: parent
        color: customPalette.background

        Row {
            Repeater {
                model: customPalette.rarityLevels
                delegate: Rectangle {
                    width: 50
                    height: 50
                    color: modelData // Например, фиолетовый для эпической фигуры
                }
            }
        }
    }
}

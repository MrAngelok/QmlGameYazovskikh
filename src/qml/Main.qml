import QtQuick 2.15
import QtQuick.Controls.Material 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "TheGame"

    // Центральный контент
    Rectangle {
        anchors.fill: parent
        color: Theme.background

        Column {
            anchors.centerIn: parent
            spacing: 20

            Button {
                text: "Play"
                Material.background: Theme.button
                Material.foreground: Theme.buttonText
            }
        }

        Rectangle {
            width: 50
            height: 50
            color: Theme.rarityColors[Theme.Rarity.Legendary]
        }
    }
}

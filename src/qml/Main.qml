import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: "TheGame"

    SystemPalette {}

    Text {
        text: "Hello, QML 6.8.0!"
        anchors.centerIn: parent
        font.pointSize: 24
    }
}

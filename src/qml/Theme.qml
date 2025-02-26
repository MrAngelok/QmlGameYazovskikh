pragma Singleton

import QtQuick 2.15
import QtQuick.Controls 2.15

QtObject {
    id: customPalette
    property color background: "#2b2b2b"
    property color base: "#1e1e1e"
    property color text: "#ffffff"
    property color highlight: "#ffcc00"
    property color button: "#4c4c4c"
    property color buttonText: "#ffffff"

    enum Rarity {
        Common = 0,
        Uncommon = 1,
        Rare = 2,
        Epic = 3,
        Legendary = 4,
        Mythical = 5
    }

    property var rarityColors: ["#808080", "#3cb371", "#4682b4", "#8a2be2", "#ff8c00", "#dc143c"]
}

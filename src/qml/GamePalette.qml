import QtQuick 2.15
import QtQuick.Controls 2.15

QtObject {
    id: customPalette
    property color background: "#2b2b2b" // Фон
    property color text: "#ffffff" // Текст
    property color highlight: "#ffcc00" // Выделение
    property color common: "#808080" // Серый
    property color uncommon: "#3cb371" // Зелёный
    property color rare: "#4682b4" // Синий
    property color epic: "#8a2be2" // Фиолетовый
    property color legendary: "#ff8c00" // Оранжевый
    property color mythical: "#dc143c" // Красный
    property var rarityLevels: [common, // Обычный
        uncommon, // Необычный
        rare, // Редкий
        epic, // Эпический
        legendary, // Легендарный
        mythical // Мифический
    ]
}

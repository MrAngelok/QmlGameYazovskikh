#ifndef THEME_H
#define THEME_H

#include <QObject>
#include <QQmlEngine>
#include <QColor>

class Theme : public QObject {
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON

    Q_PROPERTY(QColor background READ background NOTIFY themeChanged)
    Q_PROPERTY(QColor base READ base NOTIFY themeChanged)
    Q_PROPERTY(QColor text READ text NOTIFY themeChanged)
    Q_PROPERTY(QColor highlight READ highlight NOTIFY themeChanged)
    Q_PROPERTY(QColor button READ button NOTIFY themeChanged)
    Q_PROPERTY(QColor buttonText READ buttonText NOTIFY themeChanged)
    Q_PROPERTY(QVariantList rarityColors READ rarityColors NOTIFY themeChanged)

public:
    explicit Theme(QObject *parent = nullptr) : QObject(parent) {}

    enum class Rarity {
        Common = 0,
        Uncommon,
        Rare,
        Epic,
        Legendary,
        Mythical
    };
    Q_ENUM(Rarity)

    QColor background() const { return QColor(43, 43, 43); }
    QColor base() const { return QColor(30, 30, 30); }
    QColor text() const { return QColor(255, 255, 255); }
    QColor highlight() const { return QColor(255, 204, 0); }
    QColor button() const { return QColor(76, 76, 76); }
    QColor buttonText() const { return QColor(255, 255, 255); }

    QVariantList rarityColors() const {
        return QVariantList{
            QColor(128, 128, 128),  // Common (Серый)
            QColor(60, 179, 113),   // Uncommon (Зелёный)
            QColor(70, 130, 180),   // Rare (Синий)
            QColor(138, 43, 226),   // Epic (Фиолетовый)
            QColor(255, 140, 0),    // Legendary (Оранжевый)
            QColor(220, 20, 60)     // Mythical (Красный)
        };
    }

signals:
    void themeChanged();
};

// Объявляем registerTheme() для main.cpp
void registerTheme();

#endif // THEME_H

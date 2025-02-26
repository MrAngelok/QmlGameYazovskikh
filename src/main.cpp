#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "core/theme_singleton.h"  // Подключаем singleton

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Регистрируем C++ Singleton
    registerTheme();

    engine.loadFromModule("TheGame", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}

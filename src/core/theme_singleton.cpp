#include "theme_singleton.h"
#include <QtQml>

static QObject *theme_provider(QQmlEngine *, QJSEngine *) {
    return new Theme();
}

void registerTheme() {
    qmlRegisterSingletonType<Theme>("TheGame", 1, 0, "Theme", theme_provider);
    qmlRegisterUncreatableType<Theme>("TheGame", 1, 0, "Rarity", "Enum only");
}

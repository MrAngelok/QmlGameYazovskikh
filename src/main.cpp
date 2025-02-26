#include <QGuiApplication>
#include <QQmlApplicationEngine>
// #include <QDirIterator>

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // QDirIterator it(":/", QDirIterator::Subdirectories);
    // while (it.hasNext()) {
    //     qDebug() << it.next();
    // }

    const QUrl url(QUrl(QStringLiteral("qrc:/qt/qml/TheGame/src/qml/Main.qml")));

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
                         if (!obj && url == objUrl)
                             QCoreApplication::exit(-1);
                     }, Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}

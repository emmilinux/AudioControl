#include <QApplication>
#include <QDesktopWidget>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include "context.h"
#include "conf.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Conf *conf = new Conf(app.applicationDirPath());

    if (conf->instance)
    {
        QProcess process;
        process.start("kill " + conf->getValue("pid").toString());
        process.waitForFinished();
        conf->setValue("instance", 0);
        return 0;
    }
    else
    {
        conf->setValue("instance", 1);
        conf->setValue("pid", app.applicationPid());
        Context *context = new Context();
        context->conf = conf;
        context->x = app.desktop()->geometry().width();
        context->y = app.desktop()->geometry().height();

        QQmlApplicationEngine engine;
        engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
        engine.rootContext()->setContextProperty("Context", context);

        return app.exec();
    }
}

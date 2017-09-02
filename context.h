#ifndef CONTEXT_H
#define CONTEXT_H

#include <QObject>
#include <QDebug>
#include <QProcess>
#include <QString>
#include "conf.h"


class Context : public QObject
{

    Q_OBJECT  

public:
    int x;
    int y;
    Conf *conf;
    Q_INVOKABLE int screenX();
    Q_INVOKABLE int screenY();
    Q_INVOKABLE void changeVolume(QString key, int value);
    Q_INVOKABLE void changeMicrophone(QString key, int value);
    Q_INVOKABLE int volume();
    Q_INVOKABLE int microphone();
    Q_INVOKABLE void closeInstance();
    Q_INVOKABLE QString background();
    Q_INVOKABLE float opacity();
    Q_INVOKABLE void showMixer();

private:
    QProcess process;

};

#endif // CONTEXT_H

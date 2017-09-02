#ifndef CONF_H
#define CONF_H

#include <QSettings>
#include <QVariant>
#include <QString>
#include <QDebug>


class Conf
{
public:
    int volume;
    int capture;
    int instance;
    QString path;
    QString background;
    float opacity;
    Conf(QString path);
    void setValue(QString key, int value);
    void setInstace(int value);
    QVariant getValue(QString key);
    QSettings settings;
};

#endif // CONF_H

#include "conf.h"


Conf::Conf(QString path) : settings(path + "/audio.conf", QSettings::NativeFormat)
{
    this->path = path;
    settings.beginGroup("AUDIO");
    this->volume = settings.value("volume").toInt();
    this->capture = settings.value("capture").toInt();
    this->instance = settings.value("instance").toInt();
    settings.endGroup();

    settings.beginGroup("STYLE");
    this->background = settings.value("background").toString();
    this->opacity = settings.value("opacity").toFloat();
    settings.endGroup();
}

void Conf::setValue(QString key, int value)
{
    QSettings settings(path + "/audio.conf", QSettings::NativeFormat);
    settings.beginGroup("AUDIO");
    settings.setValue(key, value);
    settings.endGroup();
}

QVariant Conf::getValue(QString key)
{
    QSettings settings(path + "/audio.conf", QSettings::NativeFormat);
    settings.beginGroup("AUDIO");
    QVariant value = settings.value(key);
    settings.endGroup();
    return value;
}

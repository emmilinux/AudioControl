#include "context.h"


void Context::changeVolume(QString key, int value)
{

    QString valor = QString::number(value).append("%");

    this->process.start("amixer set Master " + valor);
    this->process.waitForFinished();
    this->process.close();
    conf->setValue(key, value);
}

int Context::volume()
{
    return conf->volume;
}

int Context::microphone()
{
    return conf->capture;
}

void Context::changeMicrophone(QString key, int value)
{
    QString valor = QString::number(value).append("%");

    this->process.start("amixer set Capture " + valor);
    this->process.waitForFinished();
    this->process.close();
    conf->setValue(key, value);
}

int Context::screenX()
{
    return this->x;
}

int Context::screenY()
{
    return this->y;
}

void Context::closeInstance()
{
    conf->setValue("instance", 0);
}

QString Context::background()
{
    return conf->background;
}

float Context::opacity()
{
    return conf->opacity;
}

void Context::showMixer()
{
    QProcess *pro = new QProcess();
    pro->start("xfce4-mixer");
}

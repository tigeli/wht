#include "SettingsClass.h"
#include <QSettings>
#include <QDebug>
#include <QGuiApplication>
#include <QCoreApplication>


Settings::Settings(QObject *parent)
    : QObject(parent)
{
}

Settings::Settings(const Settings &settings)
    : QObject(0)
{
    Q_UNUSED(settings)
}
Settings::~Settings()
{
}

void Settings::setDefaultDuration(double value)
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   s.setValue("defaultDuration", value);
   s.endGroup();
}

double Settings::getDefaultDuration()
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   defaultDuration = s.value("defaultDuration", -1).toDouble();
   s.endGroup();
   return defaultDuration;
}
void Settings::setDefaultBreakDuration(double value)
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   s.setValue("defaultBreakDuration", value);
   s.endGroup();
}

double Settings::getDefaultBreakDuration()
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   defaultBreakDuration = s.value("defaultBreakDuration", -1).toDouble();
   s.endGroup();
   return defaultBreakDuration;
}

void Settings::setEndsNowByDefault(QString value)
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   s.setValue("endsNowByDefault", value);
   s.endGroup();
}

QString Settings::getEndsNowByDefault()
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   endsNowByDefault= s.value("endsNowByDefault", "error").toString();
   s.endGroup();
   return endsNowByDefault;
}

void Settings::setEndTimeStaysFixed(QString value)
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   s.setValue("endTimeStaysFixed", value);
   s.endGroup();
}

QString Settings::getEndTimeStaysFixed()
{
   QSettings s("harbour-workinghourstracker", "harbour-workinghourstracker");
   s.beginGroup("Settings");
   endTimeStaysFixed = s.value("endTimeStaysFixed", "error").toString();
   s.endGroup();
   return endTimeStaysFixed;
}



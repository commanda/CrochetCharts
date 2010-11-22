#ifndef APPINFO_H
#define APPINFO_H

#include "../VERSION"
#include <QString>
#include <QList>
#include <QRegExp>
#include <QStringList>

namespace AppInfo {
    const QString appName = "Crochet";
    const QString appOrg = "Fiber Software";

    const QString appOrgDomain = "fibersoftware.com";
    const QString appVersion = GIT_VERSION; //ie: 0.1.0

    const QString appBuildInfo = QString(__DATE__) + " " + QString(__TIME__);
}

#endif // APPINFO_H

#ifndef QLUAENGINE_H
#define QLUAENGINE_H

#include <QObject>
#include <qtscriptluaglobal.h>

QT_BEGIN_NAMESPACE

class Q_SCRIPTLUA_EXPORT QLuaEngine : public QObject
{
    Q_OBJECT
public:
    explicit QLuaEngine(QObject *parent = nullptr);

};

QT_END_NAMESPACE

#endif // QLUAENGINE_H

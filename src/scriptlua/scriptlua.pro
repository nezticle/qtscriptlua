TARGET = QtScriptLua
MODULE = scriptlua

QT = core

include(../3rdparty/lua.pri)

load(qt_module)

HEADERS += \
    qtscriptluaglobal.h \
    qluaengine.h

SOURCES += \
    qluaengine.cpp

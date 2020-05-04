/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp config/com.kimmoli.harbour.maira.xml -i dbus.h -a src/dbusAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSADAPTOR_H
#define DBUSADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "dbus.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.kimmoli.harbour.maira
 */
class TooterbAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "ba.dysko.harbour.tooterb")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"ba.dysko.harbour.tooterb\">\n"
"    <method name=\"showtoot\">\n"
"      <annotation value=\"true\" name=\"org.freedesktop.DBus.Method.NoReply\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"key\"/>\n"
"    </method>\n"
"    <method name=\"openapp\"/>\n"
"  </interface>\n"
        "")
public:
    TooterbAdaptor(QObject *parent);
    virtual ~TooterbAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void openapp();
    Q_NOREPLY void showtoot(const QStringList &key);
Q_SIGNALS: // SIGNALS
};

#endif

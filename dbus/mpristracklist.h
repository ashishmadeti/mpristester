/*
 * This file was generated by dbusxml2cpp version 0.6
 * Command line was: dbusxml2cpp -p mpristracklist -N -c MprisTracklist org.freedesktop.MediaPlayer.tracklist.xml
 *
 * dbusxml2cpp is Copyright (C) 2006 Trolltech ASA. All rights reserved.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MPRISTRACKLIST_H_1218542611
#define MPRISTRACKLIST_H_1218542611

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.MediaPlayer
 */
class MprisTracklist: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.MediaPlayer"; }

public:
    MprisTracklist(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~MprisTracklist();

public Q_SLOTS: // METHODS
    inline QDBusReply<int> AddTrack(const QString &in0, bool in1)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0) << qVariantFromValue(in1);
        return callWithArgumentList(QDBus::Block, QLatin1String("AddTrack"), argumentList);
    }

    inline QDBusReply<void> DelTrack(int in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return callWithArgumentList(QDBus::Block, QLatin1String("DelTrack"), argumentList);
    }

    inline QDBusReply<int> GetCurrentTrack()
    {
        QList<QVariant> argumentList;
        return callWithArgumentList(QDBus::Block, QLatin1String("GetCurrentTrack"), argumentList);
    }

    inline QDBusReply<int> GetLength()
    {
        QList<QVariant> argumentList;
        return callWithArgumentList(QDBus::Block, QLatin1String("GetLength"), argumentList);
    }

    inline QDBusReply<QVariantMap> GetMetadata(int in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return callWithArgumentList(QDBus::Block, QLatin1String("GetMetadata"), argumentList);
    }

    inline QDBusReply<void> SetLoop(bool in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return callWithArgumentList(QDBus::Block, QLatin1String("SetLoop"), argumentList);
    }

    inline QDBusReply<void> SetRandom(bool in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return callWithArgumentList(QDBus::Block, QLatin1String("SetRandom"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void TrackListChange(int in0);
};

#endif

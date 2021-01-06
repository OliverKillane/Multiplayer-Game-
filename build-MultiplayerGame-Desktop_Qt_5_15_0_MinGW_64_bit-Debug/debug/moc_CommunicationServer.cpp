/****************************************************************************
** Meta object code from reading C++ file 'CommunicationServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MultiplayerGame/CommunicationServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommunicationServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommThread_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommThread_t qt_meta_stringdata_CommThread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CommThread"
QT_MOC_LITERAL(1, 11, 11), // "RecieveData"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "GameData"
QT_MOC_LITERAL(4, 33, 4), // "data"
QT_MOC_LITERAL(5, 38, 11), // "CommThread*"
QT_MOC_LITERAL(6, 50, 10), // "commthread"
QT_MOC_LITERAL(7, 61, 11), // "ServerError"
QT_MOC_LITERAL(8, 73, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 102, 11), // "socketError"
QT_MOC_LITERAL(10, 114, 4), // "user"
QT_MOC_LITERAL(11, 119, 8), // "SendData"
QT_MOC_LITERAL(12, 128, 18), // "ServerDataRecieved"
QT_MOC_LITERAL(13, 147, 10) // "CatchError"

    },
    "CommThread\0RecieveData\0\0GameData\0data\0"
    "CommThread*\0commthread\0ServerError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "user\0SendData\0ServerDataRecieved\0"
    "CatchError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       7,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   49,    2, 0x0a /* Public */,
      12,    0,   52,    2, 0x08 /* Private */,
      13,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 5,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void CommThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RecieveData((*reinterpret_cast< GameData(*)>(_a[1])),(*reinterpret_cast< CommThread*(*)>(_a[2]))); break;
        case 1: _t->ServerError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< CommThread*(*)>(_a[2]))); break;
        case 2: _t->SendData((*reinterpret_cast< GameData(*)>(_a[1]))); break;
        case 3: _t->ServerDataRecieved(); break;
        case 4: _t->CatchError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CommThread* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CommThread* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommThread::*)(GameData , CommThread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommThread::RecieveData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommThread::*)(QAbstractSocket::SocketError , CommThread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommThread::ServerError)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CommThread.data,
    qt_meta_data_CommThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CommThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CommThread::RecieveData(GameData _t1, CommThread * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommThread::ServerError(QAbstractSocket::SocketError _t1, CommThread * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CommunicationServer_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommunicationServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommunicationServer_t qt_meta_stringdata_CommunicationServer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CommunicationServer"
QT_MOC_LITERAL(1, 20, 11), // "ServerError"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "errordescription"
QT_MOC_LITERAL(4, 50, 13), // "ServerStarted"
QT_MOC_LITERAL(5, 64, 13), // "NewConnection"
QT_MOC_LITERAL(6, 78, 11), // "CommThread*"
QT_MOC_LITERAL(7, 90, 9), // "newclient"
QT_MOC_LITERAL(8, 100, 14) // "ShutdownServer"

    },
    "CommunicationServer\0ServerError\0\0"
    "errordescription\0ServerStarted\0"
    "NewConnection\0CommThread*\0newclient\0"
    "ShutdownServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommunicationServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CommunicationServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommunicationServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ServerError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ServerStarted(); break;
        case 2: _t->NewConnection((*reinterpret_cast< CommThread*(*)>(_a[1]))); break;
        case 3: _t->ShutdownServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CommThread* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommunicationServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationServer::ServerError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommunicationServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationServer::ServerStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommunicationServer::*)(CommThread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationServer::NewConnection)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommunicationServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpServer::staticMetaObject>(),
    qt_meta_stringdata_CommunicationServer.data,
    qt_meta_data_CommunicationServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommunicationServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommunicationServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int CommunicationServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CommunicationServer::ServerError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommunicationServer::ServerStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CommunicationServer::NewConnection(CommThread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

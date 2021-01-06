/****************************************************************************
** Meta object code from reading C++ file 'blastrgame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MultiplayerGame/blastrgame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blastrgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlastrGame_t {
    QByteArrayData data[9];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlastrGame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlastrGame_t qt_meta_stringdata_BlastrGame = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BlastrGame"
QT_MOC_LITERAL(1, 11, 12), // "SendGameData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "GameData"
QT_MOC_LITERAL(4, 34, 4), // "data"
QT_MOC_LITERAL(5, 39, 15), // "RecieveGameData"
QT_MOC_LITERAL(6, 55, 12), // "RecieveInput"
QT_MOC_LITERAL(7, 68, 10), // "QKeyEvent*"
QT_MOC_LITERAL(8, 79, 5) // "event"

    },
    "BlastrGame\0SendGameData\0\0GameData\0"
    "data\0RecieveGameData\0RecieveInput\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlastrGame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void BlastrGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlastrGame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendGameData((*reinterpret_cast< GameData(*)>(_a[1]))); break;
        case 1: _t->RecieveGameData((*reinterpret_cast< GameData(*)>(_a[1]))); break;
        case 2: _t->RecieveInput((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BlastrGame::*)(GameData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlastrGame::SendGameData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BlastrGame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BlastrGame.data,
    qt_meta_data_BlastrGame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlastrGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlastrGame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlastrGame.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BlastrGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BlastrGame::SendGameData(GameData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

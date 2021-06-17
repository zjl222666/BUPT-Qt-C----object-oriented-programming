/****************************************************************************
** Meta object code from reading C++ file 'myserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../div3_Server/myserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myServer_t {
    const uint offsetsAndSize[24];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_myServer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_myServer_t qt_meta_stringdata_myServer = {
    {
QT_MOC_LITERAL(0, 8), // "myServer"
QT_MOC_LITERAL(9, 13), // "recConnection"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 16), // "socket_Read_Data"
QT_MOC_LITERAL(41, 19), // "socket_Disconnected"
QT_MOC_LITERAL(61, 12), // "sendUserinfo"
QT_MOC_LITERAL(74, 5), // "user*"
QT_MOC_LITERAL(80, 8), // "userInfo"
QT_MOC_LITERAL(89, 11), // "sendCominfo"
QT_MOC_LITERAL(101, 15), // "commodityStruct"
QT_MOC_LITERAL(117, 6), // "newCom"
QT_MOC_LITERAL(124, 16) // "on_clear_clicked"

    },
    "myServer\0recConnection\0\0socket_Read_Data\0"
    "socket_Disconnected\0sendUserinfo\0user*\0"
    "userInfo\0sendCominfo\0commodityStruct\0"
    "newCom\0on_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myServer[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    0 /* Private */,
       3,    0,   51,    2, 0x08,    1 /* Private */,
       4,    0,   52,    2, 0x08,    2 /* Private */,
       5,    1,   53,    2, 0x08,    3 /* Private */,
       8,    1,   56,    2, 0x08,    5 /* Private */,
      11,    0,   59,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void myServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->recConnection(); break;
        case 1: _t->socket_Read_Data(); break;
        case 2: _t->socket_Disconnected(); break;
        case 3: _t->sendUserinfo((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 4: _t->sendCominfo((*reinterpret_cast< commodityStruct(*)>(_a[1]))); break;
        case 5: _t->on_clear_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject myServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_myServer.offsetsAndSize,
    qt_meta_data_myServer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_myServer_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<user *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<commodityStruct, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *myServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myServer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int myServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

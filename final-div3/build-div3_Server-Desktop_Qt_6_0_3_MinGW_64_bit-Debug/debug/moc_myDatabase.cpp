/****************************************************************************
** Meta object code from reading C++ file 'myDatabase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../div3_Server/myDatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myDatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_userDatabase_t {
    const uint offsetsAndSize[10];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userDatabase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userDatabase_t qt_meta_stringdata_userDatabase = {
    {
QT_MOC_LITERAL(0, 12), // "userDatabase"
QT_MOC_LITERAL(13, 12), // "sendUserInfo"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 5), // "user*"
QT_MOC_LITERAL(33, 8) // "userInfo"

    },
    "userDatabase\0sendUserInfo\0\0user*\0"
    "userInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userDatabase[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    0 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void userDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userDatabase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendUserInfo((*reinterpret_cast< user*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userDatabase::*)(user * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userDatabase::sendUserInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject userDatabase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_userDatabase.offsetsAndSize,
    qt_meta_data_userDatabase,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userDatabase_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<user *, std::false_type>



>,
    nullptr
} };


const QMetaObject *userDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userDatabase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int userDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void userDatabase::sendUserInfo(user * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_commodityDatabase_t {
    const uint offsetsAndSize[10];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_commodityDatabase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_commodityDatabase_t qt_meta_stringdata_commodityDatabase = {
    {
QT_MOC_LITERAL(0, 17), // "commodityDatabase"
QT_MOC_LITERAL(18, 11), // "sendComInfo"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 15), // "commodityStruct"
QT_MOC_LITERAL(47, 6) // "newCom"

    },
    "commodityDatabase\0sendComInfo\0\0"
    "commodityStruct\0newCom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commodityDatabase[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    0 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void commodityDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commodityDatabase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendComInfo((*reinterpret_cast< commodityStruct(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (commodityDatabase::*)(commodityStruct );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&commodityDatabase::sendComInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject commodityDatabase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_commodityDatabase.offsetsAndSize,
    qt_meta_data_commodityDatabase,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_commodityDatabase_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<commodityStruct, std::false_type>



>,
    nullptr
} };


const QMetaObject *commodityDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commodityDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commodityDatabase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int commodityDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void commodityDatabase::sendComInfo(commodityStruct _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_shoppingTrolleyDatabase_t {
    const uint offsetsAndSize[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_shoppingTrolleyDatabase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_shoppingTrolleyDatabase_t qt_meta_stringdata_shoppingTrolleyDatabase = {
    {
QT_MOC_LITERAL(0, 23) // "shoppingTrolleyDatabase"

    },
    "shoppingTrolleyDatabase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_shoppingTrolleyDatabase[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void shoppingTrolleyDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject shoppingTrolleyDatabase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_shoppingTrolleyDatabase.offsetsAndSize,
    qt_meta_data_shoppingTrolleyDatabase,
    qt_static_metacall,
    nullptr,
    nullptr,
    nullptr
} };


const QMetaObject *shoppingTrolleyDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *shoppingTrolleyDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_shoppingTrolleyDatabase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int shoppingTrolleyDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

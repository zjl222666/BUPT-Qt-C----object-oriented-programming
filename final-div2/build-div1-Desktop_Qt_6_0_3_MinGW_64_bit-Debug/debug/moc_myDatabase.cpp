/****************************************************************************
** Meta object code from reading C++ file 'myDatabase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../div1/myDatabase.h"
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
    const uint offsetsAndSize[12];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userDatabase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userDatabase_t qt_meta_stringdata_userDatabase = {
    {
QT_MOC_LITERAL(0, 12), // "userDatabase"
QT_MOC_LITERAL(13, 13), // "sendLoginInfo"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 5), // "user*"
QT_MOC_LITERAL(34, 8), // "userInfo"
QT_MOC_LITERAL(43, 12) // "sendUserInfo"

    },
    "userDatabase\0sendLoginInfo\0\0user*\0"
    "userInfo\0sendUserInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userDatabase[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    0 /* Public */,
       5,    1,   29,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void userDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userDatabase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendLoginInfo((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 1: _t->sendUserInfo((*reinterpret_cast< user*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userDatabase::*)(user * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userDatabase::sendLoginInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (userDatabase::*)(user * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userDatabase::sendUserInfo)) {
                *result = 1;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<user *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<user *, std::false_type>



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
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void userDatabase::sendLoginInfo(user * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void userDatabase::sendUserInfo(user * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_commodityDatabase_t {
    const uint offsetsAndSize[10];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_commodityDatabase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_commodityDatabase_t qt_meta_stringdata_commodityDatabase = {
    {
QT_MOC_LITERAL(0, 17), // "commodityDatabase"
QT_MOC_LITERAL(18, 13), // "updataComInfo"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 15), // "commodityStruct"
QT_MOC_LITERAL(49, 6) // "newCom"

    },
    "commodityDatabase\0updataComInfo\0\0"
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
        case 0: _t->updataComInfo((*reinterpret_cast< commodityStruct(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (commodityDatabase::*)(commodityStruct );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&commodityDatabase::updataComInfo)) {
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
void commodityDatabase::updataComInfo(commodityStruct _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_shoppingTrolleyDatabase_t {
    const uint offsetsAndSize[10];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_shoppingTrolleyDatabase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_shoppingTrolleyDatabase_t qt_meta_stringdata_shoppingTrolleyDatabase = {
    {
QT_MOC_LITERAL(0, 23), // "shoppingTrolleyDatabase"
QT_MOC_LITERAL(24, 11), // "sendTrolley"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 15), // "shoppingTrolley"
QT_MOC_LITERAL(53, 10) // "tmpTrolley"

    },
    "shoppingTrolleyDatabase\0sendTrolley\0"
    "\0shoppingTrolley\0tmpTrolley"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_shoppingTrolleyDatabase[] = {

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

void shoppingTrolleyDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<shoppingTrolleyDatabase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendTrolley((*reinterpret_cast< shoppingTrolley(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (shoppingTrolleyDatabase::*)(shoppingTrolley );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&shoppingTrolleyDatabase::sendTrolley)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject shoppingTrolleyDatabase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_shoppingTrolleyDatabase.offsetsAndSize,
    qt_meta_data_shoppingTrolleyDatabase,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_shoppingTrolleyDatabase_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<shoppingTrolley, std::false_type>



>,
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
void shoppingTrolleyDatabase::sendTrolley(shoppingTrolley _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

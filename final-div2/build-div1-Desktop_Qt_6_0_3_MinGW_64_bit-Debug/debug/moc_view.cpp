/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../div1/view.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_orderWindow_t {
    const uint offsetsAndSize[8];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_orderWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_orderWindow_t qt_meta_stringdata_orderWindow = {
    {
QT_MOC_LITERAL(0, 11), // "orderWindow"
QT_MOC_LITERAL(12, 7), // "sendPay"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 14) // "on_pay_clicked"

    },
    "orderWindow\0sendPay\0\0on_pay_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_orderWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x08,    1 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void orderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<orderWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendPay(); break;
        case 1: _t->on_pay_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (orderWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&orderWindow::sendPay)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject orderWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_orderWindow.offsetsAndSize,
    qt_meta_data_orderWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_orderWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *orderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *orderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_orderWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int orderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void orderWindow::sendPay()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_userLogin_t {
    const uint offsetsAndSize[12];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userLogin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userLogin_t qt_meta_stringdata_userLogin = {
    {
QT_MOC_LITERAL(0, 9), // "userLogin"
QT_MOC_LITERAL(10, 20), // "registerButton_click"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 18), // "confirmLogin_click"
QT_MOC_LITERAL(51, 25), // "on_confirm_button_clicked"
QT_MOC_LITERAL(77, 26) // "on_register_button_clicked"

    },
    "userLogin\0registerButton_click\0\0"
    "confirmLogin_click\0on_confirm_button_clicked\0"
    "on_register_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userLogin[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    0 /* Public */,
       3,    2,   39,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   44,    2, 0x08,    4 /* Private */,
       5,    0,   45,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void userLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userLogin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->registerButton_click(); break;
        case 1: _t->confirmLogin_click((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->on_confirm_button_clicked(); break;
        case 3: _t->on_register_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userLogin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userLogin::registerButton_click)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (userLogin::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userLogin::confirmLogin_click)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject userLogin::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_userLogin.offsetsAndSize,
    qt_meta_data_userLogin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userLogin_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *userLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userLogin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void userLogin::registerButton_click()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void userLogin::confirmLogin_click(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_userRegister_t {
    const uint offsetsAndSize[8];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userRegister_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userRegister_t qt_meta_stringdata_userRegister = {
    {
QT_MOC_LITERAL(0, 12), // "userRegister"
QT_MOC_LITERAL(13, 14), // "handleRegister"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 26) // "on_register_button_clicked"

    },
    "userRegister\0handleRegister\0\0"
    "on_register_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userRegister[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void userRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userRegister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleRegister((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->on_register_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userRegister::*)(QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userRegister::handleRegister)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject userRegister::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_userRegister.offsetsAndSize,
    qt_meta_data_userRegister,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userRegister_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *userRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userRegister.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void userRegister::handleRegister(QString _t1, QString _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_mainWindow_t {
    const uint offsetsAndSize[24];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mainWindow_t qt_meta_stringdata_mainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "mainWindow"
QT_MOC_LITERAL(11, 16), // "userButton_click"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 11), // "updataLimit"
QT_MOC_LITERAL(41, 10), // "updataPage"
QT_MOC_LITERAL(52, 8), // "shopping"
QT_MOC_LITERAL(61, 21), // "on_userButton_clicked"
QT_MOC_LITERAL(83, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(105, 19), // "on_nextPage_clicked"
QT_MOC_LITERAL(125, 19), // "on_lastPage_clicked"
QT_MOC_LITERAL(145, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(169, 9) // "buyButton"

    },
    "mainWindow\0userButton_click\0\0updataLimit\0"
    "updataPage\0shopping\0on_userButton_clicked\0"
    "on_pushButton_clicked\0on_nextPage_clicked\0"
    "on_lastPage_clicked\0on_pushButton_2_clicked\0"
    "buyButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    0 /* Public */,
       3,    2,   75,    2, 0x06,    1 /* Public */,
       4,    1,   80,    2, 0x06,    4 /* Public */,
       5,    3,   83,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   90,    2, 0x08,   10 /* Private */,
       7,    0,   91,    2, 0x08,   11 /* Private */,
       8,    0,   92,    2, 0x08,   12 /* Private */,
       9,    0,   93,    2, 0x08,   13 /* Private */,
      10,    0,   94,    2, 0x08,   14 /* Private */,
      11,    0,   95,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userButton_click(); break;
        case 1: _t->updataLimit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->updataPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->shopping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->on_userButton_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_nextPage_clicked(); break;
        case 7: _t->on_lastPage_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->buyButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::userButton_click)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mainWindow::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::updataLimit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::updataPage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mainWindow::*)(QString , QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::shopping)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject mainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_mainWindow.offsetsAndSize,
    qt_meta_data_mainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mainWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void mainWindow::userButton_click()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mainWindow::updataLimit(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mainWindow::updataPage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mainWindow::shopping(QString _t1, QString _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_userWindow_t {
    const uint offsetsAndSize[54];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userWindow_t qt_meta_stringdata_userWindow = {
    {
QT_MOC_LITERAL(0, 10), // "userWindow"
QT_MOC_LITERAL(11, 14), // "changePassword"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 6), // "logout"
QT_MOC_LITERAL(34, 5), // "topUp"
QT_MOC_LITERAL(40, 6), // "tmoney"
QT_MOC_LITERAL(47, 10), // "openNewCom"
QT_MOC_LITERAL(58, 14), // "updataUserPage"
QT_MOC_LITERAL(73, 11), // "sendEditCom"
QT_MOC_LITERAL(85, 14), // "setAllDiscount"
QT_MOC_LITERAL(100, 12), // "sendWatchCom"
QT_MOC_LITERAL(113, 10), // "sendDelCom"
QT_MOC_LITERAL(124, 15), // "sendCreateOrder"
QT_MOC_LITERAL(140, 16), // "vector<orderCom>"
QT_MOC_LITERAL(157, 10), // "showUnpaid"
QT_MOC_LITERAL(168, 24), // "on_changeConfirm_clicked"
QT_MOC_LITERAL(193, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(217, 23), // "on_topUpComfirm_clicked"
QT_MOC_LITERAL(241, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(265, 19), // "on_lastPage_clicked"
QT_MOC_LITERAL(285, 19), // "on_nextPage_clicked"
QT_MOC_LITERAL(305, 7), // "editCom"
QT_MOC_LITERAL(313, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(335, 8), // "watchCom"
QT_MOC_LITERAL(344, 9), // "deleteCom"
QT_MOC_LITERAL(354, 20), // "on_makeOrder_clicked"
QT_MOC_LITERAL(375, 21) // "on_unPaidShow_clicked"

    },
    "userWindow\0changePassword\0\0logout\0"
    "topUp\0tmoney\0openNewCom\0updataUserPage\0"
    "sendEditCom\0setAllDiscount\0sendWatchCom\0"
    "sendDelCom\0sendCreateOrder\0vector<orderCom>\0"
    "showUnpaid\0on_changeConfirm_clicked\0"
    "on_pushButton_2_clicked\0on_topUpComfirm_clicked\0"
    "on_pushButton_3_clicked\0on_lastPage_clicked\0"
    "on_nextPage_clicked\0editCom\0"
    "on_pushButton_clicked\0watchCom\0deleteCom\0"
    "on_makeOrder_clicked\0on_unPaidShow_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x06,    0 /* Public */,
       3,    0,  155,    2, 0x06,    2 /* Public */,
       4,    1,  156,    2, 0x06,    3 /* Public */,
       6,    0,  159,    2, 0x06,    5 /* Public */,
       7,    1,  160,    2, 0x06,    6 /* Public */,
       8,    1,  163,    2, 0x06,    8 /* Public */,
       9,    3,  166,    2, 0x06,   10 /* Public */,
      10,    2,  173,    2, 0x06,   14 /* Public */,
      11,    1,  178,    2, 0x06,   17 /* Public */,
      12,    1,  181,    2, 0x06,   19 /* Public */,
      14,    0,  184,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  185,    2, 0x08,   22 /* Private */,
      16,    0,  186,    2, 0x08,   23 /* Private */,
      17,    0,  187,    2, 0x08,   24 /* Private */,
      18,    0,  188,    2, 0x08,   25 /* Private */,
      19,    0,  189,    2, 0x08,   26 /* Private */,
      20,    0,  190,    2, 0x08,   27 /* Private */,
      21,    0,  191,    2, 0x08,   28 /* Private */,
      22,    0,  192,    2, 0x08,   29 /* Private */,
      23,    0,  193,    2, 0x08,   30 /* Private */,
      24,    0,  194,    2, 0x08,   31 /* Private */,
      25,    0,  195,    2, 0x08,   32 /* Private */,
      26,    0,  196,    2, 0x08,   33 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void userWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changePassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->logout(); break;
        case 2: _t->topUp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->openNewCom(); break;
        case 4: _t->updataUserPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sendEditCom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setAllDiscount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->sendWatchCom((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->sendDelCom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->sendCreateOrder((*reinterpret_cast< vector<orderCom>(*)>(_a[1]))); break;
        case 10: _t->showUnpaid(); break;
        case 11: _t->on_changeConfirm_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_topUpComfirm_clicked(); break;
        case 14: _t->on_pushButton_3_clicked(); break;
        case 15: _t->on_lastPage_clicked(); break;
        case 16: _t->on_nextPage_clicked(); break;
        case 17: _t->editCom(); break;
        case 18: _t->on_pushButton_clicked(); break;
        case 19: _t->watchCom(); break;
        case 20: _t->deleteCom(); break;
        case 21: _t->on_makeOrder_clicked(); break;
        case 22: _t->on_unPaidShow_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (userWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::changePassword)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (userWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::logout)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::topUp)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (userWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::openNewCom)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::updataUserPage)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::sendEditCom)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::setAllDiscount)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::sendWatchCom)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::sendDelCom)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (userWindow::*)(vector<orderCom> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::sendCreateOrder)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (userWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&userWindow::showUnpaid)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject userWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_userWindow.offsetsAndSize,
    qt_meta_data_userWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<vector<orderCom>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *userWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void userWindow::changePassword(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void userWindow::logout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void userWindow::topUp(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void userWindow::openNewCom()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void userWindow::updataUserPage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void userWindow::sendEditCom(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void userWindow::setAllDiscount(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void userWindow::sendWatchCom(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void userWindow::sendDelCom(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void userWindow::sendCreateOrder(vector<orderCom> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void userWindow::showUnpaid()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_commodityWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_commodityWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_commodityWindow_t qt_meta_stringdata_commodityWindow = {
    {
QT_MOC_LITERAL(0, 15), // "commodityWindow"
QT_MOC_LITERAL(16, 10), // "pushNewCom"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 4), // "name"
QT_MOC_LITERAL(33, 11), // "description"
QT_MOC_LITERAL(45, 4), // "type"
QT_MOC_LITERAL(50, 5), // "extra"
QT_MOC_LITERAL(56, 5), // "price"
QT_MOC_LITERAL(62, 3), // "num"
QT_MOC_LITERAL(66, 8), // "discount"
QT_MOC_LITERAL(75, 13), // "sendUpdataCom"
QT_MOC_LITERAL(89, 30), // "on_comboBox_currentTextChanged"
QT_MOC_LITERAL(120, 4), // "arg1"
QT_MOC_LITERAL(125, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(149, 24), // "on_discount_valueChanged"
QT_MOC_LITERAL(174, 21) // "on_price_valueChanged"

    },
    "commodityWindow\0pushNewCom\0\0name\0"
    "description\0type\0extra\0price\0num\0"
    "discount\0sendUpdataCom\0"
    "on_comboBox_currentTextChanged\0arg1\0"
    "on_pushButton_4_clicked\0"
    "on_discount_valueChanged\0on_price_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commodityWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    7,   50,    2, 0x06,    0 /* Public */,
      10,    7,   65,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   80,    2, 0x08,   16 /* Private */,
      13,    0,   83,    2, 0x08,   18 /* Private */,
      14,    1,   84,    2, 0x08,   19 /* Private */,
      15,    1,   87,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Double,   12,

       0        // eod
};

void commodityWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commodityWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pushNewCom((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 1: _t->sendUpdataCom((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 2: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_discount_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_price_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (commodityWindow::*)(QString , QString , QString , QString , double , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&commodityWindow::pushNewCom)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (commodityWindow::*)(QString , QString , QString , QString , double , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&commodityWindow::sendUpdataCom)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject commodityWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_commodityWindow.offsetsAndSize,
    qt_meta_data_commodityWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_commodityWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *commodityWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commodityWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commodityWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int commodityWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void commodityWindow::pushNewCom(QString _t1, QString _t2, QString _t3, QString _t4, double _t5, int _t6, int _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void commodityWindow::sendUpdataCom(QString _t1, QString _t2, QString _t3, QString _t4, double _t5, int _t6, int _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

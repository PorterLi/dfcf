/****************************************************************************
** Meta object code from reading C++ file 'usercheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usercheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usercheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserCheck_t {
    QByteArrayData data[11];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserCheck_t qt_meta_stringdata_UserCheck = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UserCheck"
QT_MOC_LITERAL(1, 10, 11), // "userLogined"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 30), // "on_pushButtonExchenge1_clicked"
QT_MOC_LITERAL(4, 54, 30), // "on_pushButtonExchange2_clicked"
QT_MOC_LITERAL(5, 85, 26), // "on_pushButtonLogin_clicked"
QT_MOC_LITERAL(6, 112, 32), // "on_pushButtonLoginCancel_clicked"
QT_MOC_LITERAL(7, 145, 35), // "on_pushButtonRegisterCancel_c..."
QT_MOC_LITERAL(8, 181, 29), // "on_pushButtonRegister_clicked"
QT_MOC_LITERAL(9, 211, 33), // "on_lineEditPassword_returnPre..."
QT_MOC_LITERAL(10, 245, 34) // "on_lineEditPassword3_returnPr..."

    },
    "UserCheck\0userLogined\0\0"
    "on_pushButtonExchenge1_clicked\0"
    "on_pushButtonExchange2_clicked\0"
    "on_pushButtonLogin_clicked\0"
    "on_pushButtonLoginCancel_clicked\0"
    "on_pushButtonRegisterCancel_clicked\0"
    "on_pushButtonRegister_clicked\0"
    "on_lineEditPassword_returnPressed\0"
    "on_lineEditPassword3_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserCheck[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   62,    2, 0x08 /* Private */,
       4,    0,   63,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
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

void UserCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserCheck *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userLogined((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonExchenge1_clicked(); break;
        case 2: _t->on_pushButtonExchange2_clicked(); break;
        case 3: _t->on_pushButtonLogin_clicked(); break;
        case 4: _t->on_pushButtonLoginCancel_clicked(); break;
        case 5: _t->on_pushButtonRegisterCancel_clicked(); break;
        case 6: _t->on_pushButtonRegister_clicked(); break;
        case 7: _t->on_lineEditPassword_returnPressed(); break;
        case 8: _t->on_lineEditPassword3_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserCheck::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserCheck::userLogined)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserCheck::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_UserCheck.data,
    qt_meta_data_UserCheck,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserCheck.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UserCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void UserCheck::userLogined(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

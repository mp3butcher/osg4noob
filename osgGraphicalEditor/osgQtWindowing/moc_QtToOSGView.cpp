/****************************************************************************
** Meta object code from reading C++ file 'QtToOSGView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QtToOSGView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtToOSGView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtToOSGView_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtToOSGView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtToOSGView_t qt_meta_stringdata_QtToOSGView = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QtToOSGView"

    },
    "QtToOSGView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtToOSGView[] = {

 // content:
       7,       // revision
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

void QtToOSGView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtToOSGView::staticMetaObject = {
    { &QQuickView::staticMetaObject, qt_meta_stringdata_QtToOSGView.data,
      qt_meta_data_QtToOSGView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtToOSGView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtToOSGView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtToOSGView.stringdata0))
        return static_cast<void*>(const_cast< QtToOSGView*>(this));
    return QQuickView::qt_metacast(_clname);
}

int QtToOSGView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QtQtToOSGView_t {
    QByteArrayData data[8];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtQtToOSGView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtQtToOSGView_t qt_meta_stringdata_QtQtToOSGView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QtQtToOSGView"
QT_MOC_LITERAL(1, 14, 4), // "pate"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "Qt::WindowState"
QT_MOC_LITERAL(4, 36, 11), // "windowState"
QT_MOC_LITERAL(5, 48, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 64, 11), // "newGeometry"
QT_MOC_LITERAL(7, 76, 11) // "oldGeometry"

    },
    "QtQtToOSGView\0pate\0\0Qt::WindowState\0"
    "windowState\0geometryChanged\0newGeometry\0"
    "oldGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtQtToOSGView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    2,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QRectF,    6,    7,

       0        // eod
};

void QtQtToOSGView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtQtToOSGView *_t = static_cast<QtQtToOSGView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pate((*reinterpret_cast< Qt::WindowState(*)>(_a[1]))); break;
        case 1: _t->geometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QtQtToOSGView::staticMetaObject = {
    { &QtToOSGView::staticMetaObject, qt_meta_stringdata_QtQtToOSGView.data,
      qt_meta_data_QtQtToOSGView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtQtToOSGView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtQtToOSGView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtQtToOSGView.stringdata0))
        return static_cast<void*>(const_cast< QtQtToOSGView*>(this));
    return QtToOSGView::qt_metacast(_clname);
}

int QtQtToOSGView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtToOSGView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

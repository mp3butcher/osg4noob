/****************************************************************************
** Meta object code from reading C++ file 'colorcomponents.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "colorcomponents.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorcomponents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ColorComponents_t {
    QByteArrayData data[26];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorComponents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorComponents_t qt_meta_stringdata_ColorComponents = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ColorComponents"
QT_MOC_LITERAL(1, 16, 12), // "alphaChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "redChanged"
QT_MOC_LITERAL(4, 41, 11), // "blueChanged"
QT_MOC_LITERAL(5, 53, 12), // "greenChanged"
QT_MOC_LITERAL(6, 66, 10), // "hueChanged"
QT_MOC_LITERAL(7, 77, 17), // "saturationChanged"
QT_MOC_LITERAL(8, 95, 12), // "valueChanged"
QT_MOC_LITERAL(9, 108, 12), // "colorChanged"
QT_MOC_LITERAL(10, 121, 12), // "isValidColor"
QT_MOC_LITERAL(11, 134, 4), // "name"
QT_MOC_LITERAL(12, 139, 4), // "hsva"
QT_MOC_LITERAL(13, 144, 1), // "h"
QT_MOC_LITERAL(14, 146, 1), // "s"
QT_MOC_LITERAL(15, 148, 1), // "v"
QT_MOC_LITERAL(16, 150, 1), // "a"
QT_MOC_LITERAL(17, 152, 5), // "alpha"
QT_MOC_LITERAL(18, 158, 3), // "red"
QT_MOC_LITERAL(19, 162, 4), // "blue"
QT_MOC_LITERAL(20, 167, 5), // "green"
QT_MOC_LITERAL(21, 173, 3), // "hue"
QT_MOC_LITERAL(22, 177, 10), // "saturation"
QT_MOC_LITERAL(23, 188, 5), // "value"
QT_MOC_LITERAL(24, 194, 5), // "color"
QT_MOC_LITERAL(25, 200, 8) // "fullName"

    },
    "ColorComponents\0alphaChanged\0\0redChanged\0"
    "blueChanged\0greenChanged\0hueChanged\0"
    "saturationChanged\0valueChanged\0"
    "colorChanged\0isValidColor\0name\0hsva\0"
    "h\0s\0v\0a\0alpha\0red\0blue\0green\0hue\0"
    "saturation\0value\0color\0fullName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorComponents[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       9,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   77,    2, 0x02 /* Public */,
      12,    4,   80,    2, 0x02 /* Public */,
      12,    3,   89,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,   11,
    QMetaType::QColor, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   13,   14,   15,   16,
    QMetaType::QColor, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   13,   14,   15,

 // properties: name, type, flags
      17, QMetaType::QReal, 0x00495103,
      18, QMetaType::QReal, 0x00495103,
      19, QMetaType::QReal, 0x00495103,
      20, QMetaType::QReal, 0x00495103,
      21, QMetaType::QReal, 0x00495103,
      22, QMetaType::QReal, 0x00495103,
      23, QMetaType::QReal, 0x00495103,
      24, QMetaType::QColor, 0x00495103,
      25, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       7,

       0        // eod
};

void ColorComponents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorComponents *_t = static_cast<ColorComponents *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->alphaChanged(); break;
        case 1: _t->redChanged(); break;
        case 2: _t->blueChanged(); break;
        case 3: _t->greenChanged(); break;
        case 4: _t->hueChanged(); break;
        case 5: _t->saturationChanged(); break;
        case 6: _t->valueChanged(); break;
        case 7: _t->colorChanged(); break;
        case 8: { bool _r = _t->isValidColor((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QColor _r = _t->hsva((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 10: { QColor _r = _t->hsva((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::alphaChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::redChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::blueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::greenChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::hueChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::saturationChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::valueChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (ColorComponents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorComponents::colorChanged)) {
                *result = 7;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ColorComponents *_t = static_cast<ColorComponents *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->alpha(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->red(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->blue(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->green(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->hue(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->saturation(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->fullName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ColorComponents *_t = static_cast<ColorComponents *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAlpha(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setRed(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setBlue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setGreen(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setHue(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ColorComponents::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ColorComponents.data,
      qt_meta_data_ColorComponents,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorComponents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorComponents::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorComponents.stringdata0))
        return static_cast<void*>(const_cast< ColorComponents*>(this));
    return QObject::qt_metacast(_clname);
}

int ColorComponents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColorComponents::alphaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ColorComponents::redChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ColorComponents::blueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ColorComponents::greenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ColorComponents::hueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ColorComponents::saturationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void ColorComponents::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void ColorComponents::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

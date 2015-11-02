/****************************************************************************
** Meta object code from reading C++ file 'Texture2D_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Texture2D_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Texture2D_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLTexture2D_t {
    QByteArrayData data[19];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLTexture2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLTexture2D_t qt_meta_stringdata_osg__QMLTexture2D = {
    {
QT_MOC_LITERAL(0, 0, 17), // "osg::QMLTexture2D"
QT_MOC_LITERAL(1, 18, 13), // "wrap_sChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "wrap_tChanged"
QT_MOC_LITERAL(4, 47, 18), // "bordercolorChanged"
QT_MOC_LITERAL(5, 66, 18), // "borderwidthChanged"
QT_MOC_LITERAL(6, 85, 15), // "filenameChanged"
QT_MOC_LITERAL(7, 101, 14), // "qtimageChanged"
QT_MOC_LITERAL(8, 116, 11), // "updateModel"
QT_MOC_LITERAL(9, 128, 13), // "addToStateSet"
QT_MOC_LITERAL(10, 142, 8), // "QQModel*"
QT_MOC_LITERAL(11, 151, 14), // "parentQQQModel"
QT_MOC_LITERAL(12, 166, 18), // "removeFromStateSet"
QT_MOC_LITERAL(13, 185, 11), // "bordercolor"
QT_MOC_LITERAL(14, 197, 11), // "borderwidth"
QT_MOC_LITERAL(15, 209, 6), // "wrap_s"
QT_MOC_LITERAL(16, 216, 6), // "wrap_t"
QT_MOC_LITERAL(17, 223, 7), // "qtimage"
QT_MOC_LITERAL(18, 231, 8) // "filename"

    },
    "osg::QMLTexture2D\0wrap_sChanged\0\0"
    "wrap_tChanged\0bordercolorChanged\0"
    "borderwidthChanged\0filenameChanged\0"
    "qtimageChanged\0updateModel\0addToStateSet\0"
    "QQModel*\0parentQQQModel\0removeFromStateSet\0"
    "bordercolor\0borderwidth\0wrap_s\0wrap_t\0"
    "qtimage\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLTexture2D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       6,    1,   71,    2, 0x06 /* Public */,
       7,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   78,    2, 0x02 /* Public */,
      12,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

 // properties: name, type, flags
      13, QMetaType::QColor, 0x00495003,
      14, QMetaType::Int, 0x00495003,
      15, QMetaType::QString, 0x00495003,
      16, QMetaType::QString, 0x00495003,
      17, QMetaType::QString, 0x00495003,
      18, QMetaType::QUrl, 0x00495003,

 // properties: notify_signal_id
       2,
       3,
       0,
       1,
       5,
       4,

       0        // eod
};

void osg::QMLTexture2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLTexture2D *_t = static_cast<QMLTexture2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wrap_sChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->wrap_tChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->bordercolorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->borderwidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->filenameChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 5: _t->qtimageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->updateModel(); break;
        case 7: _t->addToStateSet((*reinterpret_cast< QQModel*(*)>(_a[1]))); break;
        case 8: _t->removeFromStateSet((*reinterpret_cast< QQModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLTexture2D::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLTexture2D::wrap_sChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLTexture2D::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLTexture2D::wrap_tChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLTexture2D::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLTexture2D::bordercolorChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLTexture2D::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLTexture2D::borderwidthChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QMLTexture2D::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLTexture2D::filenameChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QMLTexture2D::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLTexture2D::qtimageChanged)) {
                *result = 5;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLTexture2D *_t = static_cast<QMLTexture2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getbordercolor(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getborderwidth(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getwrap_s(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getwrap_t(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getqtimage(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->getfilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLTexture2D *_t = static_cast<QMLTexture2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setbordercolor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setborderwidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setwrap_s(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setwrap_t(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setqtimage(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setfilename(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLTexture2D::staticMetaObject = {
    { &QReflect_Texture2D::staticMetaObject, qt_meta_stringdata_osg__QMLTexture2D.data,
      qt_meta_data_osg__QMLTexture2D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLTexture2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLTexture2D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLTexture2D.stringdata0))
        return static_cast<void*>(const_cast< QMLTexture2D*>(this));
    return QReflect_Texture2D::qt_metacast(_clname);
}

int osg::QMLTexture2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Texture2D::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLTexture2D::wrap_sChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLTexture2D::wrap_tChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLTexture2D::bordercolorChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLTexture2D::borderwidthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QMLTexture2D::filenameChanged(QUrl _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void osg::QMLTexture2D::qtimageChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

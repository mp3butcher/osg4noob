/****************************************************************************
** Meta object code from reading C++ file 'Image_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Image_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Image_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLImage_t {
    QByteArrayData data[17];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLImage_t qt_meta_stringdata_osg__QMLImage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "osg::QMLImage"
QT_MOC_LITERAL(1, 14, 18), // "bordercolorChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "borderwidthChanged"
QT_MOC_LITERAL(4, 53, 15), // "filenameChanged"
QT_MOC_LITERAL(5, 69, 14), // "qtimageChanged"
QT_MOC_LITERAL(6, 84, 28), // "internalTextureFormatChanged"
QT_MOC_LITERAL(7, 113, 11), // "updateModel"
QT_MOC_LITERAL(8, 125, 13), // "allocateImage"
QT_MOC_LITERAL(9, 139, 1), // "w"
QT_MOC_LITERAL(10, 141, 1), // "h"
QT_MOC_LITERAL(11, 143, 1), // "d"
QT_MOC_LITERAL(12, 145, 11), // "writeToFile"
QT_MOC_LITERAL(13, 157, 8), // "filename"
QT_MOC_LITERAL(14, 166, 7), // "options"
QT_MOC_LITERAL(15, 174, 7), // "qtimage"
QT_MOC_LITERAL(16, 182, 21) // "internalTextureFormat"

    },
    "osg::QMLImage\0bordercolorChanged\0\0"
    "borderwidthChanged\0filenameChanged\0"
    "qtimageChanged\0internalTextureFormatChanged\0"
    "updateModel\0allocateImage\0w\0h\0d\0"
    "writeToFile\0filename\0options\0qtimage\0"
    "internalTextureFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       6,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    5,   75,    2, 0x02 /* Public */,
      12,    2,   86,    2, 0x02 /* Public */,
      12,    1,   91,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    9,   10,   11,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00495003,
      13, QMetaType::QUrl, 0x00495003,
      16, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       3,
       2,
       4,

       0        // eod
};

void osg::QMLImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLImage *_t = static_cast<QMLImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bordercolorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->borderwidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->filenameChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 3: _t->qtimageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->internalTextureFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateModel(); break;
        case 6: _t->allocateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 7: _t->writeToFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->writeToFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLImage::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLImage::bordercolorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLImage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLImage::borderwidthChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLImage::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLImage::filenameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLImage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLImage::qtimageChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QMLImage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLImage::internalTextureFormatChanged)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLImage *_t = static_cast<QMLImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getqtimage(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->getfilename(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->internalTextureFormat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLImage *_t = static_cast<QMLImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setqtimage(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setfilename(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->internalTextureFormat(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLImage::staticMetaObject = {
    { &QReflect_Image::staticMetaObject, qt_meta_stringdata_osg__QMLImage.data,
      qt_meta_data_osg__QMLImage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLImage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLImage.stringdata0))
        return static_cast<void*>(const_cast< QMLImage*>(this));
    return QReflect_Image::qt_metacast(_clname);
}

int osg::QMLImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Image::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLImage::bordercolorChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLImage::borderwidthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLImage::filenameChanged(QUrl _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLImage::qtimageChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QMLImage::internalTextureFormatChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

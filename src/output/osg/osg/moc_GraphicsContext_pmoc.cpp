/****************************************************************************
** Meta object code from reading C++ file 'GraphicsContext_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GraphicsContext_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsContext_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_SyncSwapBuffersCallback_t {
    QByteArrayData data[5];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_SyncSwapBuffersCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_SyncSwapBuffersCallback_t qt_meta_stringdata_osg__QReflect_SyncSwapBuffersCallback = {
    {
QT_MOC_LITERAL(0, 0, 37), // "osg::QReflect_SyncSwapBuffers..."
QT_MOC_LITERAL(1, 38, 11), // "updateModel"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 25), // "swapBuffersImplementation"
QT_MOC_LITERAL(4, 77, 30) // "osg::QReflect_GraphicsContext*"

    },
    "osg::QReflect_SyncSwapBuffersCallback\0"
    "updateModel\0\0swapBuffersImplementation\0"
    "osg::QReflect_GraphicsContext*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_SyncSwapBuffersCallback[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_SyncSwapBuffersCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_SyncSwapBuffersCallback *_t = static_cast<QReflect_SyncSwapBuffersCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->swapBuffersImplementation((*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_GraphicsContext* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_SyncSwapBuffersCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_SyncSwapBuffersCallback.data,
      qt_meta_data_osg__QReflect_SyncSwapBuffersCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_SyncSwapBuffersCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_SyncSwapBuffersCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_SyncSwapBuffersCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_SyncSwapBuffersCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_SyncSwapBuffersCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_GraphicsContext_t {
    QByteArrayData data[58];
    char stringdata0[1007];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GraphicsContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GraphicsContext_t qt_meta_stringdata_osg__QReflect_GraphicsContext = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QReflect_GraphicsContext"
QT_MOC_LITERAL(1, 30, 17), // "CollectionChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "GraphicsThreadChanged"
QT_MOC_LITERAL(4, 71, 35), // "const osg::QReflect_GraphicsT..."
QT_MOC_LITERAL(5, 107, 12), // "StateChanged"
QT_MOC_LITERAL(6, 120, 26), // "const osg::QReflect_State*"
QT_MOC_LITERAL(7, 147, 11), // "updateModel"
QT_MOC_LITERAL(8, 159, 15), // "getDefaultFboId"
QT_MOC_LITERAL(9, 175, 6), // "GLuint"
QT_MOC_LITERAL(10, 182, 9), // "isCurrent"
QT_MOC_LITERAL(11, 192, 10), // "isRealized"
QT_MOC_LITERAL(12, 203, 12), // "isSameKindAs"
QT_MOC_LITERAL(13, 216, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(14, 238, 18), // "makeContextCurrent"
QT_MOC_LITERAL(15, 257, 30), // "osg::QReflect_GraphicsContext*"
QT_MOC_LITERAL(16, 288, 11), // "makeCurrent"
QT_MOC_LITERAL(17, 300, 7), // "realize"
QT_MOC_LITERAL(18, 308, 14), // "releaseContext"
QT_MOC_LITERAL(19, 323, 21), // "getTimeSinceLastClear"
QT_MOC_LITERAL(20, 345, 17), // "getGraphicsThread"
QT_MOC_LITERAL(21, 363, 29), // "osg::QReflect_GraphicsThread*"
QT_MOC_LITERAL(22, 393, 8), // "getState"
QT_MOC_LITERAL(23, 402, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(24, 423, 18), // "createNewContextID"
QT_MOC_LITERAL(25, 442, 15), // "getMaxContextID"
QT_MOC_LITERAL(26, 458, 9), // "className"
QT_MOC_LITERAL(27, 468, 11), // "const char*"
QT_MOC_LITERAL(28, 480, 11), // "libraryName"
QT_MOC_LITERAL(29, 492, 17), // "getCompileContext"
QT_MOC_LITERAL(30, 510, 25), // "getOrCreateCompileContext"
QT_MOC_LITERAL(31, 536, 19), // "getCurrentOperation"
QT_MOC_LITERAL(32, 556, 24), // "osg::QReflect_Operation*"
QT_MOC_LITERAL(33, 581, 18), // "getOperationsBlock"
QT_MOC_LITERAL(34, 600, 23), // "osg::QReflect_RefBlock*"
QT_MOC_LITERAL(35, 624, 3), // "add"
QT_MOC_LITERAL(36, 628, 3), // "par"
QT_MOC_LITERAL(37, 632, 5), // "clear"
QT_MOC_LITERAL(38, 638, 5), // "close"
QT_MOC_LITERAL(39, 644, 20), // "createGraphicsThread"
QT_MOC_LITERAL(40, 665, 28), // "decrementContextIDUsageCount"
QT_MOC_LITERAL(41, 694, 28), // "incrementContextIDUsageCount"
QT_MOC_LITERAL(42, 723, 6), // "remove"
QT_MOC_LITERAL(43, 730, 19), // "removeAllOperations"
QT_MOC_LITERAL(44, 750, 7), // "resized"
QT_MOC_LITERAL(45, 758, 21), // "resizedImplementation"
QT_MOC_LITERAL(46, 780, 13), // "runOperations"
QT_MOC_LITERAL(47, 794, 13), // "setClearColor"
QT_MOC_LITERAL(48, 808, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(49, 829, 17), // "setCompileContext"
QT_MOC_LITERAL(50, 847, 15), // "setDefaultFboId"
QT_MOC_LITERAL(51, 863, 11), // "swapBuffers"
QT_MOC_LITERAL(52, 875, 34), // "swapBuffersCallbackOrImplemen..."
QT_MOC_LITERAL(53, 910, 16), // "pmoc_reverse_add"
QT_MOC_LITERAL(54, 927, 30), // "pmoc_reverse_setGraphicsThread"
QT_MOC_LITERAL(55, 958, 21), // "pmoc_reverse_setState"
QT_MOC_LITERAL(56, 980, 17), // "setGraphicsThread"
QT_MOC_LITERAL(57, 998, 8) // "setState"

    },
    "osg::QReflect_GraphicsContext\0"
    "CollectionChanged\0\0GraphicsThreadChanged\0"
    "const osg::QReflect_GraphicsThread*\0"
    "StateChanged\0const osg::QReflect_State*\0"
    "updateModel\0getDefaultFboId\0GLuint\0"
    "isCurrent\0isRealized\0isSameKindAs\0"
    "osg::QReflect_Object*\0makeContextCurrent\0"
    "osg::QReflect_GraphicsContext*\0"
    "makeCurrent\0realize\0releaseContext\0"
    "getTimeSinceLastClear\0getGraphicsThread\0"
    "osg::QReflect_GraphicsThread*\0getState\0"
    "osg::QReflect_State*\0createNewContextID\0"
    "getMaxContextID\0className\0const char*\0"
    "libraryName\0getCompileContext\0"
    "getOrCreateCompileContext\0getCurrentOperation\0"
    "osg::QReflect_Operation*\0getOperationsBlock\0"
    "osg::QReflect_RefBlock*\0add\0par\0clear\0"
    "close\0createGraphicsThread\0"
    "decrementContextIDUsageCount\0"
    "incrementContextIDUsageCount\0remove\0"
    "removeAllOperations\0resized\0"
    "resizedImplementation\0runOperations\0"
    "setClearColor\0osg::QReflect_Vec4f*\0"
    "setCompileContext\0setDefaultFboId\0"
    "swapBuffers\0swapBuffersCallbackOrImplemenation\0"
    "pmoc_reverse_add\0pmoc_reverse_setGraphicsThread\0"
    "pmoc_reverse_setState\0setGraphicsThread\0"
    "setState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GraphicsContext[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x06 /* Public */,
       3,    1,  245,    2, 0x06 /* Public */,
       5,    1,  248,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  251,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,  252,    2, 0x02 /* Public */,
      10,    0,  253,    2, 0x02 /* Public */,
      11,    0,  254,    2, 0x02 /* Public */,
      12,    1,  255,    2, 0x02 /* Public */,
      14,    1,  258,    2, 0x02 /* Public */,
      16,    0,  261,    2, 0x02 /* Public */,
      17,    0,  262,    2, 0x02 /* Public */,
      18,    0,  263,    2, 0x02 /* Public */,
      19,    0,  264,    2, 0x02 /* Public */,
      20,    0,  265,    2, 0x02 /* Public */,
      22,    0,  266,    2, 0x02 /* Public */,
      24,    0,  267,    2, 0x02 /* Public */,
      25,    0,  268,    2, 0x02 /* Public */,
      26,    0,  269,    2, 0x02 /* Public */,
      28,    0,  270,    2, 0x02 /* Public */,
      29,    1,  271,    2, 0x02 /* Public */,
      30,    1,  274,    2, 0x02 /* Public */,
      31,    0,  277,    2, 0x02 /* Public */,
      33,    0,  278,    2, 0x02 /* Public */,
      35,    1,  279,    2, 0x02 /* Public */,
      37,    0,  282,    2, 0x02 /* Public */,
      38,    1,  283,    2, 0x02 /* Public */,
      39,    0,  286,    2, 0x02 /* Public */,
      40,    1,  287,    2, 0x02 /* Public */,
      41,    1,  290,    2, 0x02 /* Public */,
      42,    1,  293,    2, 0x02 /* Public */,
      43,    0,  296,    2, 0x02 /* Public */,
      44,    4,  297,    2, 0x02 /* Public */,
      45,    4,  306,    2, 0x02 /* Public */,
      46,    0,  315,    2, 0x02 /* Public */,
      47,    1,  316,    2, 0x02 /* Public */,
      49,    2,  319,    2, 0x02 /* Public */,
      50,    1,  324,    2, 0x02 /* Public */,
      51,    0,  327,    2, 0x02 /* Public */,
      52,    0,  328,    2, 0x02 /* Public */,
      53,    1,  329,    2, 0x02 /* Public */,
      54,    1,  332,    2, 0x02 /* Public */,
      54,    0,  335,    2, 0x22 /* Public | MethodCloned */,
      55,    1,  336,    2, 0x02 /* Public */,
      55,    0,  339,    2, 0x22 /* Public | MethodCloned */,
      56,    1,  340,    2, 0x02 /* Public */,
      57,    1,  343,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 13,    2,
    QMetaType::Bool, 0x80000000 | 15,    2,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Double,
    0x80000000 | 21,
    0x80000000 | 23,
    QMetaType::UInt,
    QMetaType::UInt,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 15, QMetaType::UInt,    2,
    0x80000000 | 15, QMetaType::UInt,    2,
    0x80000000 | 32,
    0x80000000 | 34,
    QMetaType::Void, 0x80000000 | 32,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 15,    2,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   36,
    QMetaType::Void, 0x80000000 | 21,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   36,
    QMetaType::Void, 0x80000000 | 23,   36,

       0        // eod
};

void osg::QReflect_GraphicsContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GraphicsContext *_t = static_cast<QReflect_GraphicsContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CollectionChanged(); break;
        case 1: _t->GraphicsThreadChanged((*reinterpret_cast< const osg::QReflect_GraphicsThread*(*)>(_a[1]))); break;
        case 2: _t->StateChanged((*reinterpret_cast< const osg::QReflect_State*(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { GLuint _r = _t->getDefaultFboId();
            if (_a[0]) *reinterpret_cast< GLuint*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isCurrent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isRealized();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->makeContextCurrent((*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->makeCurrent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->realize();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->releaseContext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { double _r = _t->getTimeSinceLastClear();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 13: { osg::QReflect_GraphicsThread* _r = _t->getGraphicsThread();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsThread**>(_a[0]) = _r; }  break;
        case 14: { osg::QReflect_State* _r = _t->getState();
            if (_a[0]) *reinterpret_cast< osg::QReflect_State**>(_a[0]) = _r; }  break;
        case 15: { uint _r = _t->createNewContextID();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 16: { uint _r = _t->getMaxContextID();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 17: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 18: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 19: { osg::QReflect_GraphicsContext* _r = _t->getCompileContext((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsContext**>(_a[0]) = _r; }  break;
        case 20: { osg::QReflect_GraphicsContext* _r = _t->getOrCreateCompileContext((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsContext**>(_a[0]) = _r; }  break;
        case 21: { osg::QReflect_Operation* _r = _t->getCurrentOperation();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Operation**>(_a[0]) = _r; }  break;
        case 22: { osg::QReflect_RefBlock* _r = _t->getOperationsBlock();
            if (_a[0]) *reinterpret_cast< osg::QReflect_RefBlock**>(_a[0]) = _r; }  break;
        case 23: _t->add((*reinterpret_cast< osg::QReflect_Operation*(*)>(_a[1]))); break;
        case 24: _t->clear(); break;
        case 25: _t->close((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->createGraphicsThread(); break;
        case 27: _t->decrementContextIDUsageCount((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 28: _t->incrementContextIDUsageCount((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 29: _t->remove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->removeAllOperations(); break;
        case 31: _t->resized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 32: _t->resizedImplementation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 33: _t->runOperations(); break;
        case 34: _t->setClearColor((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 35: _t->setCompileContext((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[2]))); break;
        case 36: _t->setDefaultFboId((*reinterpret_cast< GLuint(*)>(_a[1]))); break;
        case 37: _t->swapBuffers(); break;
        case 38: _t->swapBuffersCallbackOrImplemenation(); break;
        case 39: _t->pmoc_reverse_add((*reinterpret_cast< osg::QReflect_Operation*(*)>(_a[1]))); break;
        case 40: _t->pmoc_reverse_setGraphicsThread((*reinterpret_cast< osg::QReflect_GraphicsThread*(*)>(_a[1]))); break;
        case 41: _t->pmoc_reverse_setGraphicsThread(); break;
        case 42: _t->pmoc_reverse_setState((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 43: _t->pmoc_reverse_setState(); break;
        case 44: _t->setGraphicsThread((*reinterpret_cast< osg::QReflect_GraphicsThread*(*)>(_a[1]))); break;
        case 45: _t->setState((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_GraphicsContext* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_GraphicsContext* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_GraphicsContext::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_GraphicsContext::CollectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_GraphicsContext::*_t)(const osg::QReflect_GraphicsThread * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_GraphicsContext::GraphicsThreadChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_GraphicsContext::*_t)(const osg::QReflect_State * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_GraphicsContext::StateChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject osg::QReflect_GraphicsContext::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GraphicsContext.data,
      qt_meta_data_osg__QReflect_GraphicsContext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GraphicsContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GraphicsContext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GraphicsContext.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GraphicsContext*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GraphicsContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_GraphicsContext::CollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void osg::QReflect_GraphicsContext::GraphicsThreadChanged(const osg::QReflect_GraphicsThread * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_GraphicsContext::StateChanged(const osg::QReflect_State * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

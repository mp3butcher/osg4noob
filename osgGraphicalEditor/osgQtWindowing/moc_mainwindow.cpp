/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_findNamedNodeCallback_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_findNamedNodeCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_findNamedNodeCallback_t qt_meta_stringdata_findNamedNodeCallback = {
    {
QT_MOC_LITERAL(0, 0, 21), // "findNamedNodeCallback"
QT_MOC_LITERAL(1, 22, 15), // "namedNodesFound"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "findNamedNodeCallback\0namedNodesFound\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_findNamedNodeCallback[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void findNamedNodeCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        findNamedNodeCallback *_t = static_cast<findNamedNodeCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->namedNodesFound(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (findNamedNodeCallback::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&findNamedNodeCallback::namedNodesFound)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject findNamedNodeCallback::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_findNamedNodeCallback.data,
      qt_meta_data_findNamedNodeCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *findNamedNodeCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *findNamedNodeCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_findNamedNodeCallback.stringdata0))
        return static_cast<void*>(const_cast< findNamedNodeCallback*>(this));
    if (!strcmp(_clname, "osg::NodeCallback"))
        return static_cast< osg::NodeCallback*>(const_cast< findNamedNodeCallback*>(this));
    return QObject::qt_metacast(_clname);
}

int findNamedNodeCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void findNamedNodeCallback::namedNodesFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "makefilePathChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "treeNodeSelected"
QT_MOC_LITERAL(4, 49, 14), // "pmoc::QQModel*"
QT_MOC_LITERAL(5, 64, 12), // "nodeselected"
QT_MOC_LITERAL(6, 77, 12), // "qmodselected"
QT_MOC_LITERAL(7, 90, 11), // "QQuickItem*"
QT_MOC_LITERAL(8, 102, 8), // "wannaDie"
QT_MOC_LITERAL(9, 111, 18), // "checkInjectorLexic"
QT_MOC_LITERAL(10, 130, 16), // "injectJavascript"
QT_MOC_LITERAL(11, 147, 15), // "reparseTreeView"
QT_MOC_LITERAL(12, 163, 16), // "recompilePlugins"
QT_MOC_LITERAL(13, 180, 12), // "newNodeadded"
QT_MOC_LITERAL(14, 193, 1), // "m"
QT_MOC_LITERAL(15, 195, 12), // "setNodeModel"
QT_MOC_LITERAL(16, 208, 12), // "popQuickitem"
QT_MOC_LITERAL(17, 221, 14), // "selectedStatus"
QT_MOC_LITERAL(18, 236, 12), // "copiedStatus"
QT_MOC_LITERAL(19, 249, 12), // "cuttedStatus"
QT_MOC_LITERAL(20, 262, 12), // "pastedStatus"
QT_MOC_LITERAL(21, 275, 13), // "deletedStatus"
QT_MOC_LITERAL(22, 289, 4), // "Quit"
QT_MOC_LITERAL(23, 294, 10), // "updateTest"
QT_MOC_LITERAL(24, 305, 10), // "Fullscreen"
QT_MOC_LITERAL(25, 316, 12) // "makeFilePath"

    },
    "MainWindow\0makefilePathChanged\0\0"
    "treeNodeSelected\0pmoc::QQModel*\0"
    "nodeselected\0qmodselected\0QQuickItem*\0"
    "wannaDie\0checkInjectorLexic\0"
    "injectJavascript\0reparseTreeView\0"
    "recompilePlugins\0newNodeadded\0m\0"
    "setNodeModel\0popQuickitem\0selectedStatus\0"
    "copiedStatus\0cuttedStatus\0pastedStatus\0"
    "deletedStatus\0Quit\0updateTest\0Fullscreen\0"
    "makeFilePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       1,  162, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    1,  115,    2, 0x06 /* Public */,
       5,    1,  118,    2, 0x06 /* Public */,
       6,    2,  121,    2, 0x06 /* Public */,
       8,    0,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  127,    2, 0x0a /* Public */,
      10,    0,  128,    2, 0x0a /* Public */,
      11,    0,  129,    2, 0x0a /* Public */,
      12,    0,  130,    2, 0x0a /* Public */,
      13,    1,  131,    2, 0x0a /* Public */,
      15,    1,  134,    2, 0x0a /* Public */,
      16,    2,  137,    2, 0x0a /* Public */,
      17,    1,  142,    2, 0x0a /* Public */,
      18,    1,  145,    2, 0x0a /* Public */,
      19,    1,  148,    2, 0x0a /* Public */,
      20,    1,  151,    2, 0x0a /* Public */,
      21,    1,  154,    2, 0x0a /* Public */,
      22,    0,  157,    2, 0x0a /* Public */,
      23,    1,  158,    2, 0x0a /* Public */,
      24,    0,  161,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 7,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
      25, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->makefilePathChanged(); break;
        case 1: _t->treeNodeSelected((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 2: _t->nodeselected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->qmodselected((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 4: _t->wannaDie(); break;
        case 5: _t->checkInjectorLexic(); break;
        case 6: _t->injectJavascript(); break;
        case 7: _t->reparseTreeView(); break;
        case 8: _t->recompilePlugins(); break;
        case 9: _t->newNodeadded((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 10: _t->setNodeModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->popQuickitem((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        case 12: _t->selectedStatus((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 13: _t->copiedStatus((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 14: _t->cuttedStatus((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 15: _t->pastedStatus((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 16: _t->deletedStatus((*reinterpret_cast< pmoc::QQModel*(*)>(_a[1]))); break;
        case 17: _t->Quit(); break;
        case 18: _t->updateTest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->Fullscreen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::QQModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::makefilePathChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(pmoc::QQModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::treeNodeSelected)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::nodeselected)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(pmoc::QQModel * , QQuickItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::qmodselected)) {
                *result = 3;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::wannaDie)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getmakefilePath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmakefilePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MainWindow::staticMetaObject = {
    { &BaseQWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return BaseQWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseQWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainWindow::makefilePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::treeNodeSelected(pmoc::QQModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::nodeselected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::qmodselected(pmoc::QQModel * _t1, QQuickItem * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::wannaDie()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Teste/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[30];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 10), // "CriaCanvas"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 14), // "EscolhePlanoXY"
QT_MOC_LITERAL(38, 14), // "EscolhePlanoYZ"
QT_MOC_LITERAL(53, 14), // "EscolhePlanoXZ"
QT_MOC_LITERAL(68, 13), // "ChamaPutVoxel"
QT_MOC_LITERAL(82, 11), // "ChamaPutBox"
QT_MOC_LITERAL(94, 14), // "ChamaPutSphere"
QT_MOC_LITERAL(109, 17), // "ChamaPutEllipsoid"
QT_MOC_LITERAL(127, 13), // "ChamaCutVoxel"
QT_MOC_LITERAL(141, 11), // "ChamaCutBox"
QT_MOC_LITERAL(153, 14), // "ChamaCutSphere"
QT_MOC_LITERAL(168, 17), // "ChamaCutEllipsoid"
QT_MOC_LITERAL(186, 4) // "sair"

    },
    "MainWindow\0CriaCanvas\0\0EscolhePlanoXY\0"
    "EscolhePlanoYZ\0EscolhePlanoXZ\0"
    "ChamaPutVoxel\0ChamaPutBox\0ChamaPutSphere\0"
    "ChamaPutEllipsoid\0ChamaCutVoxel\0"
    "ChamaCutBox\0ChamaCutSphere\0ChamaCutEllipsoid\0"
    "sair"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    0 /* Public */,
       3,    0,   93,    2, 0x0a,    1 /* Public */,
       4,    0,   94,    2, 0x0a,    2 /* Public */,
       5,    0,   95,    2, 0x0a,    3 /* Public */,
       6,    0,   96,    2, 0x0a,    4 /* Public */,
       7,    0,   97,    2, 0x0a,    5 /* Public */,
       8,    0,   98,    2, 0x0a,    6 /* Public */,
       9,    0,   99,    2, 0x0a,    7 /* Public */,
      10,    0,  100,    2, 0x0a,    8 /* Public */,
      11,    0,  101,    2, 0x0a,    9 /* Public */,
      12,    0,  102,    2, 0x0a,   10 /* Public */,
      13,    0,  103,    2, 0x0a,   11 /* Public */,
      14,    0,  104,    2, 0x0a,   12 /* Public */,

};
void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CriaCanvas(); break;
        case 4: _t->ChamaPutVoxel(); break;
        case 5: _t->ChamaPutBox(); break;
        case 6: _t->ChamaPutSphere(); break;
        case 7: _t->ChamaPutEllipsoid(); break;
        case 8: _t->ChamaCutVoxel(); break;
        case 9: _t->ChamaCutBox(); break;
        case 10: _t->ChamaCutSphere(); break;
        case 11: _t->ChamaCutEllipsoid(); break;
        case 12: _t->sair(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

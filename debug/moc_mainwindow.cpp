/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "serial_revc_ready"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "timer_event"
QT_MOC_LITERAL(4, 42, 15), // "comlist_clicked"
QT_MOC_LITERAL(5, 58, 16), // "open_com_clicked"
QT_MOC_LITERAL(6, 75, 21), // "compiler_time_clicked"
QT_MOC_LITERAL(7, 97, 13), // "timer_clicked"
QT_MOC_LITERAL(8, 111, 14), // "set_id_clicked"
QT_MOC_LITERAL(9, 126, 17), // "set_angle_clicked"
QT_MOC_LITERAL(10, 144, 17), // "set_error_clicked"
QT_MOC_LITERAL(11, 162, 16), // "set_zero_clicked"
QT_MOC_LITERAL(12, 179, 15), // "set_rpm_clicked"
QT_MOC_LITERAL(13, 195, 15), // "read_id_clicked"
QT_MOC_LITERAL(14, 211, 18), // "read_angle_clicked"
QT_MOC_LITERAL(15, 230, 17), // "read_flag_clicked"
QT_MOC_LITERAL(16, 248, 18), // "read_error_clicked"
QT_MOC_LITERAL(17, 267, 17), // "read_zero_clicked"
QT_MOC_LITERAL(18, 285, 16), // "read_rpm_clicked"
QT_MOC_LITERAL(19, 302, 21), // "timer_frequency_input"
QT_MOC_LITERAL(20, 324, 21), // "factory_reset_clicked"
QT_MOC_LITERAL(21, 346, 12) // "turn_to_zero"

    },
    "MainWindow\0serial_revc_ready\0\0timer_event\0"
    "comlist_clicked\0open_com_clicked\0"
    "compiler_time_clicked\0timer_clicked\0"
    "set_id_clicked\0set_angle_clicked\0"
    "set_error_clicked\0set_zero_clicked\0"
    "set_rpm_clicked\0read_id_clicked\0"
    "read_angle_clicked\0read_flag_clicked\0"
    "read_error_clicked\0read_zero_clicked\0"
    "read_rpm_clicked\0timer_frequency_input\0"
    "factory_reset_clicked\0turn_to_zero"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x08 /* Private */,
       3,    0,  115,    2, 0x08 /* Private */,
       4,    0,  116,    2, 0x08 /* Private */,
       5,    0,  117,    2, 0x08 /* Private */,
       6,    0,  118,    2, 0x08 /* Private */,
       7,    0,  119,    2, 0x08 /* Private */,
       8,    0,  120,    2, 0x08 /* Private */,
       9,    0,  121,    2, 0x08 /* Private */,
      10,    0,  122,    2, 0x08 /* Private */,
      11,    0,  123,    2, 0x08 /* Private */,
      12,    0,  124,    2, 0x08 /* Private */,
      13,    0,  125,    2, 0x08 /* Private */,
      14,    0,  126,    2, 0x08 /* Private */,
      15,    0,  127,    2, 0x08 /* Private */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    0,  129,    2, 0x08 /* Private */,
      18,    0,  130,    2, 0x08 /* Private */,
      19,    0,  131,    2, 0x08 /* Private */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,

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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serial_revc_ready(); break;
        case 1: _t->timer_event(); break;
        case 2: _t->comlist_clicked(); break;
        case 3: _t->open_com_clicked(); break;
        case 4: _t->compiler_time_clicked(); break;
        case 5: _t->timer_clicked(); break;
        case 6: _t->set_id_clicked(); break;
        case 7: _t->set_angle_clicked(); break;
        case 8: _t->set_error_clicked(); break;
        case 9: _t->set_zero_clicked(); break;
        case 10: _t->set_rpm_clicked(); break;
        case 11: _t->read_id_clicked(); break;
        case 12: _t->read_angle_clicked(); break;
        case 13: _t->read_flag_clicked(); break;
        case 14: _t->read_error_clicked(); break;
        case 15: _t->read_zero_clicked(); break;
        case 16: _t->read_rpm_clicked(); break;
        case 17: _t->timer_frequency_input(); break;
        case 18: _t->factory_reset_clicked(); break;
        case 19: _t->turn_to_zero(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

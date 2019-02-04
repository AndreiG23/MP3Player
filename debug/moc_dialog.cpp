/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[18];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 27), // "on_SliderVolume_sliderMoved"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "position"
QT_MOC_LITERAL(4, 45, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 67, 18), // "on_positionChanged"
QT_MOC_LITERAL(6, 86, 18), // "on_durationChanged"
QT_MOC_LITERAL(7, 105, 21), // "on_LoadButton_clicked"
QT_MOC_LITERAL(8, 127, 32), // "on_SliderProgress_sliderReleased"
QT_MOC_LITERAL(9, 160, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(10, 182, 25), // "on_PreviousButton_clicked"
QT_MOC_LITERAL(11, 208, 16), // "getSelectedIndex"
QT_MOC_LITERAL(12, 225, 28), // "on_SliderVolume_valueChanged"
QT_MOC_LITERAL(13, 254, 5), // "value"
QT_MOC_LITERAL(14, 260, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(15, 295, 30), // "on_SliderProgress_valueChanged"
QT_MOC_LITERAL(16, 326, 24), // "on_ShuffleButton_clicked"
QT_MOC_LITERAL(17, 351, 29) // "on_SliderSpeed_sliderReleased"

    },
    "Dialog\0on_SliderVolume_sliderMoved\0\0"
    "position\0on_pushButton_clicked\0"
    "on_positionChanged\0on_durationChanged\0"
    "on_LoadButton_clicked\0"
    "on_SliderProgress_sliderReleased\0"
    "on_NextButton_clicked\0on_PreviousButton_clicked\0"
    "getSelectedIndex\0on_SliderVolume_valueChanged\0"
    "value\0on_listWidget_itemSelectionChanged\0"
    "on_SliderProgress_valueChanged\0"
    "on_ShuffleButton_clicked\0"
    "on_SliderSpeed_sliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    0,   87,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    1,   91,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_SliderVolume_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->on_durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->on_LoadButton_clicked(); break;
        case 5: _t->on_SliderProgress_sliderReleased(); break;
        case 6: _t->on_NextButton_clicked(); break;
        case 7: _t->on_PreviousButton_clicked(); break;
        case 8: _t->getSelectedIndex(); break;
        case 9: _t->on_SliderVolume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_listWidget_itemSelectionChanged(); break;
        case 11: _t->on_SliderProgress_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_ShuffleButton_clicked(); break;
        case 13: _t->on_SliderSpeed_sliderReleased(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

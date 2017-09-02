/****************************************************************************
** Meta object code from reading C++ file 'context.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AudioControl/context.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'context.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Context_t {
    QByteArrayData data[14];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Context_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Context_t qt_meta_stringdata_Context = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 7),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 7),
QT_MOC_LITERAL(4, 25, 12),
QT_MOC_LITERAL(5, 38, 3),
QT_MOC_LITERAL(6, 42, 5),
QT_MOC_LITERAL(7, 48, 16),
QT_MOC_LITERAL(8, 65, 6),
QT_MOC_LITERAL(9, 72, 10),
QT_MOC_LITERAL(10, 83, 13),
QT_MOC_LITERAL(11, 97, 10),
QT_MOC_LITERAL(12, 108, 7),
QT_MOC_LITERAL(13, 116, 9)
    },
    "Context\0screenX\0\0screenY\0changeVolume\0"
    "key\0value\0changeMicrophone\0volume\0"
    "microphone\0closeInstance\0background\0"
    "opacity\0showMixer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Context[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x02 /* Public */,
       3,    0,   65,    2, 0x02 /* Public */,
       4,    2,   66,    2, 0x02 /* Public */,
       7,    2,   71,    2, 0x02 /* Public */,
       8,    0,   76,    2, 0x02 /* Public */,
       9,    0,   77,    2, 0x02 /* Public */,
      10,    0,   78,    2, 0x02 /* Public */,
      11,    0,   79,    2, 0x02 /* Public */,
      12,    0,   80,    2, 0x02 /* Public */,
      13,    0,   81,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Float,
    QMetaType::Void,

       0        // eod
};

void Context::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Context *_t = static_cast<Context *>(_o);
        switch (_id) {
        case 0: { int _r = _t->screenX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->screenY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->changeVolume((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->changeMicrophone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { int _r = _t->volume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->microphone();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->closeInstance(); break;
        case 7: { QString _r = _t->background();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { float _r = _t->opacity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 9: _t->showMixer(); break;
        default: ;
        }
    }
}

const QMetaObject Context::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Context.data,
      qt_meta_data_Context,  qt_static_metacall, 0, 0}
};


const QMetaObject *Context::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Context::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Context.stringdata))
        return static_cast<void*>(const_cast< Context*>(this));
    return QObject::qt_metacast(_clname);
}

int Context::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

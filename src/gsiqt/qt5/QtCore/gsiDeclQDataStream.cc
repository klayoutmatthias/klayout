
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQDataStream.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDataStream>
#include <QIODevice>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDataStream
  static qint8 f_QDataStream_read_qint8(QDataStream *s)
  {
    qint8 v = 0;
    *s >> v;
    return v;
  }

  static quint8 f_QDataStream_read_quint8(QDataStream *s)
  {
    quint8 v = 0;
    *s >> v;
    return v;
  }

  static qint16 f_QDataStream_read_qint16(QDataStream *s)
  {
    qint16 v = 0;
    *s >> v;
    return v;
  }

  static quint16 f_QDataStream_read_quint16(QDataStream *s)
  {
    quint16 v = 0;
    *s >> v;
    return v;
  }

  static qint32 f_QDataStream_read_qint32(QDataStream *s)
  {
    qint32 v = 0;
    *s >> v;
    return v;
  }

  static quint32 f_QDataStream_read_quint32(QDataStream *s)
  {
    quint32 v = 0;
    *s >> v;
    return v;
  }

  static quint64 f_QDataStream_read_quint64(QDataStream *s)
  {
    quint64 v = 0;
    *s >> v;
    return v;
  }

  static qint64 f_QDataStream_read_qint64(QDataStream *s)
  {
    qint64 v = 0;
    *s >> v;
    return v;
  }

  static double f_QDataStream_read_double(QDataStream *s)
  {
    double v = 0;
    *s >> v;
    return v;
  }

  static float f_QDataStream_read_float(QDataStream *s)
  {
    float v = 0;
    *s >> v;
    return v;
  }

  static bool f_QDataStream_read_bool(QDataStream *s)
  {
    bool v = 0;
    *s >> v;
    return v;
  }

  static qt_gsi::Converter<class QChar>::target_type f_QDataStream_read_qchar(QDataStream *s)
  {
    QChar v = 0;
    *s >> v;
    return qt_gsi::Converter<class QChar>::toc (v);
  }

  static qt_gsi::Converter<class QList<int> >::target_type f_QDataStream_read_int_list(QDataStream *s)
  {
    QList<int> v;
    *s >> v;
    return qt_gsi::Converter<class QList<int> >::toc (v);
  }

  static qt_gsi::Converter<class QVector<int> >::target_type f_QDataStream_read_int_vector(QDataStream *s)
  {
    QVector<int> v;
    *s >> v;
    return qt_gsi::Converter<class QVector<int> >::toc (v);
  }

  static QString f_QDataStream_read_string(QDataStream *s)
  {
    QString v;
    *s >> v;
    return v;
  }

  static qt_gsi::Converter<QByteArray>::target_type f_QDataStream_read_bytearray(QDataStream *s)
  {
    QByteArray v;
    *s >> v;
    return qt_gsi::Converter<QByteArray>::toc (v);
  }

  static QDataStream *f_QDataStream_put_qint8(QDataStream *s, qint8 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_quint8(QDataStream *s, quint8 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_qint16(QDataStream *s, qint16 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_quint16(QDataStream *s, quint16 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_qint32(QDataStream *s, qint32 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_quint32(QDataStream *s, quint32 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_qint64(QDataStream *s, qint64 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_quint64(QDataStream *s, quint64 v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_float(QDataStream *s, float v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_double(QDataStream *s, double v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_bool(QDataStream *s, bool v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_qchar(QDataStream *s, const qt_gsi::Converter<class QChar>::target_type &v)
  {
    *s << qt_gsi::Converter<class QChar>::toq (v);
    return s;
  }

  static QDataStream *f_QDataStream_put_int_list(QDataStream *s, const qt_gsi::Converter<class QList<int> >::target_type &v)
  {
    *s << qt_gsi::Converter<class QList<int> >::toq (v);
    return s;
  }

  static QDataStream *f_QDataStream_put_int_vector(QDataStream *s, const qt_gsi::Converter<class QVector<int> >::target_type &v)
  {
    *s << qt_gsi::Converter<class QVector<int> >::toq (v);
    return s;
  }

  static QDataStream *f_QDataStream_put_string(QDataStream *s, const QString &v)
  {
    *s << v;
    return s;
  }

  static QDataStream *f_QDataStream_put_bytearray(QDataStream *s, const qt_gsi::Converter<class QByteArray>::target_type &v)
  {
    *s << qt_gsi::Converter<class QByteArray>::toq (v);
    return s;
  }


//  Constructor QDataStream::QDataStream()


static void _init_ctor_QDataStream_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDataStream> ();
}

static void _call_ctor_QDataStream_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDataStream *> (new QDataStream ());
}


//  Constructor QDataStream::QDataStream(QIODevice *)


static void _init_ctor_QDataStream_1447 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return_new<QDataStream> ();
}

static void _call_ctor_QDataStream_1447 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  ret.write<QDataStream *> (new QDataStream (arg1));
}


//  Constructor QDataStream::QDataStream(QByteArray *, QFlags<QIODevice::OpenModeFlag> flags)


static void _init_ctor_QDataStream_4752 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QByteArray * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags");
  decl->add_arg<QFlags<QIODevice::OpenModeFlag> > (argspec_1);
  decl->set_return_new<QDataStream> ();
}

static void _call_ctor_QDataStream_4752 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArray *arg1 = gsi::arg_reader<QByteArray * >() (args, heap);
  QFlags<QIODevice::OpenModeFlag> arg2 = gsi::arg_reader<QFlags<QIODevice::OpenModeFlag> >() (args, heap);
  ret.write<QDataStream *> (new QDataStream (arg1, arg2));
}


//  Constructor QDataStream::QDataStream(const QByteArray &)


static void _init_ctor_QDataStream_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QDataStream> ();
}

static void _call_ctor_QDataStream_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QDataStream *> (new QDataStream (arg1));
}


// bool QDataStream::atEnd()


static void _init_f_atEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_atEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDataStream *)cls)->atEnd ());
}


// QDataStream::ByteOrder QDataStream::byteOrder()


static void _init_f_byteOrder_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDataStream::ByteOrder>::target_type > ();
}

static void _call_f_byteOrder_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDataStream::ByteOrder>::target_type > ((qt_gsi::Converter<QDataStream::ByteOrder>::target_type)qt_gsi::CppToQtAdaptor<QDataStream::ByteOrder>(((QDataStream *)cls)->byteOrder ()));
}


// QIODevice *QDataStream::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QDataStream *)cls)->device ());
}


// QDataStream::FloatingPointPrecision QDataStream::floatingPointPrecision()


static void _init_f_floatingPointPrecision_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDataStream::FloatingPointPrecision>::target_type > ();
}

static void _call_f_floatingPointPrecision_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDataStream::FloatingPointPrecision>::target_type > ((qt_gsi::Converter<QDataStream::FloatingPointPrecision>::target_type)qt_gsi::CppToQtAdaptor<QDataStream::FloatingPointPrecision>(((QDataStream *)cls)->floatingPointPrecision ()));
}


// void QDataStream::resetStatus()


static void _init_f_resetStatus_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_resetStatus_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->resetStatus ();
}


// void QDataStream::setByteOrder(QDataStream::ByteOrder)


static void _init_f_setByteOrder_2543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QDataStream::ByteOrder>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setByteOrder_2543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDataStream::ByteOrder>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDataStream::ByteOrder>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->setByteOrder (qt_gsi::QtToCppAdaptor<QDataStream::ByteOrder>(arg1).cref());
}


// void QDataStream::setDevice(QIODevice *)


static void _init_f_setDevice_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDevice_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->setDevice (arg1);
}


// void QDataStream::setFloatingPointPrecision(QDataStream::FloatingPointPrecision precision)


static void _init_f_setFloatingPointPrecision_3913 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("precision");
  decl->add_arg<const qt_gsi::Converter<QDataStream::FloatingPointPrecision>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFloatingPointPrecision_3913 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDataStream::FloatingPointPrecision>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDataStream::FloatingPointPrecision>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->setFloatingPointPrecision (qt_gsi::QtToCppAdaptor<QDataStream::FloatingPointPrecision>(arg1).cref());
}


// void QDataStream::setStatus(QDataStream::Status status)


static void _init_f_setStatus_2275 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("status");
  decl->add_arg<const qt_gsi::Converter<QDataStream::Status>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStatus_2275 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDataStream::Status>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDataStream::Status>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->setStatus (qt_gsi::QtToCppAdaptor<QDataStream::Status>(arg1).cref());
}


// void QDataStream::setVersion(int)


static void _init_f_setVersion_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVersion_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->setVersion (arg1);
}


// int QDataStream::skipRawData(int len)


static void _init_f_skipRawData_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("len");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_skipRawData_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QDataStream *)cls)->skipRawData (arg1));
}


// QDataStream::Status QDataStream::status()


static void _init_f_status_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDataStream::Status>::target_type > ();
}

static void _call_f_status_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDataStream::Status>::target_type > ((qt_gsi::Converter<QDataStream::Status>::target_type)qt_gsi::CppToQtAdaptor<QDataStream::Status>(((QDataStream *)cls)->status ()));
}


// void QDataStream::unsetDevice()


static void _init_f_unsetDevice_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unsetDevice_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDataStream *)cls)->unsetDevice ();
}


// int QDataStream::version()


static void _init_f_version_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_version_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDataStream *)cls)->version ());
}


// QDataStream &QDataStream::writeBytes(const char *, unsigned int len)


static void _init_f_writeBytes_3395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<unsigned int > (argspec_1);
  decl->set_return<QDataStream & > ();
}

static void _call_f_writeBytes_3395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  unsigned int arg2 = gsi::arg_reader<unsigned int >() (args, heap);
  ret.write<QDataStream & > ((QDataStream &)((QDataStream *)cls)->writeBytes (arg1, arg2));
}


// int QDataStream::writeRawData(const char *, int len)


static void _init_f_writeRawData_2390 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<int > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_writeRawData_2390 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QDataStream *)cls)->writeRawData (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QDataStream () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDataStream::QDataStream()\nThis method creates an object of class QDataStream.", &_init_ctor_QDataStream_0, &_call_ctor_QDataStream_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDataStream::QDataStream(QIODevice *)\nThis method creates an object of class QDataStream.", &_init_ctor_QDataStream_1447, &_call_ctor_QDataStream_1447);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDataStream::QDataStream(QByteArray *, QFlags<QIODevice::OpenModeFlag> flags)\nThis method creates an object of class QDataStream.", &_init_ctor_QDataStream_4752, &_call_ctor_QDataStream_4752);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDataStream::QDataStream(const QByteArray &)\nThis method creates an object of class QDataStream.", &_init_ctor_QDataStream_2309, &_call_ctor_QDataStream_2309);
  methods += new qt_gsi::GenericMethod ("atEnd", "@brief Method bool QDataStream::atEnd()\n", true, &_init_f_atEnd_c0, &_call_f_atEnd_c0);
  methods += new qt_gsi::GenericMethod (":byteOrder", "@brief Method QDataStream::ByteOrder QDataStream::byteOrder()\n", true, &_init_f_byteOrder_c0, &_call_f_byteOrder_c0);
  methods += new qt_gsi::GenericMethod (":device", "@brief Method QIODevice *QDataStream::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod (":floatingPointPrecision", "@brief Method QDataStream::FloatingPointPrecision QDataStream::floatingPointPrecision()\n", true, &_init_f_floatingPointPrecision_c0, &_call_f_floatingPointPrecision_c0);
  methods += new qt_gsi::GenericMethod ("resetStatus", "@brief Method void QDataStream::resetStatus()\n", false, &_init_f_resetStatus_0, &_call_f_resetStatus_0);
  methods += new qt_gsi::GenericMethod ("setByteOrder|byteOrder=", "@brief Method void QDataStream::setByteOrder(QDataStream::ByteOrder)\n", false, &_init_f_setByteOrder_2543, &_call_f_setByteOrder_2543);
  methods += new qt_gsi::GenericMethod ("setDevice|device=", "@brief Method void QDataStream::setDevice(QIODevice *)\n", false, &_init_f_setDevice_1447, &_call_f_setDevice_1447);
  methods += new qt_gsi::GenericMethod ("setFloatingPointPrecision|floatingPointPrecision=", "@brief Method void QDataStream::setFloatingPointPrecision(QDataStream::FloatingPointPrecision precision)\n", false, &_init_f_setFloatingPointPrecision_3913, &_call_f_setFloatingPointPrecision_3913);
  methods += new qt_gsi::GenericMethod ("setStatus|status=", "@brief Method void QDataStream::setStatus(QDataStream::Status status)\n", false, &_init_f_setStatus_2275, &_call_f_setStatus_2275);
  methods += new qt_gsi::GenericMethod ("setVersion|version=", "@brief Method void QDataStream::setVersion(int)\n", false, &_init_f_setVersion_767, &_call_f_setVersion_767);
  methods += new qt_gsi::GenericMethod ("skipRawData", "@brief Method int QDataStream::skipRawData(int len)\n", false, &_init_f_skipRawData_767, &_call_f_skipRawData_767);
  methods += new qt_gsi::GenericMethod (":status", "@brief Method QDataStream::Status QDataStream::status()\n", true, &_init_f_status_c0, &_call_f_status_c0);
  methods += new qt_gsi::GenericMethod ("unsetDevice", "@brief Method void QDataStream::unsetDevice()\n", false, &_init_f_unsetDevice_0, &_call_f_unsetDevice_0);
  methods += new qt_gsi::GenericMethod (":version", "@brief Method int QDataStream::version()\n", true, &_init_f_version_c0, &_call_f_version_c0);
  methods += new qt_gsi::GenericMethod ("writeBytes", "@brief Method QDataStream &QDataStream::writeBytes(const char *, unsigned int len)\n", false, &_init_f_writeBytes_3395, &_call_f_writeBytes_3395);
  methods += new qt_gsi::GenericMethod ("writeRawData", "@brief Method int QDataStream::writeRawData(const char *, int len)\n", false, &_init_f_writeRawData_2390, &_call_f_writeRawData_2390);
  return methods;
}

gsi::Class<QDataStream> decl_QDataStream ("QtCore", "QDataStream",
  gsi::method_ext("read_i8", &f_QDataStream_read_qint8, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_ui8", &f_QDataStream_read_quint8, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_i16", &f_QDataStream_read_qint16, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_ui16", &f_QDataStream_read_quint16, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_i32", &f_QDataStream_read_qint32, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_ui32", &f_QDataStream_read_quint32, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_i64", &f_QDataStream_read_qint64, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_ui64", &f_QDataStream_read_quint64, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_d", &f_QDataStream_read_double, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_f", &f_QDataStream_read_float, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_b", &f_QDataStream_read_bool, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_qc", &f_QDataStream_read_qchar, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_il", &f_QDataStream_read_int_list, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_iv", &f_QDataStream_read_int_vector, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_s", &f_QDataStream_read_string, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("read_ba", &f_QDataStream_read_bytearray, "@brief Non-ambiguous adaptation of the corresponding operator>>") +
  gsi::method_ext("put_i8", &f_QDataStream_put_qint8, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_ui8", &f_QDataStream_put_quint8, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_i16", &f_QDataStream_put_qint16, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_ui16", &f_QDataStream_put_quint16, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_i32", &f_QDataStream_put_qint32, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_ui32", &f_QDataStream_put_quint32, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_i64", &f_QDataStream_put_qint64, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_ui64", &f_QDataStream_put_quint64, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_d", &f_QDataStream_put_double, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_f", &f_QDataStream_put_float, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_b", &f_QDataStream_put_bool, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_qc", &f_QDataStream_put_qchar, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_il", &f_QDataStream_put_int_list, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_iv", &f_QDataStream_put_int_vector, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_s", &f_QDataStream_put_string, "@brief Non-ambiguous adaptation of the corresponding operator<<") +
  gsi::method_ext("put_ba", &f_QDataStream_put_bytearray, "@brief Non-ambiguous adaptation of the corresponding operator<<") 
+
  methods_QDataStream (),
  "@qt\n@brief Binding of QDataStream");


GSI_QTCORE_PUBLIC gsi::Class<QDataStream> &qtdecl_QDataStream () { return decl_QDataStream; }

}


//  Implementation of the enum wrapper class for QDataStream::ByteOrder
namespace qt_gsi
{

static gsi::Enum<QDataStream::ByteOrder> decl_QDataStream_ByteOrder_Enum ("QtCore", "QDataStream_ByteOrder",
    gsi::enum_const ("BigEndian", QDataStream::BigEndian, "@brief Enum constant QDataStream::BigEndian") +
    gsi::enum_const ("LittleEndian", QDataStream::LittleEndian, "@brief Enum constant QDataStream::LittleEndian"),
  "@qt\n@brief This class represents the QDataStream::ByteOrder enum");

static gsi::QFlagsClass<QDataStream::ByteOrder > decl_QDataStream_ByteOrder_Enums ("QtCore", "QDataStream_QFlags_ByteOrder",
  "@qt\n@brief This class represents the QFlags<QDataStream::ByteOrder> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDataStream> inject_QDataStream_ByteOrder_Enum_in_parent (decl_QDataStream_ByteOrder_Enum.defs ());
static gsi::ClassExt<QDataStream> decl_QDataStream_ByteOrder_Enum_as_child (decl_QDataStream_ByteOrder_Enum, "ByteOrder");
static gsi::ClassExt<QDataStream> decl_QDataStream_ByteOrder_Enums_as_child (decl_QDataStream_ByteOrder_Enums, "QFlags_ByteOrder");

}


//  Implementation of the enum wrapper class for QDataStream::FloatingPointPrecision
namespace qt_gsi
{

static gsi::Enum<QDataStream::FloatingPointPrecision> decl_QDataStream_FloatingPointPrecision_Enum ("QtCore", "QDataStream_FloatingPointPrecision",
    gsi::enum_const ("SinglePrecision", QDataStream::SinglePrecision, "@brief Enum constant QDataStream::SinglePrecision") +
    gsi::enum_const ("DoublePrecision", QDataStream::DoublePrecision, "@brief Enum constant QDataStream::DoublePrecision"),
  "@qt\n@brief This class represents the QDataStream::FloatingPointPrecision enum");

static gsi::QFlagsClass<QDataStream::FloatingPointPrecision > decl_QDataStream_FloatingPointPrecision_Enums ("QtCore", "QDataStream_QFlags_FloatingPointPrecision",
  "@qt\n@brief This class represents the QFlags<QDataStream::FloatingPointPrecision> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDataStream> inject_QDataStream_FloatingPointPrecision_Enum_in_parent (decl_QDataStream_FloatingPointPrecision_Enum.defs ());
static gsi::ClassExt<QDataStream> decl_QDataStream_FloatingPointPrecision_Enum_as_child (decl_QDataStream_FloatingPointPrecision_Enum, "FloatingPointPrecision");
static gsi::ClassExt<QDataStream> decl_QDataStream_FloatingPointPrecision_Enums_as_child (decl_QDataStream_FloatingPointPrecision_Enums, "QFlags_FloatingPointPrecision");

}


//  Implementation of the enum wrapper class for QDataStream::Status
namespace qt_gsi
{

static gsi::Enum<QDataStream::Status> decl_QDataStream_Status_Enum ("QtCore", "QDataStream_Status",
    gsi::enum_const ("Ok", QDataStream::Ok, "@brief Enum constant QDataStream::Ok") +
    gsi::enum_const ("ReadPastEnd", QDataStream::ReadPastEnd, "@brief Enum constant QDataStream::ReadPastEnd") +
    gsi::enum_const ("ReadCorruptData", QDataStream::ReadCorruptData, "@brief Enum constant QDataStream::ReadCorruptData") +
    gsi::enum_const ("WriteFailed", QDataStream::WriteFailed, "@brief Enum constant QDataStream::WriteFailed"),
  "@qt\n@brief This class represents the QDataStream::Status enum");

static gsi::QFlagsClass<QDataStream::Status > decl_QDataStream_Status_Enums ("QtCore", "QDataStream_QFlags_Status",
  "@qt\n@brief This class represents the QFlags<QDataStream::Status> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDataStream> inject_QDataStream_Status_Enum_in_parent (decl_QDataStream_Status_Enum.defs ());
static gsi::ClassExt<QDataStream> decl_QDataStream_Status_Enum_as_child (decl_QDataStream_Status_Enum, "Status");
static gsi::ClassExt<QDataStream> decl_QDataStream_Status_Enums_as_child (decl_QDataStream_Status_Enums, "QFlags_Status");

}


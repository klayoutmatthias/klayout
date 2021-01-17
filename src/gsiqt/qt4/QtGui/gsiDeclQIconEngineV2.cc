
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQIconEngineV2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIconEngineV2>
#include <QDataStream>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIconEngineV2

// QList<QSize> QIconEngineV2::availableSizes(QIcon::Mode mode, QIcon::State state)


static void _init_f_availableSizes_2846 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_1);
  decl->set_return<QList<QSize> > ();
}

static void _call_f_availableSizes_2846 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  ret.write<QList<QSize> > ((QList<QSize>)((QIconEngineV2 *)cls)->availableSizes (qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg1).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg2).cref()));
}


// QIconEngineV2 *QIconEngineV2::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIconEngineV2 * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIconEngineV2 * > ((QIconEngineV2 *)((QIconEngineV2 *)cls)->clone ());
}


// QString QIconEngineV2::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QIconEngineV2 *)cls)->key ());
}


// bool QIconEngineV2::read(QDataStream &in)


static void _init_f_read_1697 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("in");
  decl->add_arg<QDataStream & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_read_1697 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDataStream &arg1 = gsi::arg_reader<QDataStream & >() (args, heap);
  ret.write<bool > ((bool)((QIconEngineV2 *)cls)->read (arg1));
}


// void QIconEngineV2::virtual_hook(int id, void *data)


static void _init_f_virtual_hook_1715 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<void * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_virtual_hook_1715 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  void *arg2 = gsi::arg_reader<void * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngineV2 *)cls)->virtual_hook (arg1, arg2);
}


// bool QIconEngineV2::write(QDataStream &out)


static void _init_f_write_c1697 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("out");
  decl->add_arg<QDataStream & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_write_c1697 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDataStream &arg1 = gsi::arg_reader<QDataStream & >() (args, heap);
  ret.write<bool > ((bool)((QIconEngineV2 *)cls)->write (arg1));
}


namespace gsi
{

static gsi::Methods methods_QIconEngineV2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("availableSizes", "@brief Method QList<QSize> QIconEngineV2::availableSizes(QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_availableSizes_2846, &_call_f_availableSizes_2846);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QIconEngineV2 *QIconEngineV2::clone()\n", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("key", "@brief Method QString QIconEngineV2::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("read", "@brief Method bool QIconEngineV2::read(QDataStream &in)\n", false, &_init_f_read_1697, &_call_f_read_1697);
  methods += new qt_gsi::GenericMethod ("virtual_hook", "@brief Method void QIconEngineV2::virtual_hook(int id, void *data)\n", false, &_init_f_virtual_hook_1715, &_call_f_virtual_hook_1715);
  methods += new qt_gsi::GenericMethod ("write", "@brief Method bool QIconEngineV2::write(QDataStream &out)\n", true, &_init_f_write_c1697, &_call_f_write_c1697);
  return methods;
}

gsi::Class<QIconEngine> &qtdecl_QIconEngine ();

gsi::Class<QIconEngineV2> decl_QIconEngineV2 (qtdecl_QIconEngine (), "QtGui", "QIconEngineV2_Native",
  methods_QIconEngineV2 (),
  "@hide\n@alias QIconEngineV2");

GSI_QTGUI_PUBLIC gsi::Class<QIconEngineV2> &qtdecl_QIconEngineV2 () { return decl_QIconEngineV2; }

}


class QIconEngineV2_Adaptor : public QIconEngineV2, public qt_gsi::QtObjectBase
{
public:

  virtual ~QIconEngineV2_Adaptor();

  //  [adaptor ctor] QIconEngineV2::QIconEngineV2()
  QIconEngineV2_Adaptor() : QIconEngineV2()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QSize QIconEngineV2::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)
  QSize cbs_actualSize_4543_0(const QSize &size, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    return QIconEngineV2::actualSize(size, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual QSize actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_actualSize_4543_0.can_issue()) {
      return cb_actualSize_4543_0.issue<QIconEngineV2_Adaptor, QSize, const QSize &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngineV2_Adaptor::cbs_actualSize_4543_0, size, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      return QIconEngineV2::actualSize(size, mode, state);
    }
  }

  //  [adaptor impl] void QIconEngineV2::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)
  void cbs_addFile_6460_0(const QString &fileName, const QSize &size, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    QIconEngineV2::addFile(fileName, size, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual void addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_addFile_6460_0.can_issue()) {
      cb_addFile_6460_0.issue<QIconEngineV2_Adaptor, const QString &, const QSize &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngineV2_Adaptor::cbs_addFile_6460_0, fileName, size, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      QIconEngineV2::addFile(fileName, size, mode, state);
    }
  }

  //  [adaptor impl] void QIconEngineV2::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)
  void cbs_addPixmap_4755_0(const QPixmap &pixmap, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    QIconEngineV2::addPixmap(pixmap, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual void addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_addPixmap_4755_0.can_issue()) {
      cb_addPixmap_4755_0.issue<QIconEngineV2_Adaptor, const QPixmap &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngineV2_Adaptor::cbs_addPixmap_4755_0, pixmap, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      QIconEngineV2::addPixmap(pixmap, mode, state);
    }
  }

  //  [adaptor impl] QIconEngineV2 *QIconEngineV2::clone()
  QIconEngineV2 * cbs_clone_c0_0() const
  {
    return QIconEngineV2::clone();
  }

  virtual QIconEngineV2 * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QIconEngineV2_Adaptor, QIconEngineV2 *>(&QIconEngineV2_Adaptor::cbs_clone_c0_0);
    } else {
      return QIconEngineV2::clone();
    }
  }

  //  [adaptor impl] QString QIconEngineV2::key()
  QString cbs_key_c0_0() const
  {
    return QIconEngineV2::key();
  }

  virtual QString key() const
  {
    if (cb_key_c0_0.can_issue()) {
      return cb_key_c0_0.issue<QIconEngineV2_Adaptor, QString>(&QIconEngineV2_Adaptor::cbs_key_c0_0);
    } else {
      return QIconEngineV2::key();
    }
  }

  //  [adaptor impl] void QIconEngineV2::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)
  void cbs_paint_5848_0(QPainter *painter, const QRect &rect, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    __SUPPRESS_UNUSED_WARNING (painter);
    __SUPPRESS_UNUSED_WARNING (rect);
    __SUPPRESS_UNUSED_WARNING (mode);
    __SUPPRESS_UNUSED_WARNING (state);
    throw qt_gsi::AbstractMethodCalledException("paint");
  }

  virtual void paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_paint_5848_0.can_issue()) {
      cb_paint_5848_0.issue<QIconEngineV2_Adaptor, QPainter *, const QRect &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngineV2_Adaptor::cbs_paint_5848_0, painter, rect, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      throw qt_gsi::AbstractMethodCalledException("paint");
    }
  }

  //  [adaptor impl] QPixmap QIconEngineV2::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)
  QPixmap cbs_pixmap_4543_0(const QSize &size, const qt_gsi::Converter<QIcon::Mode>::target_type & mode, const qt_gsi::Converter<QIcon::State>::target_type & state)
  {
    return QIconEngineV2::pixmap(size, qt_gsi::QtToCppAdaptor<QIcon::Mode>(mode).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(state).cref());
  }

  virtual QPixmap pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)
  {
    if (cb_pixmap_4543_0.can_issue()) {
      return cb_pixmap_4543_0.issue<QIconEngineV2_Adaptor, QPixmap, const QSize &, const qt_gsi::Converter<QIcon::Mode>::target_type &, const qt_gsi::Converter<QIcon::State>::target_type &>(&QIconEngineV2_Adaptor::cbs_pixmap_4543_0, size, qt_gsi::CppToQtAdaptor<QIcon::Mode>(mode), qt_gsi::CppToQtAdaptor<QIcon::State>(state));
    } else {
      return QIconEngineV2::pixmap(size, mode, state);
    }
  }

  //  [adaptor impl] bool QIconEngineV2::read(QDataStream &in)
  bool cbs_read_1697_0(QDataStream &in)
  {
    return QIconEngineV2::read(in);
  }

  virtual bool read(QDataStream &in)
  {
    if (cb_read_1697_0.can_issue()) {
      return cb_read_1697_0.issue<QIconEngineV2_Adaptor, bool, QDataStream &>(&QIconEngineV2_Adaptor::cbs_read_1697_0, in);
    } else {
      return QIconEngineV2::read(in);
    }
  }

  //  [adaptor impl] void QIconEngineV2::virtual_hook(int id, void *data)
  void cbs_virtual_hook_1715_0(int id, void *data)
  {
    QIconEngineV2::virtual_hook(id, data);
  }

  virtual void virtual_hook(int id, void *data)
  {
    if (cb_virtual_hook_1715_0.can_issue()) {
      cb_virtual_hook_1715_0.issue<QIconEngineV2_Adaptor, int, void *>(&QIconEngineV2_Adaptor::cbs_virtual_hook_1715_0, id, data);
    } else {
      QIconEngineV2::virtual_hook(id, data);
    }
  }

  //  [adaptor impl] bool QIconEngineV2::write(QDataStream &out)
  bool cbs_write_c1697_0(QDataStream &out) const
  {
    return QIconEngineV2::write(out);
  }

  virtual bool write(QDataStream &out) const
  {
    if (cb_write_c1697_0.can_issue()) {
      return cb_write_c1697_0.issue<QIconEngineV2_Adaptor, bool, QDataStream &>(&QIconEngineV2_Adaptor::cbs_write_c1697_0, out);
    } else {
      return QIconEngineV2::write(out);
    }
  }

  gsi::Callback cb_actualSize_4543_0;
  gsi::Callback cb_addFile_6460_0;
  gsi::Callback cb_addPixmap_4755_0;
  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_key_c0_0;
  gsi::Callback cb_paint_5848_0;
  gsi::Callback cb_pixmap_4543_0;
  gsi::Callback cb_read_1697_0;
  gsi::Callback cb_virtual_hook_1715_0;
  gsi::Callback cb_write_c1697_0;
};

QIconEngineV2_Adaptor::~QIconEngineV2_Adaptor() { }

//  Constructor QIconEngineV2::QIconEngineV2() (adaptor class)

static void _init_ctor_QIconEngineV2_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QIconEngineV2_Adaptor> ();
}

static void _call_ctor_QIconEngineV2_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIconEngineV2_Adaptor *> (new QIconEngineV2_Adaptor ());
}


// QSize QIconEngineV2::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_actualSize_4543_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QSize > ();
}

static void _call_cbs_actualSize_4543_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  ret.write<QSize > ((QSize)((QIconEngineV2_Adaptor *)cls)->cbs_actualSize_4543_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_actualSize_4543_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_actualSize_4543_0 = cb;
}


// void QIconEngineV2::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_addFile_6460_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("size");
  decl->add_arg<const QSize & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_cbs_addFile_6460_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QSize &arg2 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngineV2_Adaptor *)cls)->cbs_addFile_6460_0 (arg1, arg2, arg3, arg4);
}

static void _set_callback_cbs_addFile_6460_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_addFile_6460_0 = cb;
}


// void QIconEngineV2::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_addPixmap_4755_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_cbs_addPixmap_4755_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = args.read<const QPixmap & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngineV2_Adaptor *)cls)->cbs_addPixmap_4755_0 (arg1, arg2, arg3);
}

static void _set_callback_cbs_addPixmap_4755_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_addPixmap_4755_0 = cb;
}


// QIconEngineV2 *QIconEngineV2::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIconEngineV2 * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIconEngineV2 * > ((QIconEngineV2 *)((QIconEngineV2_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// QString QIconEngineV2::key()

static void _init_cbs_key_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_key_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QIconEngineV2_Adaptor *)cls)->cbs_key_c0_0 ());
}

static void _set_callback_cbs_key_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_key_c0_0 = cb;
}


// void QIconEngineV2::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_paint_5848_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRect & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_cbs_paint_5848_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = args.read<QPainter * > (heap);
  const QRect &arg2 = args.read<const QRect & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngineV2_Adaptor *)cls)->cbs_paint_5848_0 (arg1, arg2, arg3, arg4);
}

static void _set_callback_cbs_paint_5848_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_paint_5848_0 = cb;
}


// QPixmap QIconEngineV2::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)

static void _init_cbs_pixmap_4543_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QPixmap > ();
}

static void _call_cbs_pixmap_4543_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args.read<const qt_gsi::Converter<QIcon::Mode>::target_type & > (heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args.read<const qt_gsi::Converter<QIcon::State>::target_type & > (heap);
  ret.write<QPixmap > ((QPixmap)((QIconEngineV2_Adaptor *)cls)->cbs_pixmap_4543_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_pixmap_4543_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_pixmap_4543_0 = cb;
}


// bool QIconEngineV2::read(QDataStream &in)

static void _init_cbs_read_1697_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("in");
  decl->add_arg<QDataStream & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_read_1697_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDataStream &arg1 = args.read<QDataStream & > (heap);
  ret.write<bool > ((bool)((QIconEngineV2_Adaptor *)cls)->cbs_read_1697_0 (arg1));
}

static void _set_callback_cbs_read_1697_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_read_1697_0 = cb;
}


// void QIconEngineV2::virtual_hook(int id, void *data)

static void _init_cbs_virtual_hook_1715_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data");
  decl->add_arg<void * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_virtual_hook_1715_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  void *arg2 = args.read<void * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEngineV2_Adaptor *)cls)->cbs_virtual_hook_1715_0 (arg1, arg2);
}

static void _set_callback_cbs_virtual_hook_1715_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_virtual_hook_1715_0 = cb;
}


// bool QIconEngineV2::write(QDataStream &out)

static void _init_cbs_write_c1697_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("out");
  decl->add_arg<QDataStream & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_write_c1697_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QDataStream &arg1 = args.read<QDataStream & > (heap);
  ret.write<bool > ((bool)((QIconEngineV2_Adaptor *)cls)->cbs_write_c1697_0 (arg1));
}

static void _set_callback_cbs_write_c1697_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEngineV2_Adaptor *)cls)->cb_write_c1697_0 = cb;
}


namespace gsi
{

gsi::Class<QIconEngineV2> &qtdecl_QIconEngineV2 ();

static gsi::Methods methods_QIconEngineV2_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIconEngineV2::QIconEngineV2()\nThis method creates an object of class QIconEngineV2.", &_init_ctor_QIconEngineV2_Adaptor_0, &_call_ctor_QIconEngineV2_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("actualSize", "@brief Virtual method QSize QIconEngineV2::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_actualSize_4543_0, &_call_cbs_actualSize_4543_0);
  methods += new qt_gsi::GenericMethod ("actualSize", "@hide", false, &_init_cbs_actualSize_4543_0, &_call_cbs_actualSize_4543_0, &_set_callback_cbs_actualSize_4543_0);
  methods += new qt_gsi::GenericMethod ("addFile", "@brief Virtual method void QIconEngineV2::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_addFile_6460_0, &_call_cbs_addFile_6460_0);
  methods += new qt_gsi::GenericMethod ("addFile", "@hide", false, &_init_cbs_addFile_6460_0, &_call_cbs_addFile_6460_0, &_set_callback_cbs_addFile_6460_0);
  methods += new qt_gsi::GenericMethod ("addPixmap", "@brief Virtual method void QIconEngineV2::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_addPixmap_4755_0, &_call_cbs_addPixmap_4755_0);
  methods += new qt_gsi::GenericMethod ("addPixmap", "@hide", false, &_init_cbs_addPixmap_4755_0, &_call_cbs_addPixmap_4755_0, &_set_callback_cbs_addPixmap_4755_0);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QIconEngineV2 *QIconEngineV2::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("key", "@brief Virtual method QString QIconEngineV2::key()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_key_c0_0, &_call_cbs_key_c0_0);
  methods += new qt_gsi::GenericMethod ("key", "@hide", true, &_init_cbs_key_c0_0, &_call_cbs_key_c0_0, &_set_callback_cbs_key_c0_0);
  methods += new qt_gsi::GenericMethod ("paint", "@brief Virtual method void QIconEngineV2::paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_paint_5848_0, &_call_cbs_paint_5848_0);
  methods += new qt_gsi::GenericMethod ("paint", "@hide", false, &_init_cbs_paint_5848_0, &_call_cbs_paint_5848_0, &_set_callback_cbs_paint_5848_0);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Virtual method QPixmap QIconEngineV2::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_pixmap_4543_0, &_call_cbs_pixmap_4543_0);
  methods += new qt_gsi::GenericMethod ("pixmap", "@hide", false, &_init_cbs_pixmap_4543_0, &_call_cbs_pixmap_4543_0, &_set_callback_cbs_pixmap_4543_0);
  methods += new qt_gsi::GenericMethod ("read", "@brief Virtual method bool QIconEngineV2::read(QDataStream &in)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_read_1697_0, &_call_cbs_read_1697_0);
  methods += new qt_gsi::GenericMethod ("read", "@hide", false, &_init_cbs_read_1697_0, &_call_cbs_read_1697_0, &_set_callback_cbs_read_1697_0);
  methods += new qt_gsi::GenericMethod ("virtual_hook", "@brief Virtual method void QIconEngineV2::virtual_hook(int id, void *data)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_virtual_hook_1715_0, &_call_cbs_virtual_hook_1715_0);
  methods += new qt_gsi::GenericMethod ("virtual_hook", "@hide", false, &_init_cbs_virtual_hook_1715_0, &_call_cbs_virtual_hook_1715_0, &_set_callback_cbs_virtual_hook_1715_0);
  methods += new qt_gsi::GenericMethod ("write", "@brief Virtual method bool QIconEngineV2::write(QDataStream &out)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_write_c1697_0, &_call_cbs_write_c1697_0);
  methods += new qt_gsi::GenericMethod ("write", "@hide", true, &_init_cbs_write_c1697_0, &_call_cbs_write_c1697_0, &_set_callback_cbs_write_c1697_0);
  return methods;
}

gsi::Class<QIconEngineV2_Adaptor> decl_QIconEngineV2_Adaptor (qtdecl_QIconEngineV2 (), "QtGui", "QIconEngineV2",
  methods_QIconEngineV2_Adaptor (),
  "@qt\n@brief Binding of QIconEngineV2");

}


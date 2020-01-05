
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

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
*  @file gsiDeclQMediaVideoProbeControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaVideoProbeControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QVideoFrame>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaVideoProbeControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaVideoProbeControl::staticMetaObject);
}


// static QString QMediaVideoProbeControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QMediaVideoProbeControl::tr (arg1, arg2, arg3));
}


// static QString QMediaVideoProbeControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QMediaVideoProbeControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMediaVideoProbeControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QMediaVideoProbeControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("flush()", "flush", "@brief Signal declaration for QMediaVideoProbeControl::flush()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QVideoFrame & > ("videoFrameProbed(const QVideoFrame &)", "videoFrameProbed", gsi::arg("frame"), "@brief Signal declaration for QMediaVideoProbeControl::videoFrameProbed(const QVideoFrame &frame)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaVideoProbeControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaVideoProbeControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QMediaVideoProbeControl> decl_QMediaVideoProbeControl (qtdecl_QMediaControl (), "QtMultimedia", "QMediaVideoProbeControl_Native",
  methods_QMediaVideoProbeControl (),
  "@hide\n@alias QMediaVideoProbeControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaVideoProbeControl> &qtdecl_QMediaVideoProbeControl () { return decl_QMediaVideoProbeControl; }

}


class QMediaVideoProbeControl_Adaptor : public QMediaVideoProbeControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaVideoProbeControl_Adaptor();

  //  [expose] bool QMediaVideoProbeControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaVideoProbeControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaVideoProbeControl::isSignalConnected(signal);
  }

  //  [expose] int QMediaVideoProbeControl::receivers(const char *signal)
  int fp_QMediaVideoProbeControl_receivers_c1731 (const char *signal) const {
    return QMediaVideoProbeControl::receivers(signal);
  }

  //  [expose] QObject *QMediaVideoProbeControl::sender()
  QObject * fp_QMediaVideoProbeControl_sender_c0 () const {
    return QMediaVideoProbeControl::sender();
  }

  //  [expose] int QMediaVideoProbeControl::senderSignalIndex()
  int fp_QMediaVideoProbeControl_senderSignalIndex_c0 () const {
    return QMediaVideoProbeControl::senderSignalIndex();
  }

  //  [emitter impl] void QMediaVideoProbeControl::destroyed(QObject *)
  void emitter_QMediaVideoProbeControl_destroyed_1302(QObject *arg1)
  {
    emit QMediaVideoProbeControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QMediaVideoProbeControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMediaVideoProbeControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaVideoProbeControl_Adaptor, bool, QEvent *>(&QMediaVideoProbeControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMediaVideoProbeControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QMediaVideoProbeControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMediaVideoProbeControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaVideoProbeControl_Adaptor, bool, QObject *, QEvent *>(&QMediaVideoProbeControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMediaVideoProbeControl::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QMediaVideoProbeControl::flush()
  void emitter_QMediaVideoProbeControl_flush_0()
  {
    emit QMediaVideoProbeControl::flush();
  }

  //  [emitter impl] void QMediaVideoProbeControl::videoFrameProbed(const QVideoFrame &frame)
  void emitter_QMediaVideoProbeControl_videoFrameProbed_2388(const QVideoFrame &frame)
  {
    emit QMediaVideoProbeControl::videoFrameProbed(frame);
  }

  //  [adaptor impl] void QMediaVideoProbeControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMediaVideoProbeControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaVideoProbeControl_Adaptor, QChildEvent *>(&QMediaVideoProbeControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMediaVideoProbeControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaVideoProbeControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMediaVideoProbeControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaVideoProbeControl_Adaptor, QEvent *>(&QMediaVideoProbeControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMediaVideoProbeControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaVideoProbeControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaVideoProbeControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaVideoProbeControl_Adaptor, const QMetaMethod &>(&QMediaVideoProbeControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaVideoProbeControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaVideoProbeControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMediaVideoProbeControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaVideoProbeControl_Adaptor, QTimerEvent *>(&QMediaVideoProbeControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMediaVideoProbeControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaVideoProbeControl_Adaptor::~QMediaVideoProbeControl_Adaptor() { }

// void QMediaVideoProbeControl::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaVideoProbeControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaVideoProbeControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QMediaVideoProbeControl::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaVideoProbeControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaVideoProbeControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QMediaVideoProbeControl::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QMediaVideoProbeControl_Adaptor *)cls)->emitter_QMediaVideoProbeControl_destroyed_1302 (arg1);
}


// void QMediaVideoProbeControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaVideoProbeControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaVideoProbeControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaVideoProbeControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaVideoProbeControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaVideoProbeControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaVideoProbeControl::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaVideoProbeControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaVideoProbeControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QMediaVideoProbeControl::flush()

static void _init_emitter_flush_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_flush_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QMediaVideoProbeControl_Adaptor *)cls)->emitter_QMediaVideoProbeControl_flush_0 ();
}


// exposed bool QMediaVideoProbeControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QMediaVideoProbeControl_Adaptor *)cls)->fp_QMediaVideoProbeControl_isSignalConnected_c2394 (arg1));
}


// exposed int QMediaVideoProbeControl::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QMediaVideoProbeControl_Adaptor *)cls)->fp_QMediaVideoProbeControl_receivers_c1731 (arg1));
}


// exposed QObject *QMediaVideoProbeControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaVideoProbeControl_Adaptor *)cls)->fp_QMediaVideoProbeControl_sender_c0 ());
}


// exposed int QMediaVideoProbeControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaVideoProbeControl_Adaptor *)cls)->fp_QMediaVideoProbeControl_senderSignalIndex_c0 ());
}


// void QMediaVideoProbeControl::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaVideoProbeControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaVideoProbeControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QMediaVideoProbeControl::videoFrameProbed(const QVideoFrame &frame)

static void _init_emitter_videoFrameProbed_2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("frame");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_videoFrameProbed_2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ((QMediaVideoProbeControl_Adaptor *)cls)->emitter_QMediaVideoProbeControl_videoFrameProbed_2388 (arg1);
}


namespace gsi
{

gsi::Class<QMediaVideoProbeControl> &qtdecl_QMediaVideoProbeControl ();

static gsi::Methods methods_QMediaVideoProbeControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaVideoProbeControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaVideoProbeControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QMediaVideoProbeControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaVideoProbeControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaVideoProbeControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaVideoProbeControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_flush", "@brief Emitter for signal void QMediaVideoProbeControl::flush()\nCall this method to emit this signal.", false, &_init_emitter_flush_0, &_call_emitter_flush_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaVideoProbeControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaVideoProbeControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaVideoProbeControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaVideoProbeControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaVideoProbeControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_videoFrameProbed", "@brief Emitter for signal void QMediaVideoProbeControl::videoFrameProbed(const QVideoFrame &frame)\nCall this method to emit this signal.", false, &_init_emitter_videoFrameProbed_2388, &_call_emitter_videoFrameProbed_2388);
  return methods;
}

gsi::Class<QMediaVideoProbeControl_Adaptor> decl_QMediaVideoProbeControl_Adaptor (qtdecl_QMediaVideoProbeControl (), "QtMultimedia", "QMediaVideoProbeControl",
  methods_QMediaVideoProbeControl_Adaptor (),
  "@qt\n@brief Binding of QMediaVideoProbeControl");

}


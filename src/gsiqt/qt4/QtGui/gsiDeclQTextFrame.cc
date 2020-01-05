
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
*  @file gsiDeclQTextFrame.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextFrame>
#include <QChildEvent>
#include <QEvent>
#include <QObject>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextFrame

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QTextFrame::staticMetaObject);
}


// QList<QTextFrame *> QTextFrame::childFrames()


static void _init_f_childFrames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QTextFrame *> > ();
}

static void _call_f_childFrames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QTextFrame *> > ((QList<QTextFrame *>)((QTextFrame *)cls)->childFrames ());
}


// QTextCursor QTextFrame::firstCursorPosition()


static void _init_f_firstCursorPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCursor > ();
}

static void _call_f_firstCursorPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCursor > ((QTextCursor)((QTextFrame *)cls)->firstCursorPosition ());
}


// int QTextFrame::firstPosition()


static void _init_f_firstPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_firstPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFrame *)cls)->firstPosition ());
}


// QTextFrameFormat QTextFrame::frameFormat()


static void _init_f_frameFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrameFormat > ();
}

static void _call_f_frameFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrameFormat > ((QTextFrameFormat)((QTextFrame *)cls)->frameFormat ());
}


// QTextCursor QTextFrame::lastCursorPosition()


static void _init_f_lastCursorPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCursor > ();
}

static void _call_f_lastCursorPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCursor > ((QTextCursor)((QTextFrame *)cls)->lastCursorPosition ());
}


// int QTextFrame::lastPosition()


static void _init_f_lastPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lastPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFrame *)cls)->lastPosition ());
}


// QTextFrame *QTextFrame::parentFrame()


static void _init_f_parentFrame_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrame * > ();
}

static void _call_f_parentFrame_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrame * > ((QTextFrame *)((QTextFrame *)cls)->parentFrame ());
}


// void QTextFrame::setFrameFormat(const QTextFrameFormat &format)


static void _init_f_setFrameFormat_2923 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QTextFrameFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFrameFormat_2923 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFrameFormat &arg1 = gsi::arg_reader<const QTextFrameFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrame *)cls)->setFrameFormat (arg1);
}


// static QString QTextFrame::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QTextFrame::tr (arg1, arg2));
}


// static QString QTextFrame::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QTextFrame::tr (arg1, arg2, arg3));
}


// static QString QTextFrame::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (0, heap);
  ret.write<QString > ((QString)QTextFrame::trUtf8 (arg1, arg2));
}


// static QString QTextFrame::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)QTextFrame::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QTextFrame () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("childFrames", "@brief Method QList<QTextFrame *> QTextFrame::childFrames()\n", true, &_init_f_childFrames_c0, &_call_f_childFrames_c0);
  methods += new qt_gsi::GenericMethod ("firstCursorPosition", "@brief Method QTextCursor QTextFrame::firstCursorPosition()\n", true, &_init_f_firstCursorPosition_c0, &_call_f_firstCursorPosition_c0);
  methods += new qt_gsi::GenericMethod ("firstPosition", "@brief Method int QTextFrame::firstPosition()\n", true, &_init_f_firstPosition_c0, &_call_f_firstPosition_c0);
  methods += new qt_gsi::GenericMethod (":frameFormat", "@brief Method QTextFrameFormat QTextFrame::frameFormat()\n", true, &_init_f_frameFormat_c0, &_call_f_frameFormat_c0);
  methods += new qt_gsi::GenericMethod ("lastCursorPosition", "@brief Method QTextCursor QTextFrame::lastCursorPosition()\n", true, &_init_f_lastCursorPosition_c0, &_call_f_lastCursorPosition_c0);
  methods += new qt_gsi::GenericMethod ("lastPosition", "@brief Method int QTextFrame::lastPosition()\n", true, &_init_f_lastPosition_c0, &_call_f_lastPosition_c0);
  methods += new qt_gsi::GenericMethod ("parentFrame", "@brief Method QTextFrame *QTextFrame::parentFrame()\n", true, &_init_f_parentFrame_c0, &_call_f_parentFrame_c0);
  methods += new qt_gsi::GenericMethod ("setFrameFormat|frameFormat=", "@brief Method void QTextFrame::setFrameFormat(const QTextFrameFormat &format)\n", false, &_init_f_setFrameFormat_2923, &_call_f_setFrameFormat_2923);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QTextFrame::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextFrame::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QTextFrame::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextFrame::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QTextFrame::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QTextObject> &qtdecl_QTextObject ();

qt_gsi::QtNativeClass<QTextFrame> decl_QTextFrame (qtdecl_QTextObject (), "QtGui", "QTextFrame_Native",
  methods_QTextFrame (),
  "@hide\n@alias QTextFrame");

GSI_QTGUI_PUBLIC gsi::Class<QTextFrame> &qtdecl_QTextFrame () { return decl_QTextFrame; }

}


class QTextFrame_Adaptor : public QTextFrame, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTextFrame_Adaptor();

  //  [adaptor ctor] QTextFrame::QTextFrame(QTextDocument *doc)
  QTextFrame_Adaptor(QTextDocument *doc) : QTextFrame(doc)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QTextFrame::receivers(const char *signal)
  int fp_QTextFrame_receivers_c1731 (const char *signal) const {
    return QTextFrame::receivers(signal);
  }

  //  [expose] QObject *QTextFrame::sender()
  QObject * fp_QTextFrame_sender_c0 () const {
    return QTextFrame::sender();
  }

  //  [expose] void QTextFrame::setFormat(const QTextFormat &format)
  void fp_QTextFrame_setFormat_2432 (const QTextFormat &format) {
    QTextFrame::setFormat(format);
  }

  //  [adaptor impl] bool QTextFrame::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QTextFrame::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QTextFrame_Adaptor, bool, QEvent *>(&QTextFrame_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QTextFrame::event(arg1);
    }
  }

  //  [adaptor impl] bool QTextFrame::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QTextFrame::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QTextFrame_Adaptor, bool, QObject *, QEvent *>(&QTextFrame_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QTextFrame::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QTextFrame::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QTextFrame::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QTextFrame_Adaptor, QChildEvent *>(&QTextFrame_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QTextFrame::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QTextFrame::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QTextFrame::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QTextFrame_Adaptor, QEvent *>(&QTextFrame_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QTextFrame::customEvent(arg1);
    }
  }

  //  [emitter impl] void QTextFrame::destroyed(QObject *)
  void emitter_QTextFrame_destroyed_1302(QObject *arg1)
  {
    emit QTextFrame::destroyed(arg1);
  }

  //  [adaptor impl] void QTextFrame::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QTextFrame::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QTextFrame_Adaptor, const char *>(&QTextFrame_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QTextFrame::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QTextFrame::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QTextFrame::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QTextFrame_Adaptor, QTimerEvent *>(&QTextFrame_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QTextFrame::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QTextFrame_Adaptor::~QTextFrame_Adaptor() { }

//  Constructor QTextFrame::QTextFrame(QTextDocument *doc) (adaptor class)

static void _init_ctor_QTextFrame_Adaptor_1955 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doc");
  decl->add_arg<QTextDocument * > (argspec_0);
  decl->set_return_new<QTextFrame_Adaptor> ();
}

static void _call_ctor_QTextFrame_Adaptor_1955 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextDocument *arg1 = gsi::arg_reader<QTextDocument * >() (args, heap);
  ret.write<QTextFrame_Adaptor *> (new QTextFrame_Adaptor (arg1));
}


// void QTextFrame::childEvent(QChildEvent *)

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
  ((QTextFrame_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextFrame_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QTextFrame::customEvent(QEvent *)

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
  ((QTextFrame_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextFrame_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QTextFrame::destroyed(QObject *)

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
  ((QTextFrame_Adaptor *)cls)->emitter_QTextFrame_destroyed_1302 (arg1);
}


// void QTextFrame::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrame_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextFrame_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QTextFrame::event(QEvent *)

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
  ret.write<bool > ((bool)((QTextFrame_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextFrame_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QTextFrame::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QTextFrame_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextFrame_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed int QTextFrame::receivers(const char *signal)

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
  ret.write<int > ((int)((QTextFrame_Adaptor *)cls)->fp_QTextFrame_receivers_c1731 (arg1));
}


// exposed QObject *QTextFrame::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QTextFrame_Adaptor *)cls)->fp_QTextFrame_sender_c0 ());
}


// exposed void QTextFrame::setFormat(const QTextFormat &format)

static void _init_fp_setFormat_2432 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_setFormat_2432 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFrame_Adaptor *)cls)->fp_QTextFrame_setFormat_2432 (arg1);
}


// void QTextFrame::timerEvent(QTimerEvent *)

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
  ((QTextFrame_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextFrame_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QTextFrame> &qtdecl_QTextFrame ();

static gsi::Methods methods_QTextFrame_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFrame::QTextFrame(QTextDocument *doc)\nThis method creates an object of class QTextFrame.", &_init_ctor_QTextFrame_Adaptor_1955, &_call_ctor_QTextFrame_Adaptor_1955);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QTextFrame::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QTextFrame::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QTextFrame::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QTextFrame::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QTextFrame::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QTextFrame::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QTextFrame::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QTextFrame::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*setFormat", "@brief Method void QTextFrame::setFormat(const QTextFormat &format)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setFormat_2432, &_call_fp_setFormat_2432);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QTextFrame::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QTextFrame_Adaptor> decl_QTextFrame_Adaptor (qtdecl_QTextFrame (), "QtGui", "QTextFrame",
  methods_QTextFrame_Adaptor (),
  "@qt\n@brief Binding of QTextFrame");

}


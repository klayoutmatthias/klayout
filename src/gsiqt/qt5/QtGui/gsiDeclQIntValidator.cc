
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
*  @file gsiDeclQIntValidator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIntValidator>
#include <QChildEvent>
#include <QEvent>
#include <QLocale>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIntValidator

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QIntValidator::staticMetaObject);
}


// int QIntValidator::bottom()


static void _init_f_bottom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bottom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QIntValidator *)cls)->bottom ());
}


// void QIntValidator::fixup(QString &input)


static void _init_f_fixup_c1330 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("input");
  decl->add_arg<QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_fixup_c1330 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = gsi::arg_reader<QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIntValidator *)cls)->fixup (arg1);
}


// void QIntValidator::setBottom(int)


static void _init_f_setBottom_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottom_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIntValidator *)cls)->setBottom (arg1);
}


// void QIntValidator::setRange(int bottom, int top)


static void _init_f_setRange_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setRange_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIntValidator *)cls)->setRange (arg1, arg2);
}


// void QIntValidator::setTop(int)


static void _init_f_setTop_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTop_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIntValidator *)cls)->setTop (arg1);
}


// int QIntValidator::top()


static void _init_f_top_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_top_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QIntValidator *)cls)->top ());
}


// QValidator::State QIntValidator::validate(QString &, int &)


static void _init_f_validate_c2171 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<int & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QValidator::State>::target_type > ();
}

static void _call_f_validate_c2171 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = gsi::arg_reader<QString & >() (args, heap);
  int &arg2 = gsi::arg_reader<int & >() (args, heap);
  ret.write<qt_gsi::Converter<QValidator::State>::target_type > ((qt_gsi::Converter<QValidator::State>::target_type)qt_gsi::CppToQtAdaptor<QValidator::State>(((QIntValidator *)cls)->validate (arg1, arg2)));
}


// static QString QIntValidator::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QIntValidator::tr (arg1, arg2, arg3));
}


// static QString QIntValidator::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QIntValidator::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QIntValidator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":bottom", "@brief Method int QIntValidator::bottom()\n", true, &_init_f_bottom_c0, &_call_f_bottom_c0);
  methods += new qt_gsi::GenericMethod ("fixup", "@brief Method void QIntValidator::fixup(QString &input)\nThis is a reimplementation of QValidator::fixup", true, &_init_f_fixup_c1330, &_call_f_fixup_c1330);
  methods += new qt_gsi::GenericMethod ("setBottom|bottom=", "@brief Method void QIntValidator::setBottom(int)\n", false, &_init_f_setBottom_767, &_call_f_setBottom_767);
  methods += new qt_gsi::GenericMethod ("setRange", "@brief Method void QIntValidator::setRange(int bottom, int top)\n", false, &_init_f_setRange_1426, &_call_f_setRange_1426);
  methods += new qt_gsi::GenericMethod ("setTop|top=", "@brief Method void QIntValidator::setTop(int)\n", false, &_init_f_setTop_767, &_call_f_setTop_767);
  methods += new qt_gsi::GenericMethod (":top", "@brief Method int QIntValidator::top()\n", true, &_init_f_top_c0, &_call_f_top_c0);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Method QValidator::State QIntValidator::validate(QString &, int &)\nThis is a reimplementation of QValidator::validate", true, &_init_f_validate_c2171, &_call_f_validate_c2171);
  methods += gsi::qt_signal<int > ("bottomChanged(int)", "bottomChanged", gsi::arg("bottom"), "@brief Signal declaration for QIntValidator::bottomChanged(int bottom)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("changed()", "changed", "@brief Signal declaration for QIntValidator::changed()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QIntValidator::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("topChanged(int)", "topChanged", gsi::arg("top"), "@brief Signal declaration for QIntValidator::topChanged(int top)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QIntValidator::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QIntValidator::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QValidator> &qtdecl_QValidator ();

qt_gsi::QtNativeClass<QIntValidator> decl_QIntValidator (qtdecl_QValidator (), "QtGui", "QIntValidator_Native",
  methods_QIntValidator (),
  "@hide\n@alias QIntValidator");

GSI_QTGUI_PUBLIC gsi::Class<QIntValidator> &qtdecl_QIntValidator () { return decl_QIntValidator; }

}


class QIntValidator_Adaptor : public QIntValidator, public qt_gsi::QtObjectBase
{
public:

  virtual ~QIntValidator_Adaptor();

  //  [adaptor ctor] QIntValidator::QIntValidator(QObject *parent)
  QIntValidator_Adaptor() : QIntValidator()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QIntValidator::QIntValidator(QObject *parent)
  QIntValidator_Adaptor(QObject *parent) : QIntValidator(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QIntValidator::QIntValidator(int bottom, int top, QObject *parent)
  QIntValidator_Adaptor(int bottom, int top) : QIntValidator(bottom, top)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QIntValidator::QIntValidator(int bottom, int top, QObject *parent)
  QIntValidator_Adaptor(int bottom, int top, QObject *parent) : QIntValidator(bottom, top, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QIntValidator::isSignalConnected(const QMetaMethod &signal)
  bool fp_QIntValidator_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QIntValidator::isSignalConnected(signal);
  }

  //  [expose] int QIntValidator::receivers(const char *signal)
  int fp_QIntValidator_receivers_c1731 (const char *signal) const {
    return QIntValidator::receivers(signal);
  }

  //  [expose] QObject *QIntValidator::sender()
  QObject * fp_QIntValidator_sender_c0 () const {
    return QIntValidator::sender();
  }

  //  [expose] int QIntValidator::senderSignalIndex()
  int fp_QIntValidator_senderSignalIndex_c0 () const {
    return QIntValidator::senderSignalIndex();
  }

  //  [emitter impl] void QIntValidator::bottomChanged(int bottom)
  void emitter_QIntValidator_bottomChanged_767(int bottom)
  {
    emit QIntValidator::bottomChanged(bottom);
  }

  //  [emitter impl] void QIntValidator::changed()
  void emitter_QIntValidator_changed_0()
  {
    emit QIntValidator::changed();
  }

  //  [emitter impl] void QIntValidator::destroyed(QObject *)
  void emitter_QIntValidator_destroyed_1302(QObject *arg1)
  {
    emit QIntValidator::destroyed(arg1);
  }

  //  [adaptor impl] bool QIntValidator::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QIntValidator::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QIntValidator_Adaptor, bool, QEvent *>(&QIntValidator_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QIntValidator::event(arg1);
    }
  }

  //  [adaptor impl] bool QIntValidator::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QIntValidator::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QIntValidator_Adaptor, bool, QObject *, QEvent *>(&QIntValidator_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QIntValidator::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QIntValidator::fixup(QString &input)
  void cbs_fixup_c1330_0(QString &input) const
  {
    QIntValidator::fixup(input);
  }

  virtual void fixup(QString &input) const
  {
    if (cb_fixup_c1330_0.can_issue()) {
      cb_fixup_c1330_0.issue<QIntValidator_Adaptor, QString &>(&QIntValidator_Adaptor::cbs_fixup_c1330_0, input);
    } else {
      QIntValidator::fixup(input);
    }
  }

  //  [adaptor impl] void QIntValidator::setRange(int bottom, int top)
  void cbs_setRange_1426_0(int bottom, int top)
  {
    QIntValidator::setRange(bottom, top);
  }

  virtual void setRange(int bottom, int top)
  {
    if (cb_setRange_1426_0.can_issue()) {
      cb_setRange_1426_0.issue<QIntValidator_Adaptor, int, int>(&QIntValidator_Adaptor::cbs_setRange_1426_0, bottom, top);
    } else {
      QIntValidator::setRange(bottom, top);
    }
  }

  //  [emitter impl] void QIntValidator::topChanged(int top)
  void emitter_QIntValidator_topChanged_767(int top)
  {
    emit QIntValidator::topChanged(top);
  }

  //  [adaptor impl] QValidator::State QIntValidator::validate(QString &, int &)
  qt_gsi::Converter<QValidator::State>::target_type cbs_validate_c2171_0(QString &arg1, int &arg2) const
  {
    return qt_gsi::CppToQtAdaptor<QValidator::State>(QIntValidator::validate(arg1, arg2));
  }

  virtual QValidator::State validate(QString &arg1, int &arg2) const
  {
    if (cb_validate_c2171_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QValidator::State>(cb_validate_c2171_0.issue<QIntValidator_Adaptor, qt_gsi::Converter<QValidator::State>::target_type, QString &, int &>(&QIntValidator_Adaptor::cbs_validate_c2171_0, arg1, arg2)).cref();
    } else {
      return QIntValidator::validate(arg1, arg2);
    }
  }

  //  [adaptor impl] void QIntValidator::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QIntValidator::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QIntValidator_Adaptor, QChildEvent *>(&QIntValidator_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QIntValidator::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QIntValidator::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QIntValidator::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QIntValidator_Adaptor, QEvent *>(&QIntValidator_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QIntValidator::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QIntValidator::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QIntValidator::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QIntValidator_Adaptor, const QMetaMethod &>(&QIntValidator_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QIntValidator::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QIntValidator::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QIntValidator::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QIntValidator_Adaptor, QTimerEvent *>(&QIntValidator_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QIntValidator::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_fixup_c1330_0;
  gsi::Callback cb_setRange_1426_0;
  gsi::Callback cb_validate_c2171_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QIntValidator_Adaptor::~QIntValidator_Adaptor() { }

//  Constructor QIntValidator::QIntValidator(QObject *parent) (adaptor class)

static void _init_ctor_QIntValidator_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QIntValidator_Adaptor> ();
}

static void _call_ctor_QIntValidator_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QIntValidator_Adaptor *> (new QIntValidator_Adaptor (arg1));
}


//  Constructor QIntValidator::QIntValidator(int bottom, int top, QObject *parent) (adaptor class)

static void _init_ctor_QIntValidator_Adaptor_2620 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return_new<QIntValidator_Adaptor> ();
}

static void _call_ctor_QIntValidator_Adaptor_2620 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  QObject *arg3 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QIntValidator_Adaptor *> (new QIntValidator_Adaptor (arg1, arg2, arg3));
}


// emitter void QIntValidator::bottomChanged(int bottom)

static void _init_emitter_bottomChanged_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_bottomChanged_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QIntValidator_Adaptor *)cls)->emitter_QIntValidator_bottomChanged_767 (arg1);
}


// emitter void QIntValidator::changed()

static void _init_emitter_changed_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_changed_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QIntValidator_Adaptor *)cls)->emitter_QIntValidator_changed_0 ();
}


// void QIntValidator::childEvent(QChildEvent *)

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
  ((QIntValidator_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QIntValidator::customEvent(QEvent *)

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
  ((QIntValidator_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QIntValidator::destroyed(QObject *)

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
  ((QIntValidator_Adaptor *)cls)->emitter_QIntValidator_destroyed_1302 (arg1);
}


// void QIntValidator::disconnectNotify(const QMetaMethod &signal)

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
  ((QIntValidator_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QIntValidator::event(QEvent *)

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
  ret.write<bool > ((bool)((QIntValidator_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QIntValidator::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QIntValidator_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// void QIntValidator::fixup(QString &input)

static void _init_cbs_fixup_c1330_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("input");
  decl->add_arg<QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_fixup_c1330_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIntValidator_Adaptor *)cls)->cbs_fixup_c1330_0 (arg1);
}

static void _set_callback_cbs_fixup_c1330_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_fixup_c1330_0 = cb;
}


// exposed bool QIntValidator::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QIntValidator_Adaptor *)cls)->fp_QIntValidator_isSignalConnected_c2394 (arg1));
}


// exposed int QIntValidator::receivers(const char *signal)

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
  ret.write<int > ((int)((QIntValidator_Adaptor *)cls)->fp_QIntValidator_receivers_c1731 (arg1));
}


// exposed QObject *QIntValidator::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QIntValidator_Adaptor *)cls)->fp_QIntValidator_sender_c0 ());
}


// exposed int QIntValidator::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QIntValidator_Adaptor *)cls)->fp_QIntValidator_senderSignalIndex_c0 ());
}


// void QIntValidator::setRange(int bottom, int top)

static void _init_cbs_setRange_1426_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_setRange_1426_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIntValidator_Adaptor *)cls)->cbs_setRange_1426_0 (arg1, arg2);
}

static void _set_callback_cbs_setRange_1426_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_setRange_1426_0 = cb;
}


// void QIntValidator::timerEvent(QTimerEvent *)

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
  ((QIntValidator_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QIntValidator::topChanged(int top)

static void _init_emitter_topChanged_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("top");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_topChanged_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QIntValidator_Adaptor *)cls)->emitter_QIntValidator_topChanged_767 (arg1);
}


// QValidator::State QIntValidator::validate(QString &, int &)

static void _init_cbs_validate_c2171_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<int & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QValidator::State>::target_type > ();
}

static void _call_cbs_validate_c2171_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  int &arg2 = args.read<int & > (heap);
  ret.write<qt_gsi::Converter<QValidator::State>::target_type > ((qt_gsi::Converter<QValidator::State>::target_type)((QIntValidator_Adaptor *)cls)->cbs_validate_c2171_0 (arg1, arg2));
}

static void _set_callback_cbs_validate_c2171_0 (void *cls, const gsi::Callback &cb)
{
  ((QIntValidator_Adaptor *)cls)->cb_validate_c2171_0 = cb;
}


namespace gsi
{

gsi::Class<QIntValidator> &qtdecl_QIntValidator ();

static gsi::Methods methods_QIntValidator_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIntValidator::QIntValidator(QObject *parent)\nThis method creates an object of class QIntValidator.", &_init_ctor_QIntValidator_Adaptor_1302, &_call_ctor_QIntValidator_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIntValidator::QIntValidator(int bottom, int top, QObject *parent)\nThis method creates an object of class QIntValidator.", &_init_ctor_QIntValidator_Adaptor_2620, &_call_ctor_QIntValidator_Adaptor_2620);
  methods += new qt_gsi::GenericMethod ("emit_bottomChanged", "@brief Emitter for signal void QIntValidator::bottomChanged(int bottom)\nCall this method to emit this signal.", false, &_init_emitter_bottomChanged_767, &_call_emitter_bottomChanged_767);
  methods += new qt_gsi::GenericMethod ("emit_changed", "@brief Emitter for signal void QIntValidator::changed()\nCall this method to emit this signal.", false, &_init_emitter_changed_0, &_call_emitter_changed_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QIntValidator::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QIntValidator::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QIntValidator::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QIntValidator::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QIntValidator::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QIntValidator::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("fixup", "@hide", true, &_init_cbs_fixup_c1330_0, &_call_cbs_fixup_c1330_0);
  methods += new qt_gsi::GenericMethod ("fixup", "@brief Virtual method void QIntValidator::fixup(QString &input)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_fixup_c1330_0, &_call_cbs_fixup_c1330_0, &_set_callback_cbs_fixup_c1330_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QIntValidator::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QIntValidator::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QIntValidator::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QIntValidator::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setRange", "@hide", false, &_init_cbs_setRange_1426_0, &_call_cbs_setRange_1426_0);
  methods += new qt_gsi::GenericMethod ("setRange", "@brief Virtual method void QIntValidator::setRange(int bottom, int top)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setRange_1426_0, &_call_cbs_setRange_1426_0, &_set_callback_cbs_setRange_1426_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QIntValidator::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_topChanged", "@brief Emitter for signal void QIntValidator::topChanged(int top)\nCall this method to emit this signal.", false, &_init_emitter_topChanged_767, &_call_emitter_topChanged_767);
  methods += new qt_gsi::GenericMethod ("validate", "@hide", true, &_init_cbs_validate_c2171_0, &_call_cbs_validate_c2171_0);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Virtual method QValidator::State QIntValidator::validate(QString &, int &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_validate_c2171_0, &_call_cbs_validate_c2171_0, &_set_callback_cbs_validate_c2171_0);
  return methods;
}

gsi::Class<QIntValidator_Adaptor> decl_QIntValidator_Adaptor (qtdecl_QIntValidator (), "QtGui", "QIntValidator",
  methods_QIntValidator_Adaptor (),
  "@qt\n@brief Binding of QIntValidator");

}


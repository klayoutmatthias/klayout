
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
*  @file gsiDeclQUndoGroup.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QUndoGroup>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QUndoStack>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QUndoGroup

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QUndoGroup::staticMetaObject);
}


// QUndoStack *QUndoGroup::activeStack()


static void _init_f_activeStack_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUndoStack * > ();
}

static void _call_f_activeStack_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUndoStack * > ((QUndoStack *)((QUndoGroup *)cls)->activeStack ());
}


// void QUndoGroup::addStack(QUndoStack *stack)


static void _init_f_addStack_1611 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stack");
  decl->add_arg<QUndoStack * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addStack_1611 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUndoStack *arg1 = gsi::arg_reader<QUndoStack * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoGroup *)cls)->addStack (arg1);
}


// bool QUndoGroup::canRedo()


static void _init_f_canRedo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canRedo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QUndoGroup *)cls)->canRedo ());
}


// bool QUndoGroup::canUndo()


static void _init_f_canUndo_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canUndo_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QUndoGroup *)cls)->canUndo ());
}


// QAction *QUndoGroup::createRedoAction(QObject *parent, const QString &prefix)


static void _init_f_createRedoAction_c3219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("prefix", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QAction * > ();
}

static void _call_f_createRedoAction_c3219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QAction * > ((QAction *)((QUndoGroup *)cls)->createRedoAction (arg1, arg2));
}


// QAction *QUndoGroup::createUndoAction(QObject *parent, const QString &prefix)


static void _init_f_createUndoAction_c3219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("prefix", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QAction * > ();
}

static void _call_f_createUndoAction_c3219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QAction * > ((QAction *)((QUndoGroup *)cls)->createUndoAction (arg1, arg2));
}


// bool QUndoGroup::isClean()


static void _init_f_isClean_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isClean_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QUndoGroup *)cls)->isClean ());
}


// void QUndoGroup::redo()


static void _init_f_redo_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_redo_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoGroup *)cls)->redo ();
}


// QString QUndoGroup::redoText()


static void _init_f_redoText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_redoText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QUndoGroup *)cls)->redoText ());
}


// void QUndoGroup::removeStack(QUndoStack *stack)


static void _init_f_removeStack_1611 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stack");
  decl->add_arg<QUndoStack * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeStack_1611 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUndoStack *arg1 = gsi::arg_reader<QUndoStack * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoGroup *)cls)->removeStack (arg1);
}


// void QUndoGroup::setActiveStack(QUndoStack *stack)


static void _init_f_setActiveStack_1611 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stack");
  decl->add_arg<QUndoStack * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setActiveStack_1611 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUndoStack *arg1 = gsi::arg_reader<QUndoStack * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoGroup *)cls)->setActiveStack (arg1);
}


// QList<QUndoStack*> QUndoGroup::stacks()


static void _init_f_stacks_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QUndoStack*> > ();
}

static void _call_f_stacks_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QUndoStack*> > ((QList<QUndoStack*>)((QUndoGroup *)cls)->stacks ());
}


// void QUndoGroup::undo()


static void _init_f_undo_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_undo_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUndoGroup *)cls)->undo ();
}


// QString QUndoGroup::undoText()


static void _init_f_undoText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_undoText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QUndoGroup *)cls)->undoText ());
}


// static QString QUndoGroup::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QUndoGroup::tr (arg1, arg2, arg3));
}


// static QString QUndoGroup::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QUndoGroup::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QUndoGroup () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":activeStack", "@brief Method QUndoStack *QUndoGroup::activeStack()\n", true, &_init_f_activeStack_c0, &_call_f_activeStack_c0);
  methods += new qt_gsi::GenericMethod ("addStack", "@brief Method void QUndoGroup::addStack(QUndoStack *stack)\n", false, &_init_f_addStack_1611, &_call_f_addStack_1611);
  methods += new qt_gsi::GenericMethod ("canRedo", "@brief Method bool QUndoGroup::canRedo()\n", true, &_init_f_canRedo_c0, &_call_f_canRedo_c0);
  methods += new qt_gsi::GenericMethod ("canUndo", "@brief Method bool QUndoGroup::canUndo()\n", true, &_init_f_canUndo_c0, &_call_f_canUndo_c0);
  methods += new qt_gsi::GenericMethod ("createRedoAction", "@brief Method QAction *QUndoGroup::createRedoAction(QObject *parent, const QString &prefix)\n", true, &_init_f_createRedoAction_c3219, &_call_f_createRedoAction_c3219);
  methods += new qt_gsi::GenericMethod ("createUndoAction", "@brief Method QAction *QUndoGroup::createUndoAction(QObject *parent, const QString &prefix)\n", true, &_init_f_createUndoAction_c3219, &_call_f_createUndoAction_c3219);
  methods += new qt_gsi::GenericMethod ("isClean?", "@brief Method bool QUndoGroup::isClean()\n", true, &_init_f_isClean_c0, &_call_f_isClean_c0);
  methods += new qt_gsi::GenericMethod ("redo", "@brief Method void QUndoGroup::redo()\n", false, &_init_f_redo_0, &_call_f_redo_0);
  methods += new qt_gsi::GenericMethod ("redoText", "@brief Method QString QUndoGroup::redoText()\n", true, &_init_f_redoText_c0, &_call_f_redoText_c0);
  methods += new qt_gsi::GenericMethod ("removeStack", "@brief Method void QUndoGroup::removeStack(QUndoStack *stack)\n", false, &_init_f_removeStack_1611, &_call_f_removeStack_1611);
  methods += new qt_gsi::GenericMethod ("setActiveStack|activeStack=", "@brief Method void QUndoGroup::setActiveStack(QUndoStack *stack)\n", false, &_init_f_setActiveStack_1611, &_call_f_setActiveStack_1611);
  methods += new qt_gsi::GenericMethod ("stacks", "@brief Method QList<QUndoStack*> QUndoGroup::stacks()\n", true, &_init_f_stacks_c0, &_call_f_stacks_c0);
  methods += new qt_gsi::GenericMethod ("undo", "@brief Method void QUndoGroup::undo()\n", false, &_init_f_undo_0, &_call_f_undo_0);
  methods += new qt_gsi::GenericMethod ("undoText", "@brief Method QString QUndoGroup::undoText()\n", true, &_init_f_undoText_c0, &_call_f_undoText_c0);
  methods += gsi::qt_signal<QUndoStack * > ("activeStackChanged(QUndoStack *)", "activeStackChanged", gsi::arg("stack"), "@brief Signal declaration for QUndoGroup::activeStackChanged(QUndoStack *stack)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<bool > ("canRedoChanged(bool)", "canRedoChanged", gsi::arg("canRedo"), "@brief Signal declaration for QUndoGroup::canRedoChanged(bool canRedo)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<bool > ("canUndoChanged(bool)", "canUndoChanged", gsi::arg("canUndo"), "@brief Signal declaration for QUndoGroup::canUndoChanged(bool canUndo)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<bool > ("cleanChanged(bool)", "cleanChanged", gsi::arg("clean"), "@brief Signal declaration for QUndoGroup::cleanChanged(bool clean)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QUndoGroup::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("indexChanged(int)", "indexChanged", gsi::arg("idx"), "@brief Signal declaration for QUndoGroup::indexChanged(int idx)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("redoTextChanged(const QString &)", "redoTextChanged", gsi::arg("redoText"), "@brief Signal declaration for QUndoGroup::redoTextChanged(const QString &redoText)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("undoTextChanged(const QString &)", "undoTextChanged", gsi::arg("undoText"), "@brief Signal declaration for QUndoGroup::undoTextChanged(const QString &undoText)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QUndoGroup::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QUndoGroup::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QUndoGroup> decl_QUndoGroup (qtdecl_QObject (), "QtWidgets", "QUndoGroup_Native",
  methods_QUndoGroup (),
  "@hide\n@alias QUndoGroup");

GSI_QTWIDGETS_PUBLIC gsi::Class<QUndoGroup> &qtdecl_QUndoGroup () { return decl_QUndoGroup; }

}


class QUndoGroup_Adaptor : public QUndoGroup, public qt_gsi::QtObjectBase
{
public:

  virtual ~QUndoGroup_Adaptor();

  //  [adaptor ctor] QUndoGroup::QUndoGroup(QObject *parent)
  QUndoGroup_Adaptor() : QUndoGroup()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QUndoGroup::QUndoGroup(QObject *parent)
  QUndoGroup_Adaptor(QObject *parent) : QUndoGroup(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QUndoGroup::isSignalConnected(const QMetaMethod &signal)
  bool fp_QUndoGroup_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QUndoGroup::isSignalConnected(signal);
  }

  //  [expose] int QUndoGroup::receivers(const char *signal)
  int fp_QUndoGroup_receivers_c1731 (const char *signal) const {
    return QUndoGroup::receivers(signal);
  }

  //  [expose] QObject *QUndoGroup::sender()
  QObject * fp_QUndoGroup_sender_c0 () const {
    return QUndoGroup::sender();
  }

  //  [expose] int QUndoGroup::senderSignalIndex()
  int fp_QUndoGroup_senderSignalIndex_c0 () const {
    return QUndoGroup::senderSignalIndex();
  }

  //  [emitter impl] void QUndoGroup::activeStackChanged(QUndoStack *stack)
  void emitter_QUndoGroup_activeStackChanged_1611(QUndoStack *stack)
  {
    emit QUndoGroup::activeStackChanged(stack);
  }

  //  [emitter impl] void QUndoGroup::canRedoChanged(bool canRedo)
  void emitter_QUndoGroup_canRedoChanged_864(bool canRedo)
  {
    emit QUndoGroup::canRedoChanged(canRedo);
  }

  //  [emitter impl] void QUndoGroup::canUndoChanged(bool canUndo)
  void emitter_QUndoGroup_canUndoChanged_864(bool canUndo)
  {
    emit QUndoGroup::canUndoChanged(canUndo);
  }

  //  [emitter impl] void QUndoGroup::cleanChanged(bool clean)
  void emitter_QUndoGroup_cleanChanged_864(bool clean)
  {
    emit QUndoGroup::cleanChanged(clean);
  }

  //  [emitter impl] void QUndoGroup::destroyed(QObject *)
  void emitter_QUndoGroup_destroyed_1302(QObject *arg1)
  {
    emit QUndoGroup::destroyed(arg1);
  }

  //  [adaptor impl] bool QUndoGroup::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QUndoGroup::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QUndoGroup_Adaptor, bool, QEvent *>(&QUndoGroup_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QUndoGroup::event(arg1);
    }
  }

  //  [adaptor impl] bool QUndoGroup::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QUndoGroup::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QUndoGroup_Adaptor, bool, QObject *, QEvent *>(&QUndoGroup_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QUndoGroup::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QUndoGroup::indexChanged(int idx)
  void emitter_QUndoGroup_indexChanged_767(int idx)
  {
    emit QUndoGroup::indexChanged(idx);
  }

  //  [emitter impl] void QUndoGroup::redoTextChanged(const QString &redoText)
  void emitter_QUndoGroup_redoTextChanged_2025(const QString &redoText)
  {
    emit QUndoGroup::redoTextChanged(redoText);
  }

  //  [emitter impl] void QUndoGroup::undoTextChanged(const QString &undoText)
  void emitter_QUndoGroup_undoTextChanged_2025(const QString &undoText)
  {
    emit QUndoGroup::undoTextChanged(undoText);
  }

  //  [adaptor impl] void QUndoGroup::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QUndoGroup::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QUndoGroup_Adaptor, QChildEvent *>(&QUndoGroup_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QUndoGroup::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QUndoGroup::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QUndoGroup::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QUndoGroup_Adaptor, QEvent *>(&QUndoGroup_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QUndoGroup::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QUndoGroup::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QUndoGroup::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QUndoGroup_Adaptor, const QMetaMethod &>(&QUndoGroup_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QUndoGroup::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QUndoGroup::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QUndoGroup::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QUndoGroup_Adaptor, QTimerEvent *>(&QUndoGroup_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QUndoGroup::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QUndoGroup_Adaptor::~QUndoGroup_Adaptor() { }

//  Constructor QUndoGroup::QUndoGroup(QObject *parent) (adaptor class)

static void _init_ctor_QUndoGroup_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QUndoGroup_Adaptor> ();
}

static void _call_ctor_QUndoGroup_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QUndoGroup_Adaptor *> (new QUndoGroup_Adaptor (arg1));
}


// emitter void QUndoGroup::activeStackChanged(QUndoStack *stack)

static void _init_emitter_activeStackChanged_1611 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stack");
  decl->add_arg<QUndoStack * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activeStackChanged_1611 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUndoStack *arg1 = gsi::arg_reader<QUndoStack * >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_activeStackChanged_1611 (arg1);
}


// emitter void QUndoGroup::canRedoChanged(bool canRedo)

static void _init_emitter_canRedoChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("canRedo");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_canRedoChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_canRedoChanged_864 (arg1);
}


// emitter void QUndoGroup::canUndoChanged(bool canUndo)

static void _init_emitter_canUndoChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("canUndo");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_canUndoChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_canUndoChanged_864 (arg1);
}


// void QUndoGroup::childEvent(QChildEvent *)

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
  ((QUndoGroup_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoGroup_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// emitter void QUndoGroup::cleanChanged(bool clean)

static void _init_emitter_cleanChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("clean");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_cleanChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_cleanChanged_864 (arg1);
}


// void QUndoGroup::customEvent(QEvent *)

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
  ((QUndoGroup_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoGroup_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QUndoGroup::destroyed(QObject *)

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
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_destroyed_1302 (arg1);
}


// void QUndoGroup::disconnectNotify(const QMetaMethod &signal)

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
  ((QUndoGroup_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoGroup_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QUndoGroup::event(QEvent *)

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
  ret.write<bool > ((bool)((QUndoGroup_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoGroup_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QUndoGroup::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QUndoGroup_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoGroup_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QUndoGroup::indexChanged(int idx)

static void _init_emitter_indexChanged_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("idx");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_indexChanged_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_indexChanged_767 (arg1);
}


// exposed bool QUndoGroup::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QUndoGroup_Adaptor *)cls)->fp_QUndoGroup_isSignalConnected_c2394 (arg1));
}


// exposed int QUndoGroup::receivers(const char *signal)

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
  ret.write<int > ((int)((QUndoGroup_Adaptor *)cls)->fp_QUndoGroup_receivers_c1731 (arg1));
}


// emitter void QUndoGroup::redoTextChanged(const QString &redoText)

static void _init_emitter_redoTextChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("redoText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_redoTextChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_redoTextChanged_2025 (arg1);
}


// exposed QObject *QUndoGroup::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QUndoGroup_Adaptor *)cls)->fp_QUndoGroup_sender_c0 ());
}


// exposed int QUndoGroup::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QUndoGroup_Adaptor *)cls)->fp_QUndoGroup_senderSignalIndex_c0 ());
}


// void QUndoGroup::timerEvent(QTimerEvent *)

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
  ((QUndoGroup_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QUndoGroup_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// emitter void QUndoGroup::undoTextChanged(const QString &undoText)

static void _init_emitter_undoTextChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("undoText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_undoTextChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QUndoGroup_Adaptor *)cls)->emitter_QUndoGroup_undoTextChanged_2025 (arg1);
}


namespace gsi
{

gsi::Class<QUndoGroup> &qtdecl_QUndoGroup ();

static gsi::Methods methods_QUndoGroup_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUndoGroup::QUndoGroup(QObject *parent)\nThis method creates an object of class QUndoGroup.", &_init_ctor_QUndoGroup_Adaptor_1302, &_call_ctor_QUndoGroup_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("emit_activeStackChanged", "@brief Emitter for signal void QUndoGroup::activeStackChanged(QUndoStack *stack)\nCall this method to emit this signal.", false, &_init_emitter_activeStackChanged_1611, &_call_emitter_activeStackChanged_1611);
  methods += new qt_gsi::GenericMethod ("emit_canRedoChanged", "@brief Emitter for signal void QUndoGroup::canRedoChanged(bool canRedo)\nCall this method to emit this signal.", false, &_init_emitter_canRedoChanged_864, &_call_emitter_canRedoChanged_864);
  methods += new qt_gsi::GenericMethod ("emit_canUndoChanged", "@brief Emitter for signal void QUndoGroup::canUndoChanged(bool canUndo)\nCall this method to emit this signal.", false, &_init_emitter_canUndoChanged_864, &_call_emitter_canUndoChanged_864);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QUndoGroup::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("emit_cleanChanged", "@brief Emitter for signal void QUndoGroup::cleanChanged(bool clean)\nCall this method to emit this signal.", false, &_init_emitter_cleanChanged_864, &_call_emitter_cleanChanged_864);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QUndoGroup::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QUndoGroup::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QUndoGroup::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QUndoGroup::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QUndoGroup::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_indexChanged", "@brief Emitter for signal void QUndoGroup::indexChanged(int idx)\nCall this method to emit this signal.", false, &_init_emitter_indexChanged_767, &_call_emitter_indexChanged_767);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QUndoGroup::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QUndoGroup::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("emit_redoTextChanged", "@brief Emitter for signal void QUndoGroup::redoTextChanged(const QString &redoText)\nCall this method to emit this signal.", false, &_init_emitter_redoTextChanged_2025, &_call_emitter_redoTextChanged_2025);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QUndoGroup::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QUndoGroup::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QUndoGroup::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("emit_undoTextChanged", "@brief Emitter for signal void QUndoGroup::undoTextChanged(const QString &undoText)\nCall this method to emit this signal.", false, &_init_emitter_undoTextChanged_2025, &_call_emitter_undoTextChanged_2025);
  return methods;
}

gsi::Class<QUndoGroup_Adaptor> decl_QUndoGroup_Adaptor (qtdecl_QUndoGroup (), "QtWidgets", "QUndoGroup",
  methods_QUndoGroup_Adaptor (),
  "@qt\n@brief Binding of QUndoGroup");

}


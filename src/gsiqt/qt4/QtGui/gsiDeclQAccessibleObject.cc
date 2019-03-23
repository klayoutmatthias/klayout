
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
*  @file gsiDeclQAccessibleObject.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleObject>
#include <QAccessibleInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleObject

// QString QAccessibleObject::actionText(int action, QAccessible::Text t, int child)


static void _init_f_actionText_c3378 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("child");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_actionText_c3378 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QAccessibleObject *)cls)->actionText (arg1, qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg2).cref(), arg3));
}


// bool QAccessibleObject::doAction(int action, int child, const QList<QVariant> &params)


static void _init_f_doAction_4052 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("action");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("params");
  decl->add_arg<const QList<QVariant> & > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_doAction_4052 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QList<QVariant> &arg3 = gsi::arg_reader<const QList<QVariant> & >() (args, heap);
  ret.write<bool > ((bool)((QAccessibleObject *)cls)->doAction (arg1, arg2, arg3));
}


// bool QAccessibleObject::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleObject *)cls)->isValid ());
}


// QObject *QAccessibleObject::object()


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleObject *)cls)->object ());
}


// QRect QAccessibleObject::rect(int child)


static void _init_f_rect_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_rect_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QRect > ((QRect)((QAccessibleObject *)cls)->rect (arg1));
}


// void QAccessibleObject::setText(QAccessible::Text t, int child, const QString &text)


static void _init_f_setText_4636 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setText_4636 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleObject *)cls)->setText (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2, arg3);
}


// int QAccessibleObject::userActionCount(int child)


static void _init_f_userActionCount_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("child");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_userActionCount_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QAccessibleObject *)cls)->userActionCount (arg1));
}



namespace gsi
{

static gsi::Methods methods_QAccessibleObject () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("actionText", "@brief Method QString QAccessibleObject::actionText(int action, QAccessible::Text t, int child)\nThis is a reimplementation of QAccessibleInterface::actionText", true, &_init_f_actionText_c3378, &_call_f_actionText_c3378);
  methods += new qt_gsi::GenericMethod ("doAction", "@brief Method bool QAccessibleObject::doAction(int action, int child, const QList<QVariant> &params)\nThis is a reimplementation of QAccessibleInterface::doAction", false, &_init_f_doAction_4052, &_call_f_doAction_4052);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAccessibleObject::isValid()\nThis is a reimplementation of QAccessibleInterface::isValid", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method QObject *QAccessibleObject::object()\nThis is a reimplementation of QAccessibleInterface::object", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRect QAccessibleObject::rect(int child)\nThis is a reimplementation of QAccessibleInterface::rect", true, &_init_f_rect_c767, &_call_f_rect_c767);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QAccessibleObject::setText(QAccessible::Text t, int child, const QString &text)\nThis is a reimplementation of QAccessibleInterface::setText", false, &_init_f_setText_4636, &_call_f_setText_4636);
  methods += new qt_gsi::GenericMethod ("userActionCount", "@brief Method int QAccessibleObject::userActionCount(int child)\nThis is a reimplementation of QAccessibleInterface::userActionCount", true, &_init_f_userActionCount_c767, &_call_f_userActionCount_c767);
  return methods;
}

gsi::Class<QAccessibleInterface> &qtdecl_QAccessibleInterface ();

gsi::Class<QAccessibleObject> decl_QAccessibleObject (qtdecl_QAccessibleInterface (), "QtGui", "QAccessibleObject",
  methods_QAccessibleObject (),
  "@qt\n@brief Binding of QAccessibleObject");


GSI_QTGUI_PUBLIC gsi::Class<QAccessibleObject> &qtdecl_QAccessibleObject () { return decl_QAccessibleObject; }

}


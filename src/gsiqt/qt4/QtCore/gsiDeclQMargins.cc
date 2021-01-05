
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
*  @file gsiDeclQMargins.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMargins>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMargins

//  Constructor QMargins::QMargins()


static void _init_ctor_QMargins_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMargins> ();
}

static void _call_ctor_QMargins_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMargins *> (new QMargins ());
}


//  Constructor QMargins::QMargins(int left, int top, int right, int bottom)


static void _init_ctor_QMargins_2744 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("left");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("right");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bottom");
  decl->add_arg<int > (argspec_3);
  decl->set_return_new<QMargins> ();
}

static void _call_ctor_QMargins_2744 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  ret.write<QMargins *> (new QMargins (arg1, arg2, arg3, arg4));
}


// int QMargins::bottom()


static void _init_f_bottom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bottom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMargins *)cls)->bottom ());
}


// bool QMargins::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMargins *)cls)->isNull ());
}


// int QMargins::left()


static void _init_f_left_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_left_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMargins *)cls)->left ());
}


// int QMargins::right()


static void _init_f_right_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_right_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMargins *)cls)->right ());
}


// void QMargins::setBottom(int bottom)


static void _init_f_setBottom_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottom_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMargins *)cls)->setBottom (arg1);
}


// void QMargins::setLeft(int left)


static void _init_f_setLeft_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("left");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeft_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMargins *)cls)->setLeft (arg1);
}


// void QMargins::setRight(int right)


static void _init_f_setRight_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("right");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRight_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMargins *)cls)->setRight (arg1);
}


// void QMargins::setTop(int top)


static void _init_f_setTop_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("top");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTop_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMargins *)cls)->setTop (arg1);
}


// int QMargins::top()


static void _init_f_top_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_top_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMargins *)cls)->top ());
}


//  bool ::operator==(const QMargins &m1, const QMargins &m2)
static bool op_QMargins_operator_eq__eq__4122(const QMargins *_self, const QMargins &m2) {
  return ::operator==(*_self, m2);
}

//  bool ::operator!=(const QMargins &m1, const QMargins &m2)
static bool op_QMargins_operator_excl__eq__4122(const QMargins *_self, const QMargins &m2) {
  return ::operator!=(*_self, m2);
}


namespace gsi
{

static gsi::Methods methods_QMargins () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMargins::QMargins()\nThis method creates an object of class QMargins.", &_init_ctor_QMargins_0, &_call_ctor_QMargins_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMargins::QMargins(int left, int top, int right, int bottom)\nThis method creates an object of class QMargins.", &_init_ctor_QMargins_2744, &_call_ctor_QMargins_2744);
  methods += new qt_gsi::GenericMethod (":bottom", "@brief Method int QMargins::bottom()\n", true, &_init_f_bottom_c0, &_call_f_bottom_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QMargins::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":left", "@brief Method int QMargins::left()\n", true, &_init_f_left_c0, &_call_f_left_c0);
  methods += new qt_gsi::GenericMethod (":right", "@brief Method int QMargins::right()\n", true, &_init_f_right_c0, &_call_f_right_c0);
  methods += new qt_gsi::GenericMethod ("setBottom|bottom=", "@brief Method void QMargins::setBottom(int bottom)\n", false, &_init_f_setBottom_767, &_call_f_setBottom_767);
  methods += new qt_gsi::GenericMethod ("setLeft|left=", "@brief Method void QMargins::setLeft(int left)\n", false, &_init_f_setLeft_767, &_call_f_setLeft_767);
  methods += new qt_gsi::GenericMethod ("setRight|right=", "@brief Method void QMargins::setRight(int right)\n", false, &_init_f_setRight_767, &_call_f_setRight_767);
  methods += new qt_gsi::GenericMethod ("setTop|top=", "@brief Method void QMargins::setTop(int top)\n", false, &_init_f_setTop_767, &_call_f_setTop_767);
  methods += new qt_gsi::GenericMethod (":top", "@brief Method int QMargins::top()\n", true, &_init_f_top_c0, &_call_f_top_c0);
  methods += gsi::method_ext("==", &::op_QMargins_operator_eq__eq__4122, gsi::arg ("m2"), "@brief Operator bool ::operator==(const QMargins &m1, const QMargins &m2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QMargins_operator_excl__eq__4122, gsi::arg ("m2"), "@brief Operator bool ::operator!=(const QMargins &m1, const QMargins &m2)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QMargins> decl_QMargins ("QtCore", "QMargins",
  methods_QMargins (),
  "@qt\n@brief Binding of QMargins");


GSI_QTCORE_PUBLIC gsi::Class<QMargins> &qtdecl_QMargins () { return decl_QMargins; }

}


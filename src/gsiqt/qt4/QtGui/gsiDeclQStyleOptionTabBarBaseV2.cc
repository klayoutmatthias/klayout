
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
*  @file gsiDeclQStyleOptionTabBarBaseV2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionTabBarBaseV2>
#include <QStyleOptionTabBarBase>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionTabBarBaseV2

//  Constructor QStyleOptionTabBarBaseV2::QStyleOptionTabBarBaseV2()


static void _init_ctor_QStyleOptionTabBarBaseV2_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionTabBarBaseV2> ();
}

static void _call_ctor_QStyleOptionTabBarBaseV2_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionTabBarBaseV2 *> (new QStyleOptionTabBarBaseV2 ());
}


//  Constructor QStyleOptionTabBarBaseV2::QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2 &other)


static void _init_ctor_QStyleOptionTabBarBaseV2_3627 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTabBarBaseV2 & > (argspec_0);
  decl->set_return_new<QStyleOptionTabBarBaseV2> ();
}

static void _call_ctor_QStyleOptionTabBarBaseV2_3627 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTabBarBaseV2 &arg1 = gsi::arg_reader<const QStyleOptionTabBarBaseV2 & >() (args, heap);
  ret.write<QStyleOptionTabBarBaseV2 *> (new QStyleOptionTabBarBaseV2 (arg1));
}


//  Constructor QStyleOptionTabBarBaseV2::QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBase &other)


static void _init_ctor_QStyleOptionTabBarBaseV2_3491 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTabBarBase & > (argspec_0);
  decl->set_return_new<QStyleOptionTabBarBaseV2> ();
}

static void _call_ctor_QStyleOptionTabBarBaseV2_3491 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTabBarBase &arg1 = gsi::arg_reader<const QStyleOptionTabBarBase & >() (args, heap);
  ret.write<QStyleOptionTabBarBaseV2 *> (new QStyleOptionTabBarBaseV2 (arg1));
}


// QStyleOptionTabBarBaseV2 &QStyleOptionTabBarBaseV2::operator=(const QStyleOptionTabBarBase &other)


static void _init_f_operator_eq__3491 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTabBarBase & > (argspec_0);
  decl->set_return<QStyleOptionTabBarBaseV2 & > ();
}

static void _call_f_operator_eq__3491 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTabBarBase &arg1 = gsi::arg_reader<const QStyleOptionTabBarBase & >() (args, heap);
  ret.write<QStyleOptionTabBarBaseV2 & > ((QStyleOptionTabBarBaseV2 &)((QStyleOptionTabBarBaseV2 *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionTabBarBaseV2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabBarBaseV2::QStyleOptionTabBarBaseV2()\nThis method creates an object of class QStyleOptionTabBarBaseV2.", &_init_ctor_QStyleOptionTabBarBaseV2_0, &_call_ctor_QStyleOptionTabBarBaseV2_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabBarBaseV2::QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2 &other)\nThis method creates an object of class QStyleOptionTabBarBaseV2.", &_init_ctor_QStyleOptionTabBarBaseV2_3627, &_call_ctor_QStyleOptionTabBarBaseV2_3627);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTabBarBaseV2::QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBase &other)\nThis method creates an object of class QStyleOptionTabBarBaseV2.", &_init_ctor_QStyleOptionTabBarBaseV2_3491, &_call_ctor_QStyleOptionTabBarBaseV2_3491);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionTabBarBaseV2 &QStyleOptionTabBarBaseV2::operator=(const QStyleOptionTabBarBase &other)\n", false, &_init_f_operator_eq__3491, &_call_f_operator_eq__3491);
  return methods;
}

gsi::Class<QStyleOptionTabBarBase> &qtdecl_QStyleOptionTabBarBase ();

gsi::Class<QStyleOptionTabBarBaseV2> decl_QStyleOptionTabBarBaseV2 (qtdecl_QStyleOptionTabBarBase (), "QtGui", "QStyleOptionTabBarBaseV2",
  methods_QStyleOptionTabBarBaseV2 (),
  "@qt\n@brief Binding of QStyleOptionTabBarBaseV2");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionTabBarBaseV2> &qtdecl_QStyleOptionTabBarBaseV2 () { return decl_QStyleOptionTabBarBaseV2; }

}


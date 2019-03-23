
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
*  @file gsiDeclQStyleOptionButton.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionButton>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionButton

//  Constructor QStyleOptionButton::QStyleOptionButton()


static void _init_ctor_QStyleOptionButton_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionButton> ();
}

static void _call_ctor_QStyleOptionButton_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionButton *> (new QStyleOptionButton ());
}


//  Constructor QStyleOptionButton::QStyleOptionButton(const QStyleOptionButton &other)


static void _init_ctor_QStyleOptionButton_3192 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionButton & > (argspec_0);
  decl->set_return_new<QStyleOptionButton> ();
}

static void _call_ctor_QStyleOptionButton_3192 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionButton &arg1 = gsi::arg_reader<const QStyleOptionButton & >() (args, heap);
  ret.write<QStyleOptionButton *> (new QStyleOptionButton (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionButton () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionButton::QStyleOptionButton()\nThis method creates an object of class QStyleOptionButton.", &_init_ctor_QStyleOptionButton_0, &_call_ctor_QStyleOptionButton_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionButton::QStyleOptionButton(const QStyleOptionButton &other)\nThis method creates an object of class QStyleOptionButton.", &_init_ctor_QStyleOptionButton_3192, &_call_ctor_QStyleOptionButton_3192);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionButton> decl_QStyleOptionButton (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionButton",
  methods_QStyleOptionButton (),
  "@qt\n@brief Binding of QStyleOptionButton");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionButton> &qtdecl_QStyleOptionButton () { return decl_QStyleOptionButton; }

}


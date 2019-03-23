
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
*  @file gsiDeclQSignalBlocker.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSignalBlocker>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSignalBlocker

//  Constructor QSignalBlocker::QSignalBlocker(QObject *o)


static void _init_ctor_QSignalBlocker_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QSignalBlocker> ();
}

static void _call_ctor_QSignalBlocker_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QSignalBlocker *> (new QSignalBlocker (arg1));
}


//  Constructor QSignalBlocker::QSignalBlocker(QObject &o)


static void _init_ctor_QSignalBlocker_1298 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<QObject & > (argspec_0);
  decl->set_return_new<QSignalBlocker> ();
}

static void _call_ctor_QSignalBlocker_1298 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject &arg1 = gsi::arg_reader<QObject & >() (args, heap);
  ret.write<QSignalBlocker *> (new QSignalBlocker (arg1));
}


// void QSignalBlocker::reblock()


static void _init_f_reblock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reblock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalBlocker *)cls)->reblock ();
}


// void QSignalBlocker::unblock()


static void _init_f_unblock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unblock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSignalBlocker *)cls)->unblock ();
}



namespace gsi
{

static gsi::Methods methods_QSignalBlocker () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSignalBlocker::QSignalBlocker(QObject *o)\nThis method creates an object of class QSignalBlocker.", &_init_ctor_QSignalBlocker_1302, &_call_ctor_QSignalBlocker_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSignalBlocker::QSignalBlocker(QObject &o)\nThis method creates an object of class QSignalBlocker.", &_init_ctor_QSignalBlocker_1298, &_call_ctor_QSignalBlocker_1298);
  methods += new qt_gsi::GenericMethod ("reblock", "@brief Method void QSignalBlocker::reblock()\n", false, &_init_f_reblock_0, &_call_f_reblock_0);
  methods += new qt_gsi::GenericMethod ("unblock", "@brief Method void QSignalBlocker::unblock()\n", false, &_init_f_unblock_0, &_call_f_unblock_0);
  return methods;
}

gsi::Class<QSignalBlocker> decl_QSignalBlocker ("QtCore", "QSignalBlocker",
  methods_QSignalBlocker (),
  "@qt\n@brief Binding of QSignalBlocker");


GSI_QTCORE_PUBLIC gsi::Class<QSignalBlocker> &qtdecl_QSignalBlocker () { return decl_QSignalBlocker; }

}


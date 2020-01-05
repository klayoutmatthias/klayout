
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
*  @file gsiDeclQStringDataPtr.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStringDataPtr>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QStringDataPtr

//  Constructor QStringDataPtr::QStringDataPtr()


static void _init_ctor_QStringDataPtr_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStringDataPtr> ();
}

static void _call_ctor_QStringDataPtr_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringDataPtr *> (new QStringDataPtr ());
}



namespace gsi
{

static gsi::Methods methods_QStringDataPtr () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStringDataPtr::QStringDataPtr()\nThis method creates an object of class QStringDataPtr.", &_init_ctor_QStringDataPtr_0, &_call_ctor_QStringDataPtr_0);
  return methods;
}

gsi::Class<QStringDataPtr> decl_QStringDataPtr ("QtCore", "QStringDataPtr",
  methods_QStringDataPtr (),
  "@qt\n@brief Binding of QStringDataPtr");


GSI_QTCORE_PUBLIC gsi::Class<QStringDataPtr> &qtdecl_QStringDataPtr () { return decl_QStringDataPtr; }

}


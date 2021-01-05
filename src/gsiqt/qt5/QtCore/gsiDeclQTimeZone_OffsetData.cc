
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
*  @file gsiDeclQTimeZone_OffsetData.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTimeZone>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QTimeZone::OffsetData

//  Constructor QTimeZone::OffsetData::OffsetData()


static void _init_ctor_QTimeZone_OffsetData_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTimeZone::OffsetData> ();
}

static void _call_ctor_QTimeZone_OffsetData_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTimeZone::OffsetData *> (new QTimeZone::OffsetData ());
}



namespace gsi
{

static gsi::Methods methods_QTimeZone_OffsetData () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimeZone::OffsetData::OffsetData()\nThis method creates an object of class QTimeZone::OffsetData.", &_init_ctor_QTimeZone_OffsetData_0, &_call_ctor_QTimeZone_OffsetData_0);
  return methods;
}

gsi::Class<QTimeZone::OffsetData> decl_QTimeZone_OffsetData ("QtCore", "QTimeZone_OffsetData",
  methods_QTimeZone_OffsetData (),
  "@qt\n@brief Binding of QTimeZone::OffsetData");

gsi::ClassExt<QTimeZone> decl_QTimeZone_OffsetData_as_child (decl_QTimeZone_OffsetData, "OffsetData");

GSI_QTCORE_PUBLIC gsi::Class<QTimeZone::OffsetData> &qtdecl_QTimeZone_OffsetData () { return decl_QTimeZone_OffsetData; }

}


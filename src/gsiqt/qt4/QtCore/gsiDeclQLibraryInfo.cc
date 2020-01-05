
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
*  @file gsiDeclQLibraryInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLibraryInfo>
#include <QDate>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLibraryInfo

// static QDate QLibraryInfo::buildDate()


static void _init_f_buildDate_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QDate > ();
}

static void _call_f_buildDate_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDate > ((QDate)QLibraryInfo::buildDate ());
}


// static QString QLibraryInfo::buildKey()


static void _init_f_buildKey_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_buildKey_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QLibraryInfo::buildKey ());
}


// static QString QLibraryInfo::licensedProducts()


static void _init_f_licensedProducts_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_licensedProducts_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QLibraryInfo::licensedProducts ());
}


// static QString QLibraryInfo::licensee()


static void _init_f_licensee_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_licensee_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QLibraryInfo::licensee ());
}


// static QString QLibraryInfo::location(QLibraryInfo::LibraryLocation)


static void _init_f_location_3304 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QLibraryInfo::LibraryLocation>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_location_3304 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QLibraryInfo::LibraryLocation>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QLibraryInfo::LibraryLocation>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QLibraryInfo::location (qt_gsi::QtToCppAdaptor<QLibraryInfo::LibraryLocation>(arg1).cref()));
}



namespace gsi
{

static gsi::Methods methods_QLibraryInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("buildDate", "@brief Static method QDate QLibraryInfo::buildDate()\nThis method is static and can be called without an instance.", &_init_f_buildDate_0, &_call_f_buildDate_0);
  methods += new qt_gsi::GenericStaticMethod ("buildKey", "@brief Static method QString QLibraryInfo::buildKey()\nThis method is static and can be called without an instance.", &_init_f_buildKey_0, &_call_f_buildKey_0);
  methods += new qt_gsi::GenericStaticMethod ("licensedProducts", "@brief Static method QString QLibraryInfo::licensedProducts()\nThis method is static and can be called without an instance.", &_init_f_licensedProducts_0, &_call_f_licensedProducts_0);
  methods += new qt_gsi::GenericStaticMethod ("licensee", "@brief Static method QString QLibraryInfo::licensee()\nThis method is static and can be called without an instance.", &_init_f_licensee_0, &_call_f_licensee_0);
  methods += new qt_gsi::GenericStaticMethod ("location", "@brief Static method QString QLibraryInfo::location(QLibraryInfo::LibraryLocation)\nThis method is static and can be called without an instance.", &_init_f_location_3304, &_call_f_location_3304);
  return methods;
}

gsi::Class<QLibraryInfo> decl_QLibraryInfo ("QtCore", "QLibraryInfo",
  methods_QLibraryInfo (),
  "@qt\n@brief Binding of QLibraryInfo");


GSI_QTCORE_PUBLIC gsi::Class<QLibraryInfo> &qtdecl_QLibraryInfo () { return decl_QLibraryInfo; }

}


//  Implementation of the enum wrapper class for QLibraryInfo::LibraryLocation
namespace qt_gsi
{

static gsi::Enum<QLibraryInfo::LibraryLocation> decl_QLibraryInfo_LibraryLocation_Enum ("QtCore", "QLibraryInfo_LibraryLocation",
    gsi::enum_const ("PrefixPath", QLibraryInfo::PrefixPath, "@brief Enum constant QLibraryInfo::PrefixPath") +
    gsi::enum_const ("DocumentationPath", QLibraryInfo::DocumentationPath, "@brief Enum constant QLibraryInfo::DocumentationPath") +
    gsi::enum_const ("HeadersPath", QLibraryInfo::HeadersPath, "@brief Enum constant QLibraryInfo::HeadersPath") +
    gsi::enum_const ("LibrariesPath", QLibraryInfo::LibrariesPath, "@brief Enum constant QLibraryInfo::LibrariesPath") +
    gsi::enum_const ("BinariesPath", QLibraryInfo::BinariesPath, "@brief Enum constant QLibraryInfo::BinariesPath") +
    gsi::enum_const ("PluginsPath", QLibraryInfo::PluginsPath, "@brief Enum constant QLibraryInfo::PluginsPath") +
    gsi::enum_const ("DataPath", QLibraryInfo::DataPath, "@brief Enum constant QLibraryInfo::DataPath") +
    gsi::enum_const ("TranslationsPath", QLibraryInfo::TranslationsPath, "@brief Enum constant QLibraryInfo::TranslationsPath") +
    gsi::enum_const ("SettingsPath", QLibraryInfo::SettingsPath, "@brief Enum constant QLibraryInfo::SettingsPath") +
    gsi::enum_const ("DemosPath", QLibraryInfo::DemosPath, "@brief Enum constant QLibraryInfo::DemosPath") +
    gsi::enum_const ("ExamplesPath", QLibraryInfo::ExamplesPath, "@brief Enum constant QLibraryInfo::ExamplesPath"),
  "@qt\n@brief This class represents the QLibraryInfo::LibraryLocation enum");

static gsi::QFlagsClass<QLibraryInfo::LibraryLocation > decl_QLibraryInfo_LibraryLocation_Enums ("QtCore", "QLibraryInfo_QFlags_LibraryLocation",
  "@qt\n@brief This class represents the QFlags<QLibraryInfo::LibraryLocation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLibraryInfo> inject_QLibraryInfo_LibraryLocation_Enum_in_parent (decl_QLibraryInfo_LibraryLocation_Enum.defs ());
static gsi::ClassExt<QLibraryInfo> decl_QLibraryInfo_LibraryLocation_Enum_as_child (decl_QLibraryInfo_LibraryLocation_Enum, "LibraryLocation");
static gsi::ClassExt<QLibraryInfo> decl_QLibraryInfo_LibraryLocation_Enums_as_child (decl_QLibraryInfo_LibraryLocation_Enums, "QFlags_LibraryLocation");

}


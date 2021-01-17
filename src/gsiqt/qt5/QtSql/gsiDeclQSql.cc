
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
*  @file gsiDeclQSql.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QtSql>
#include "gsiQt.h"
#include "gsiQtSqlCommon.h"
#include "gsiDeclQtSqlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace QSql

class QSql_Namespace { };

namespace gsi
{
gsi::Class<QSql_Namespace> decl_QSql_Namespace ("QtSql", "QSql",
  gsi::Methods(),
  "@qt\n@brief This class represents the QSql namespace");
}


//  Implementation of the enum wrapper class for QSql::Location
namespace qt_gsi
{

static gsi::Enum<QSql::Location> decl_QSql_Location_Enum ("QtSql", "QSql_Location",
    gsi::enum_const ("BeforeFirstRow", QSql::BeforeFirstRow, "@brief Enum constant QSql::BeforeFirstRow") +
    gsi::enum_const ("AfterLastRow", QSql::AfterLastRow, "@brief Enum constant QSql::AfterLastRow"),
  "@qt\n@brief This class represents the QSql::Location enum");

static gsi::QFlagsClass<QSql::Location > decl_QSql_Location_Enums ("QtSql", "QSql_QFlags_Location",
  "@qt\n@brief This class represents the QFlags<QSql::Location> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSql_Namespace> inject_QSql_Location_Enum_in_parent (decl_QSql_Location_Enum.defs ());
static gsi::ClassExt<QSql_Namespace> decl_QSql_Location_Enum_as_child (decl_QSql_Location_Enum, "Location");
static gsi::ClassExt<QSql_Namespace> decl_QSql_Location_Enums_as_child (decl_QSql_Location_Enums, "QFlags_Location");

}


//  Implementation of the enum wrapper class for QSql::NumericalPrecisionPolicy
namespace qt_gsi
{

static gsi::Enum<QSql::NumericalPrecisionPolicy> decl_QSql_NumericalPrecisionPolicy_Enum ("QtSql", "QSql_NumericalPrecisionPolicy",
    gsi::enum_const ("LowPrecisionInt32", QSql::LowPrecisionInt32, "@brief Enum constant QSql::LowPrecisionInt32") +
    gsi::enum_const ("LowPrecisionInt64", QSql::LowPrecisionInt64, "@brief Enum constant QSql::LowPrecisionInt64") +
    gsi::enum_const ("LowPrecisionDouble", QSql::LowPrecisionDouble, "@brief Enum constant QSql::LowPrecisionDouble") +
    gsi::enum_const ("HighPrecision", QSql::HighPrecision, "@brief Enum constant QSql::HighPrecision"),
  "@qt\n@brief This class represents the QSql::NumericalPrecisionPolicy enum");

static gsi::QFlagsClass<QSql::NumericalPrecisionPolicy > decl_QSql_NumericalPrecisionPolicy_Enums ("QtSql", "QSql_QFlags_NumericalPrecisionPolicy",
  "@qt\n@brief This class represents the QFlags<QSql::NumericalPrecisionPolicy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSql_Namespace> inject_QSql_NumericalPrecisionPolicy_Enum_in_parent (decl_QSql_NumericalPrecisionPolicy_Enum.defs ());
static gsi::ClassExt<QSql_Namespace> decl_QSql_NumericalPrecisionPolicy_Enum_as_child (decl_QSql_NumericalPrecisionPolicy_Enum, "NumericalPrecisionPolicy");
static gsi::ClassExt<QSql_Namespace> decl_QSql_NumericalPrecisionPolicy_Enums_as_child (decl_QSql_NumericalPrecisionPolicy_Enums, "QFlags_NumericalPrecisionPolicy");

}


//  Implementation of the enum wrapper class for QSql::ParamTypeFlag
namespace qt_gsi
{

static gsi::Enum<QSql::ParamTypeFlag> decl_QSql_ParamTypeFlag_Enum ("QtSql", "QSql_ParamTypeFlag",
    gsi::enum_const ("In", QSql::In, "@brief Enum constant QSql::In") +
    gsi::enum_const ("Out", QSql::Out, "@brief Enum constant QSql::Out") +
    gsi::enum_const ("InOut", QSql::InOut, "@brief Enum constant QSql::InOut") +
    gsi::enum_const ("Binary", QSql::Binary, "@brief Enum constant QSql::Binary"),
  "@qt\n@brief This class represents the QSql::ParamTypeFlag enum");

static gsi::QFlagsClass<QSql::ParamTypeFlag > decl_QSql_ParamTypeFlag_Enums ("QtSql", "QSql_QFlags_ParamTypeFlag",
  "@qt\n@brief This class represents the QFlags<QSql::ParamTypeFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSql_Namespace> inject_QSql_ParamTypeFlag_Enum_in_parent (decl_QSql_ParamTypeFlag_Enum.defs ());
static gsi::ClassExt<QSql_Namespace> decl_QSql_ParamTypeFlag_Enum_as_child (decl_QSql_ParamTypeFlag_Enum, "ParamTypeFlag");
static gsi::ClassExt<QSql_Namespace> decl_QSql_ParamTypeFlag_Enums_as_child (decl_QSql_ParamTypeFlag_Enums, "QFlags_ParamTypeFlag");

}


//  Implementation of the enum wrapper class for QSql::TableType
namespace qt_gsi
{

static gsi::Enum<QSql::TableType> decl_QSql_TableType_Enum ("QtSql", "QSql_TableType",
    gsi::enum_const ("Tables", QSql::Tables, "@brief Enum constant QSql::Tables") +
    gsi::enum_const ("SystemTables", QSql::SystemTables, "@brief Enum constant QSql::SystemTables") +
    gsi::enum_const ("Views", QSql::Views, "@brief Enum constant QSql::Views") +
    gsi::enum_const ("AllTables", QSql::AllTables, "@brief Enum constant QSql::AllTables"),
  "@qt\n@brief This class represents the QSql::TableType enum");

static gsi::QFlagsClass<QSql::TableType > decl_QSql_TableType_Enums ("QtSql", "QSql_QFlags_TableType",
  "@qt\n@brief This class represents the QFlags<QSql::TableType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSql_Namespace> inject_QSql_TableType_Enum_in_parent (decl_QSql_TableType_Enum.defs ());
static gsi::ClassExt<QSql_Namespace> decl_QSql_TableType_Enum_as_child (decl_QSql_TableType_Enum, "TableType");
static gsi::ClassExt<QSql_Namespace> decl_QSql_TableType_Enums_as_child (decl_QSql_TableType_Enums, "QFlags_TableType");

}


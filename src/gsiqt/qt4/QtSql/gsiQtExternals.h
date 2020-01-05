
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

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtSqlExternals)
#define HDR_gsiQtSqlExternals

#include "gsiClass.h"
#include "gsiQtSqlCommon.h"

class QSqlDatabase;

namespace tl { template <> struct type_traits<QSqlDatabase> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlDatabase> &qtdecl_QSqlDatabase (); }

class QSqlDriver;

namespace tl { template <> struct type_traits<QSqlDriver> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlDriver> &qtdecl_QSqlDriver (); }

class QSqlDriverCreatorBase;

namespace tl { template <> struct type_traits<QSqlDriverCreatorBase> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlDriverCreatorBase> &qtdecl_QSqlDriverCreatorBase (); }

class QSqlError;

namespace tl { template <> struct type_traits<QSqlError> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlError> &qtdecl_QSqlError (); }

class QSqlField;

namespace tl { template <> struct type_traits<QSqlField> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlField> &qtdecl_QSqlField (); }

class QSqlIndex;

namespace tl { template <> struct type_traits<QSqlIndex> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlIndex> &qtdecl_QSqlIndex (); }

class QSqlQuery;

namespace tl { template <> struct type_traits<QSqlQuery> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlQuery> &qtdecl_QSqlQuery (); }

class QSqlQueryModel;

namespace tl { template <> struct type_traits<QSqlQueryModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlQueryModel> &qtdecl_QSqlQueryModel (); }

class QSqlRecord;

namespace tl { template <> struct type_traits<QSqlRecord> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlRecord> &qtdecl_QSqlRecord (); }

class QSqlRelation;

namespace tl { template <> struct type_traits<QSqlRelation> : public type_traits<void> {
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlRelation> &qtdecl_QSqlRelation (); }

class QSqlRelationalTableModel;

namespace tl { template <> struct type_traits<QSqlRelationalTableModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlRelationalTableModel> &qtdecl_QSqlRelationalTableModel (); }

class QSqlResult;

namespace tl { template <> struct type_traits<QSqlResult> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlResult> &qtdecl_QSqlResult (); }

class QSqlTableModel;

namespace tl { template <> struct type_traits<QSqlTableModel> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTSQL_PUBLIC gsi::Class<QSqlTableModel> &qtdecl_QSqlTableModel (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif



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

#if !defined(HDR_gsiQtPrintSupportExternals)
#define HDR_gsiQtPrintSupportExternals

#include "gsiClass.h"
#include "gsiQtPrintSupportCommon.h"

class QAbstractPrintDialog;

namespace tl { template <> struct type_traits<QAbstractPrintDialog> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QAbstractPrintDialog> &qtdecl_QAbstractPrintDialog (); }

class QPageSetupDialog;

namespace tl { template <> struct type_traits<QPageSetupDialog> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPageSetupDialog> &qtdecl_QPageSetupDialog (); }

class QPrintDialog;

namespace tl { template <> struct type_traits<QPrintDialog> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintDialog> &qtdecl_QPrintDialog (); }

class QPrintEngine;

namespace tl { template <> struct type_traits<QPrintEngine> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintEngine> &qtdecl_QPrintEngine (); }

class QPrintPreviewDialog;

namespace tl { template <> struct type_traits<QPrintPreviewDialog> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintPreviewDialog> &qtdecl_QPrintPreviewDialog (); }

class QPrintPreviewWidget;

namespace tl { template <> struct type_traits<QPrintPreviewWidget> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintPreviewWidget> &qtdecl_QPrintPreviewWidget (); }

class QPrinter;

namespace tl { template <> struct type_traits<QPrinter> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrinter> &qtdecl_QPrinter (); }

class QPrinterInfo;

namespace tl { template <> struct type_traits<QPrinterInfo> : public type_traits<void> {
}; }

namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrinterInfo> &qtdecl_QPrinterInfo (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif



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
*  @file gsiDeclQPrinterInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPrinterInfo>
#include <QPageSize>
#include <QPrinter>
#include <QSizeF>
#include "gsiQt.h"
#include "gsiQtPrintSupportCommon.h"
#include "gsiDeclQtPrintSupportTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPrinterInfo

//  Constructor QPrinterInfo::QPrinterInfo()


static void _init_ctor_QPrinterInfo_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPrinterInfo> ();
}

static void _call_ctor_QPrinterInfo_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPrinterInfo *> (new QPrinterInfo ());
}


//  Constructor QPrinterInfo::QPrinterInfo(const QPrinterInfo &other)


static void _init_ctor_QPrinterInfo_2530 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPrinterInfo & > (argspec_0);
  decl->set_return_new<QPrinterInfo> ();
}

static void _call_ctor_QPrinterInfo_2530 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPrinterInfo &arg1 = gsi::arg_reader<const QPrinterInfo & >() (args, heap);
  ret.write<QPrinterInfo *> (new QPrinterInfo (arg1));
}


//  Constructor QPrinterInfo::QPrinterInfo(const QPrinter &printer)


static void _init_ctor_QPrinterInfo_2134 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("printer");
  decl->add_arg<const QPrinter & > (argspec_0);
  decl->set_return_new<QPrinterInfo> ();
}

static void _call_ctor_QPrinterInfo_2134 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPrinter &arg1 = gsi::arg_reader<const QPrinter & >() (args, heap);
  ret.write<QPrinterInfo *> (new QPrinterInfo (arg1));
}


// QPrinter::DuplexMode QPrinterInfo::defaultDuplexMode()


static void _init_f_defaultDuplexMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPrinter::DuplexMode>::target_type > ();
}

static void _call_f_defaultDuplexMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPrinter::DuplexMode>::target_type > ((qt_gsi::Converter<QPrinter::DuplexMode>::target_type)qt_gsi::CppToQtAdaptor<QPrinter::DuplexMode>(((QPrinterInfo *)cls)->defaultDuplexMode ()));
}


// QPageSize QPrinterInfo::defaultPageSize()


static void _init_f_defaultPageSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPageSize > ();
}

static void _call_f_defaultPageSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageSize > ((QPageSize)((QPrinterInfo *)cls)->defaultPageSize ());
}


// QString QPrinterInfo::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPrinterInfo *)cls)->description ());
}


// bool QPrinterInfo::isDefault()


static void _init_f_isDefault_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDefault_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrinterInfo *)cls)->isDefault ());
}


// bool QPrinterInfo::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrinterInfo *)cls)->isNull ());
}


// bool QPrinterInfo::isRemote()


static void _init_f_isRemote_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRemote_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrinterInfo *)cls)->isRemote ());
}


// QString QPrinterInfo::location()


static void _init_f_location_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_location_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPrinterInfo *)cls)->location ());
}


// QString QPrinterInfo::makeAndModel()


static void _init_f_makeAndModel_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_makeAndModel_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPrinterInfo *)cls)->makeAndModel ());
}


// QPageSize QPrinterInfo::maximumPhysicalPageSize()


static void _init_f_maximumPhysicalPageSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPageSize > ();
}

static void _call_f_maximumPhysicalPageSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageSize > ((QPageSize)((QPrinterInfo *)cls)->maximumPhysicalPageSize ());
}


// QPageSize QPrinterInfo::minimumPhysicalPageSize()


static void _init_f_minimumPhysicalPageSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPageSize > ();
}

static void _call_f_minimumPhysicalPageSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPageSize > ((QPageSize)((QPrinterInfo *)cls)->minimumPhysicalPageSize ());
}


// QPrinterInfo &QPrinterInfo::operator=(const QPrinterInfo &other)


static void _init_f_operator_eq__2530 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPrinterInfo & > (argspec_0);
  decl->set_return<QPrinterInfo & > ();
}

static void _call_f_operator_eq__2530 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPrinterInfo &arg1 = gsi::arg_reader<const QPrinterInfo & >() (args, heap);
  ret.write<QPrinterInfo & > ((QPrinterInfo &)((QPrinterInfo *)cls)->operator= (arg1));
}


// QString QPrinterInfo::printerName()


static void _init_f_printerName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_printerName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPrinterInfo *)cls)->printerName ());
}


// QPrinter::PrinterState QPrinterInfo::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPrinter::PrinterState>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPrinter::PrinterState>::target_type > ((qt_gsi::Converter<QPrinter::PrinterState>::target_type)qt_gsi::CppToQtAdaptor<QPrinter::PrinterState>(((QPrinterInfo *)cls)->state ()));
}


// QList<QPrinter::DuplexMode> QPrinterInfo::supportedDuplexModes()


static void _init_f_supportedDuplexModes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QPrinter::DuplexMode> > ();
}

static void _call_f_supportedDuplexModes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QPrinter::DuplexMode> > ((QList<QPrinter::DuplexMode>)((QPrinterInfo *)cls)->supportedDuplexModes ());
}


// QList<QPageSize> QPrinterInfo::supportedPageSizes()


static void _init_f_supportedPageSizes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QPageSize> > ();
}

static void _call_f_supportedPageSizes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QPageSize> > ((QList<QPageSize>)((QPrinterInfo *)cls)->supportedPageSizes ());
}


// QList<QPrinter::PaperSize> QPrinterInfo::supportedPaperSizes()


static void _init_f_supportedPaperSizes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QPrinter::PaperSize> > ();
}

static void _call_f_supportedPaperSizes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QPrinter::PaperSize> > ((QList<QPrinter::PaperSize>)((QPrinterInfo *)cls)->supportedPaperSizes ());
}


// QList<int> QPrinterInfo::supportedResolutions()


static void _init_f_supportedResolutions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_supportedResolutions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)((QPrinterInfo *)cls)->supportedResolutions ());
}


// QList<QPair<QString, QSizeF> > QPrinterInfo::supportedSizesWithNames()


static void _init_f_supportedSizesWithNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QPair<QString, QSizeF> > > ();
}

static void _call_f_supportedSizesWithNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QPair<QString, QSizeF> > > ((QList<QPair<QString, QSizeF> >)((QPrinterInfo *)cls)->supportedSizesWithNames ());
}


// bool QPrinterInfo::supportsCustomPageSizes()


static void _init_f_supportsCustomPageSizes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsCustomPageSizes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPrinterInfo *)cls)->supportsCustomPageSizes ());
}


// static QStringList QPrinterInfo::availablePrinterNames()


static void _init_f_availablePrinterNames_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_availablePrinterNames_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QPrinterInfo::availablePrinterNames ());
}


// static QList<QPrinterInfo> QPrinterInfo::availablePrinters()


static void _init_f_availablePrinters_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QPrinterInfo> > ();
}

static void _call_f_availablePrinters_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QPrinterInfo> > ((QList<QPrinterInfo>)QPrinterInfo::availablePrinters ());
}


// static QPrinterInfo QPrinterInfo::defaultPrinter()


static void _init_f_defaultPrinter_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QPrinterInfo > ();
}

static void _call_f_defaultPrinter_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPrinterInfo > ((QPrinterInfo)QPrinterInfo::defaultPrinter ());
}


// static QString QPrinterInfo::defaultPrinterName()


static void _init_f_defaultPrinterName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_defaultPrinterName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QPrinterInfo::defaultPrinterName ());
}


// static QPrinterInfo QPrinterInfo::printerInfo(const QString &printerName)


static void _init_f_printerInfo_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("printerName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QPrinterInfo > ();
}

static void _call_f_printerInfo_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QPrinterInfo > ((QPrinterInfo)QPrinterInfo::printerInfo (arg1));
}



namespace gsi
{

static gsi::Methods methods_QPrinterInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPrinterInfo::QPrinterInfo()\nThis method creates an object of class QPrinterInfo.", &_init_ctor_QPrinterInfo_0, &_call_ctor_QPrinterInfo_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPrinterInfo::QPrinterInfo(const QPrinterInfo &other)\nThis method creates an object of class QPrinterInfo.", &_init_ctor_QPrinterInfo_2530, &_call_ctor_QPrinterInfo_2530);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPrinterInfo::QPrinterInfo(const QPrinter &printer)\nThis method creates an object of class QPrinterInfo.", &_init_ctor_QPrinterInfo_2134, &_call_ctor_QPrinterInfo_2134);
  methods += new qt_gsi::GenericMethod ("defaultDuplexMode", "@brief Method QPrinter::DuplexMode QPrinterInfo::defaultDuplexMode()\n", true, &_init_f_defaultDuplexMode_c0, &_call_f_defaultDuplexMode_c0);
  methods += new qt_gsi::GenericMethod ("defaultPageSize", "@brief Method QPageSize QPrinterInfo::defaultPageSize()\n", true, &_init_f_defaultPageSize_c0, &_call_f_defaultPageSize_c0);
  methods += new qt_gsi::GenericMethod ("description", "@brief Method QString QPrinterInfo::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod ("isDefault?", "@brief Method bool QPrinterInfo::isDefault()\n", true, &_init_f_isDefault_c0, &_call_f_isDefault_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QPrinterInfo::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isRemote?", "@brief Method bool QPrinterInfo::isRemote()\n", true, &_init_f_isRemote_c0, &_call_f_isRemote_c0);
  methods += new qt_gsi::GenericMethod ("location", "@brief Method QString QPrinterInfo::location()\n", true, &_init_f_location_c0, &_call_f_location_c0);
  methods += new qt_gsi::GenericMethod ("makeAndModel", "@brief Method QString QPrinterInfo::makeAndModel()\n", true, &_init_f_makeAndModel_c0, &_call_f_makeAndModel_c0);
  methods += new qt_gsi::GenericMethod ("maximumPhysicalPageSize", "@brief Method QPageSize QPrinterInfo::maximumPhysicalPageSize()\n", true, &_init_f_maximumPhysicalPageSize_c0, &_call_f_maximumPhysicalPageSize_c0);
  methods += new qt_gsi::GenericMethod ("minimumPhysicalPageSize", "@brief Method QPageSize QPrinterInfo::minimumPhysicalPageSize()\n", true, &_init_f_minimumPhysicalPageSize_c0, &_call_f_minimumPhysicalPageSize_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QPrinterInfo &QPrinterInfo::operator=(const QPrinterInfo &other)\n", false, &_init_f_operator_eq__2530, &_call_f_operator_eq__2530);
  methods += new qt_gsi::GenericMethod ("printerName", "@brief Method QString QPrinterInfo::printerName()\n", true, &_init_f_printerName_c0, &_call_f_printerName_c0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QPrinter::PrinterState QPrinterInfo::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("supportedDuplexModes", "@brief Method QList<QPrinter::DuplexMode> QPrinterInfo::supportedDuplexModes()\n", true, &_init_f_supportedDuplexModes_c0, &_call_f_supportedDuplexModes_c0);
  methods += new qt_gsi::GenericMethod ("supportedPageSizes", "@brief Method QList<QPageSize> QPrinterInfo::supportedPageSizes()\n", true, &_init_f_supportedPageSizes_c0, &_call_f_supportedPageSizes_c0);
  methods += new qt_gsi::GenericMethod ("supportedPaperSizes", "@brief Method QList<QPrinter::PaperSize> QPrinterInfo::supportedPaperSizes()\n", true, &_init_f_supportedPaperSizes_c0, &_call_f_supportedPaperSizes_c0);
  methods += new qt_gsi::GenericMethod ("supportedResolutions", "@brief Method QList<int> QPrinterInfo::supportedResolutions()\n", true, &_init_f_supportedResolutions_c0, &_call_f_supportedResolutions_c0);
  methods += new qt_gsi::GenericMethod ("supportedSizesWithNames", "@brief Method QList<QPair<QString, QSizeF> > QPrinterInfo::supportedSizesWithNames()\n", true, &_init_f_supportedSizesWithNames_c0, &_call_f_supportedSizesWithNames_c0);
  methods += new qt_gsi::GenericMethod ("supportsCustomPageSizes", "@brief Method bool QPrinterInfo::supportsCustomPageSizes()\n", true, &_init_f_supportsCustomPageSizes_c0, &_call_f_supportsCustomPageSizes_c0);
  methods += new qt_gsi::GenericStaticMethod ("availablePrinterNames", "@brief Static method QStringList QPrinterInfo::availablePrinterNames()\nThis method is static and can be called without an instance.", &_init_f_availablePrinterNames_0, &_call_f_availablePrinterNames_0);
  methods += new qt_gsi::GenericStaticMethod ("availablePrinters", "@brief Static method QList<QPrinterInfo> QPrinterInfo::availablePrinters()\nThis method is static and can be called without an instance.", &_init_f_availablePrinters_0, &_call_f_availablePrinters_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultPrinter", "@brief Static method QPrinterInfo QPrinterInfo::defaultPrinter()\nThis method is static and can be called without an instance.", &_init_f_defaultPrinter_0, &_call_f_defaultPrinter_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultPrinterName", "@brief Static method QString QPrinterInfo::defaultPrinterName()\nThis method is static and can be called without an instance.", &_init_f_defaultPrinterName_0, &_call_f_defaultPrinterName_0);
  methods += new qt_gsi::GenericStaticMethod ("printerInfo", "@brief Static method QPrinterInfo QPrinterInfo::printerInfo(const QString &printerName)\nThis method is static and can be called without an instance.", &_init_f_printerInfo_2025, &_call_f_printerInfo_2025);
  return methods;
}

gsi::Class<QPrinterInfo> decl_QPrinterInfo ("QtPrintSupport", "QPrinterInfo",
  methods_QPrinterInfo (),
  "@qt\n@brief Binding of QPrinterInfo");


GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrinterInfo> &qtdecl_QPrinterInfo () { return decl_QPrinterInfo; }

}


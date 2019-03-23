
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
*  @file gsiDeclQSystemLocale.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSystemLocale>
#include <QLocale>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSystemLocale

// QLocale QSystemLocale::fallbackLocale()


static void _init_f_fallbackLocale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLocale > ();
}

static void _call_f_fallbackLocale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLocale > ((QLocale)((QSystemLocale *)cls)->fallbackLocale ());
}


// QVariant QSystemLocale::query(QSystemLocale::QueryType type, QVariant in)


static void _init_f_query_c3956 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("in");
  decl->add_arg<QVariant > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_f_query_c3956 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & >() (args, heap);
  QVariant arg2 = gsi::arg_reader<QVariant >() (args, heap);
  ret.write<QVariant > ((QVariant)((QSystemLocale *)cls)->query (qt_gsi::QtToCppAdaptor<QSystemLocale::QueryType>(arg1).cref(), arg2));
}


namespace gsi
{

static gsi::Methods methods_QSystemLocale () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("fallbackLocale", "@brief Method QLocale QSystemLocale::fallbackLocale()\n", true, &_init_f_fallbackLocale_c0, &_call_f_fallbackLocale_c0);
  methods += new qt_gsi::GenericMethod ("query", "@brief Method QVariant QSystemLocale::query(QSystemLocale::QueryType type, QVariant in)\n", true, &_init_f_query_c3956, &_call_f_query_c3956);
  return methods;
}

gsi::Class<QSystemLocale> decl_QSystemLocale ("QtCore", "QSystemLocale_Native",
  methods_QSystemLocale (),
  "@hide\n@alias QSystemLocale");

GSI_QTCORE_PUBLIC gsi::Class<QSystemLocale> &qtdecl_QSystemLocale () { return decl_QSystemLocale; }

}


class QSystemLocale_Adaptor : public QSystemLocale, public qt_gsi::QtObjectBase
{
public:

  virtual ~QSystemLocale_Adaptor();

  //  [adaptor ctor] QSystemLocale::QSystemLocale()
  QSystemLocale_Adaptor() : QSystemLocale()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QLocale QSystemLocale::fallbackLocale()
  QLocale cbs_fallbackLocale_c0_0() const
  {
    return QSystemLocale::fallbackLocale();
  }

  virtual QLocale fallbackLocale() const
  {
    if (cb_fallbackLocale_c0_0.can_issue()) {
      return cb_fallbackLocale_c0_0.issue<QSystemLocale_Adaptor, QLocale>(&QSystemLocale_Adaptor::cbs_fallbackLocale_c0_0);
    } else {
      return QSystemLocale::fallbackLocale();
    }
  }

  //  [adaptor impl] QVariant QSystemLocale::query(QSystemLocale::QueryType type, QVariant in)
  QVariant cbs_query_c3956_0(const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & type, QVariant in) const
  {
    return QSystemLocale::query(qt_gsi::QtToCppAdaptor<QSystemLocale::QueryType>(type).cref(), in);
  }

  virtual QVariant query(QSystemLocale::QueryType type, QVariant in) const
  {
    if (cb_query_c3956_0.can_issue()) {
      return cb_query_c3956_0.issue<QSystemLocale_Adaptor, QVariant, const qt_gsi::Converter<QSystemLocale::QueryType>::target_type &, QVariant>(&QSystemLocale_Adaptor::cbs_query_c3956_0, qt_gsi::CppToQtAdaptor<QSystemLocale::QueryType>(type), in);
    } else {
      return QSystemLocale::query(type, in);
    }
  }

  gsi::Callback cb_fallbackLocale_c0_0;
  gsi::Callback cb_query_c3956_0;
};

QSystemLocale_Adaptor::~QSystemLocale_Adaptor() { }

//  Constructor QSystemLocale::QSystemLocale() (adaptor class)

static void _init_ctor_QSystemLocale_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSystemLocale_Adaptor> ();
}

static void _call_ctor_QSystemLocale_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSystemLocale_Adaptor *> (new QSystemLocale_Adaptor ());
}


// QLocale QSystemLocale::fallbackLocale()

static void _init_cbs_fallbackLocale_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLocale > ();
}

static void _call_cbs_fallbackLocale_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLocale > ((QLocale)((QSystemLocale_Adaptor *)cls)->cbs_fallbackLocale_c0_0 ());
}

static void _set_callback_cbs_fallbackLocale_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemLocale_Adaptor *)cls)->cb_fallbackLocale_c0_0 = cb;
}


// QVariant QSystemLocale::query(QSystemLocale::QueryType type, QVariant in)

static void _init_cbs_query_c3956_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("in");
  decl->add_arg<QVariant > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_cbs_query_c3956_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & arg1 = args.read<const qt_gsi::Converter<QSystemLocale::QueryType>::target_type & > (heap);
  QVariant arg2 = args.read<QVariant > (heap);
  ret.write<QVariant > ((QVariant)((QSystemLocale_Adaptor *)cls)->cbs_query_c3956_0 (arg1, arg2));
}

static void _set_callback_cbs_query_c3956_0 (void *cls, const gsi::Callback &cb)
{
  ((QSystemLocale_Adaptor *)cls)->cb_query_c3956_0 = cb;
}


namespace gsi
{

gsi::Class<QSystemLocale> &qtdecl_QSystemLocale ();

static gsi::Methods methods_QSystemLocale_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSystemLocale::QSystemLocale()\nThis method creates an object of class QSystemLocale.", &_init_ctor_QSystemLocale_Adaptor_0, &_call_ctor_QSystemLocale_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("fallbackLocale", "@hide", true, &_init_cbs_fallbackLocale_c0_0, &_call_cbs_fallbackLocale_c0_0);
  methods += new qt_gsi::GenericMethod ("fallbackLocale", "@brief Virtual method QLocale QSystemLocale::fallbackLocale()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_fallbackLocale_c0_0, &_call_cbs_fallbackLocale_c0_0, &_set_callback_cbs_fallbackLocale_c0_0);
  methods += new qt_gsi::GenericMethod ("query", "@hide", true, &_init_cbs_query_c3956_0, &_call_cbs_query_c3956_0);
  methods += new qt_gsi::GenericMethod ("query", "@brief Virtual method QVariant QSystemLocale::query(QSystemLocale::QueryType type, QVariant in)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_query_c3956_0, &_call_cbs_query_c3956_0, &_set_callback_cbs_query_c3956_0);
  return methods;
}

gsi::Class<QSystemLocale_Adaptor> decl_QSystemLocale_Adaptor (qtdecl_QSystemLocale (), "QtCore", "QSystemLocale",
  methods_QSystemLocale_Adaptor (),
  "@qt\n@brief Binding of QSystemLocale");

}


//  Implementation of the enum wrapper class for QSystemLocale::QueryType
namespace qt_gsi
{

static gsi::Enum<QSystemLocale::QueryType> decl_QSystemLocale_QueryType_Enum ("QtCore", "QSystemLocale_QueryType",
    gsi::enum_const ("LanguageId", QSystemLocale::LanguageId, "@brief Enum constant QSystemLocale::LanguageId") +
    gsi::enum_const ("CountryId", QSystemLocale::CountryId, "@brief Enum constant QSystemLocale::CountryId") +
    gsi::enum_const ("DecimalPoint", QSystemLocale::DecimalPoint, "@brief Enum constant QSystemLocale::DecimalPoint") +
    gsi::enum_const ("GroupSeparator", QSystemLocale::GroupSeparator, "@brief Enum constant QSystemLocale::GroupSeparator") +
    gsi::enum_const ("ZeroDigit", QSystemLocale::ZeroDigit, "@brief Enum constant QSystemLocale::ZeroDigit") +
    gsi::enum_const ("NegativeSign", QSystemLocale::NegativeSign, "@brief Enum constant QSystemLocale::NegativeSign") +
    gsi::enum_const ("DateFormatLong", QSystemLocale::DateFormatLong, "@brief Enum constant QSystemLocale::DateFormatLong") +
    gsi::enum_const ("DateFormatShort", QSystemLocale::DateFormatShort, "@brief Enum constant QSystemLocale::DateFormatShort") +
    gsi::enum_const ("TimeFormatLong", QSystemLocale::TimeFormatLong, "@brief Enum constant QSystemLocale::TimeFormatLong") +
    gsi::enum_const ("TimeFormatShort", QSystemLocale::TimeFormatShort, "@brief Enum constant QSystemLocale::TimeFormatShort") +
    gsi::enum_const ("DayNameLong", QSystemLocale::DayNameLong, "@brief Enum constant QSystemLocale::DayNameLong") +
    gsi::enum_const ("DayNameShort", QSystemLocale::DayNameShort, "@brief Enum constant QSystemLocale::DayNameShort") +
    gsi::enum_const ("MonthNameLong", QSystemLocale::MonthNameLong, "@brief Enum constant QSystemLocale::MonthNameLong") +
    gsi::enum_const ("MonthNameShort", QSystemLocale::MonthNameShort, "@brief Enum constant QSystemLocale::MonthNameShort") +
    gsi::enum_const ("DateToStringLong", QSystemLocale::DateToStringLong, "@brief Enum constant QSystemLocale::DateToStringLong") +
    gsi::enum_const ("DateToStringShort", QSystemLocale::DateToStringShort, "@brief Enum constant QSystemLocale::DateToStringShort") +
    gsi::enum_const ("TimeToStringLong", QSystemLocale::TimeToStringLong, "@brief Enum constant QSystemLocale::TimeToStringLong") +
    gsi::enum_const ("TimeToStringShort", QSystemLocale::TimeToStringShort, "@brief Enum constant QSystemLocale::TimeToStringShort") +
    gsi::enum_const ("DateTimeFormatLong", QSystemLocale::DateTimeFormatLong, "@brief Enum constant QSystemLocale::DateTimeFormatLong") +
    gsi::enum_const ("DateTimeFormatShort", QSystemLocale::DateTimeFormatShort, "@brief Enum constant QSystemLocale::DateTimeFormatShort") +
    gsi::enum_const ("DateTimeToStringLong", QSystemLocale::DateTimeToStringLong, "@brief Enum constant QSystemLocale::DateTimeToStringLong") +
    gsi::enum_const ("DateTimeToStringShort", QSystemLocale::DateTimeToStringShort, "@brief Enum constant QSystemLocale::DateTimeToStringShort") +
    gsi::enum_const ("MeasurementSystem", QSystemLocale::MeasurementSystem, "@brief Enum constant QSystemLocale::MeasurementSystem") +
    gsi::enum_const ("PositiveSign", QSystemLocale::PositiveSign, "@brief Enum constant QSystemLocale::PositiveSign") +
    gsi::enum_const ("AMText", QSystemLocale::AMText, "@brief Enum constant QSystemLocale::AMText") +
    gsi::enum_const ("PMText", QSystemLocale::PMText, "@brief Enum constant QSystemLocale::PMText"),
  "@qt\n@brief This class represents the QSystemLocale::QueryType enum");

static gsi::QFlagsClass<QSystemLocale::QueryType > decl_QSystemLocale_QueryType_Enums ("QtCore", "QSystemLocale_QFlags_QueryType",
  "@qt\n@brief This class represents the QFlags<QSystemLocale::QueryType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSystemLocale> inject_QSystemLocale_QueryType_Enum_in_parent (decl_QSystemLocale_QueryType_Enum.defs ());
static gsi::ClassExt<QSystemLocale> decl_QSystemLocale_QueryType_Enum_as_child (decl_QSystemLocale_QueryType_Enum, "QueryType");
static gsi::ClassExt<QSystemLocale> decl_QSystemLocale_QueryType_Enums_as_child (decl_QSystemLocale_QueryType_Enums, "QFlags_QueryType");

}


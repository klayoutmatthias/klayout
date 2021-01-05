
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
*  @file gsiDeclQTextEncoder.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextEncoder>
#include <QTextCodec>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextEncoder

//  Constructor QTextEncoder::QTextEncoder(const QTextCodec *codec)


static void _init_ctor_QTextEncoder_2297 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QTextCodec * > (argspec_0);
  decl->set_return_new<QTextEncoder> ();
}

static void _call_ctor_QTextEncoder_2297 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCodec *arg1 = gsi::arg_reader<const QTextCodec * >() (args, heap);
  ret.write<QTextEncoder *> (new QTextEncoder (arg1));
}


// QByteArray QTextEncoder::fromUnicode(const QString &str)


static void _init_f_fromUnicode_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_fromUnicode_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)((QTextEncoder *)cls)->fromUnicode (arg1));
}


// bool QTextEncoder::hasFailure()


static void _init_f_hasFailure_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasFailure_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextEncoder *)cls)->hasFailure ());
}



namespace gsi
{

static gsi::Methods methods_QTextEncoder () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextEncoder::QTextEncoder(const QTextCodec *codec)\nThis method creates an object of class QTextEncoder.", &_init_ctor_QTextEncoder_2297, &_call_ctor_QTextEncoder_2297);
  methods += new qt_gsi::GenericMethod ("fromUnicode", "@brief Method QByteArray QTextEncoder::fromUnicode(const QString &str)\n", false, &_init_f_fromUnicode_2025, &_call_f_fromUnicode_2025);
  methods += new qt_gsi::GenericMethod ("hasFailure", "@brief Method bool QTextEncoder::hasFailure()\n", true, &_init_f_hasFailure_c0, &_call_f_hasFailure_c0);
  return methods;
}

gsi::Class<QTextEncoder> decl_QTextEncoder ("QtCore", "QTextEncoder",
  methods_QTextEncoder (),
  "@qt\n@brief Binding of QTextEncoder");


GSI_QTCORE_PUBLIC gsi::Class<QTextEncoder> &qtdecl_QTextEncoder () { return decl_QTextEncoder; }

}



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
*  @file gsiDeclQTextDocumentFragment.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextDocumentFragment>
#include <QTextCursor>
#include <QTextDocument>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextDocumentFragment

//  Constructor QTextDocumentFragment::QTextDocumentFragment()


static void _init_ctor_QTextDocumentFragment_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextDocumentFragment> ();
}

static void _call_ctor_QTextDocumentFragment_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextDocumentFragment *> (new QTextDocumentFragment ());
}


//  Constructor QTextDocumentFragment::QTextDocumentFragment(const QTextDocument *document)


static void _init_ctor_QTextDocumentFragment_2650 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("document");
  decl->add_arg<const QTextDocument * > (argspec_0);
  decl->set_return_new<QTextDocumentFragment> ();
}

static void _call_ctor_QTextDocumentFragment_2650 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextDocument *arg1 = gsi::arg_reader<const QTextDocument * >() (args, heap);
  ret.write<QTextDocumentFragment *> (new QTextDocumentFragment (arg1));
}


//  Constructor QTextDocumentFragment::QTextDocumentFragment(const QTextCursor &range)


static void _init_ctor_QTextDocumentFragment_2453 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("range");
  decl->add_arg<const QTextCursor & > (argspec_0);
  decl->set_return_new<QTextDocumentFragment> ();
}

static void _call_ctor_QTextDocumentFragment_2453 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCursor &arg1 = gsi::arg_reader<const QTextCursor & >() (args, heap);
  ret.write<QTextDocumentFragment *> (new QTextDocumentFragment (arg1));
}


//  Constructor QTextDocumentFragment::QTextDocumentFragment(const QTextDocumentFragment &rhs)


static void _init_ctor_QTextDocumentFragment_3466 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QTextDocumentFragment & > (argspec_0);
  decl->set_return_new<QTextDocumentFragment> ();
}

static void _call_ctor_QTextDocumentFragment_3466 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextDocumentFragment &arg1 = gsi::arg_reader<const QTextDocumentFragment & >() (args, heap);
  ret.write<QTextDocumentFragment *> (new QTextDocumentFragment (arg1));
}


// bool QTextDocumentFragment::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextDocumentFragment *)cls)->isEmpty ());
}


// QTextDocumentFragment &QTextDocumentFragment::operator=(const QTextDocumentFragment &rhs)


static void _init_f_operator_eq__3466 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QTextDocumentFragment & > (argspec_0);
  decl->set_return<QTextDocumentFragment & > ();
}

static void _call_f_operator_eq__3466 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextDocumentFragment &arg1 = gsi::arg_reader<const QTextDocumentFragment & >() (args, heap);
  ret.write<QTextDocumentFragment & > ((QTextDocumentFragment &)((QTextDocumentFragment *)cls)->operator= (arg1));
}


// QString QTextDocumentFragment::toHtml()


static void _init_f_toHtml_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toHtml_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextDocumentFragment *)cls)->toHtml ());
}


// QString QTextDocumentFragment::toHtml(const QByteArray &encoding)


static void _init_f_toHtml_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoding");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toHtml_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QString > ((QString)((QTextDocumentFragment *)cls)->toHtml (arg1));
}


// QString QTextDocumentFragment::toPlainText()


static void _init_f_toPlainText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toPlainText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextDocumentFragment *)cls)->toPlainText ());
}


// static QTextDocumentFragment QTextDocumentFragment::fromHtml(const QString &html)


static void _init_f_fromHtml_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("html");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QTextDocumentFragment > ();
}

static void _call_f_fromHtml_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTextDocumentFragment > ((QTextDocumentFragment)QTextDocumentFragment::fromHtml (arg1));
}


// static QTextDocumentFragment QTextDocumentFragment::fromHtml(const QString &html, const QTextDocument *resourceProvider)


static void _init_f_fromHtml_4567 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("html");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("resourceProvider");
  decl->add_arg<const QTextDocument * > (argspec_1);
  decl->set_return<QTextDocumentFragment > ();
}

static void _call_f_fromHtml_4567 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QTextDocument *arg2 = gsi::arg_reader<const QTextDocument * >() (args, heap);
  ret.write<QTextDocumentFragment > ((QTextDocumentFragment)QTextDocumentFragment::fromHtml (arg1, arg2));
}


// static QTextDocumentFragment QTextDocumentFragment::fromPlainText(const QString &plainText)


static void _init_f_fromPlainText_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("plainText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QTextDocumentFragment > ();
}

static void _call_f_fromPlainText_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTextDocumentFragment > ((QTextDocumentFragment)QTextDocumentFragment::fromPlainText (arg1));
}



namespace gsi
{

static gsi::Methods methods_QTextDocumentFragment () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextDocumentFragment::QTextDocumentFragment()\nThis method creates an object of class QTextDocumentFragment.", &_init_ctor_QTextDocumentFragment_0, &_call_ctor_QTextDocumentFragment_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextDocumentFragment::QTextDocumentFragment(const QTextDocument *document)\nThis method creates an object of class QTextDocumentFragment.", &_init_ctor_QTextDocumentFragment_2650, &_call_ctor_QTextDocumentFragment_2650);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextDocumentFragment::QTextDocumentFragment(const QTextCursor &range)\nThis method creates an object of class QTextDocumentFragment.", &_init_ctor_QTextDocumentFragment_2453, &_call_ctor_QTextDocumentFragment_2453);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextDocumentFragment::QTextDocumentFragment(const QTextDocumentFragment &rhs)\nThis method creates an object of class QTextDocumentFragment.", &_init_ctor_QTextDocumentFragment_3466, &_call_ctor_QTextDocumentFragment_3466);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QTextDocumentFragment::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextDocumentFragment &QTextDocumentFragment::operator=(const QTextDocumentFragment &rhs)\n", false, &_init_f_operator_eq__3466, &_call_f_operator_eq__3466);
  methods += new qt_gsi::GenericMethod ("toHtml", "@brief Method QString QTextDocumentFragment::toHtml()\n", true, &_init_f_toHtml_c0, &_call_f_toHtml_c0);
  methods += new qt_gsi::GenericMethod ("toHtml", "@brief Method QString QTextDocumentFragment::toHtml(const QByteArray &encoding)\n", true, &_init_f_toHtml_c2309, &_call_f_toHtml_c2309);
  methods += new qt_gsi::GenericMethod ("toPlainText", "@brief Method QString QTextDocumentFragment::toPlainText()\n", true, &_init_f_toPlainText_c0, &_call_f_toPlainText_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromHtml", "@brief Static method QTextDocumentFragment QTextDocumentFragment::fromHtml(const QString &html)\nThis method is static and can be called without an instance.", &_init_f_fromHtml_2025, &_call_f_fromHtml_2025);
  methods += new qt_gsi::GenericStaticMethod ("fromHtml", "@brief Static method QTextDocumentFragment QTextDocumentFragment::fromHtml(const QString &html, const QTextDocument *resourceProvider)\nThis method is static and can be called without an instance.", &_init_f_fromHtml_4567, &_call_f_fromHtml_4567);
  methods += new qt_gsi::GenericStaticMethod ("fromPlainText", "@brief Static method QTextDocumentFragment QTextDocumentFragment::fromPlainText(const QString &plainText)\nThis method is static and can be called without an instance.", &_init_f_fromPlainText_2025, &_call_f_fromPlainText_2025);
  return methods;
}

gsi::Class<QTextDocumentFragment> decl_QTextDocumentFragment ("QtGui", "QTextDocumentFragment",
  methods_QTextDocumentFragment (),
  "@qt\n@brief Binding of QTextDocumentFragment");


GSI_QTGUI_PUBLIC gsi::Class<QTextDocumentFragment> &qtdecl_QTextDocumentFragment () { return decl_QTextDocumentFragment; }

}


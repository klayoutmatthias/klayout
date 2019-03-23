
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
*  @file gsiDeclQKeySequence.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QKeySequence>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QKeySequence

//  Constructor QKeySequence::QKeySequence()


static void _init_ctor_QKeySequence_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QKeySequence> ();
}

static void _call_ctor_QKeySequence_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QKeySequence *> (new QKeySequence ());
}


//  Constructor QKeySequence::QKeySequence(const QString &key)


static void _init_ctor_QKeySequence_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QKeySequence> ();
}

static void _call_ctor_QKeySequence_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QKeySequence *> (new QKeySequence (arg1));
}


//  Constructor QKeySequence::QKeySequence(int k1, int k2, int k3, int k4)


static void _init_ctor_QKeySequence_2744 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("k1");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("k2", true, "0");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("k3", true, "0");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("k4", true, "0");
  decl->add_arg<int > (argspec_3);
  decl->set_return_new<QKeySequence> ();
}

static void _call_ctor_QKeySequence_2744 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  int arg4 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<QKeySequence *> (new QKeySequence (arg1, arg2, arg3, arg4));
}


//  Constructor QKeySequence::QKeySequence(const QKeySequence &ks)


static void _init_ctor_QKeySequence_2516 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ks");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return_new<QKeySequence> ();
}

static void _call_ctor_QKeySequence_2516 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<QKeySequence *> (new QKeySequence (arg1));
}


//  Constructor QKeySequence::QKeySequence(QKeySequence::StandardKey key)


static void _init_ctor_QKeySequence_2869 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & > (argspec_0);
  decl->set_return_new<QKeySequence> ();
}

static void _call_ctor_QKeySequence_2869 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & >() (args, heap);
  ret.write<QKeySequence *> (new QKeySequence (qt_gsi::QtToCppAdaptor<QKeySequence::StandardKey>(arg1).cref()));
}


// unsigned int QKeySequence::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QKeySequence *)cls)->count ());
}


// bool QKeySequence::isDetached()


static void _init_f_isDetached_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDetached_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QKeySequence *)cls)->isDetached ());
}


// bool QKeySequence::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QKeySequence *)cls)->isEmpty ());
}


// QKeySequence::SequenceMatch QKeySequence::matches(const QKeySequence &seq)


static void _init_f_matches_c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("seq");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<qt_gsi::Converter<QKeySequence::SequenceMatch>::target_type > ();
}

static void _call_f_matches_c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<qt_gsi::Converter<QKeySequence::SequenceMatch>::target_type > ((qt_gsi::Converter<QKeySequence::SequenceMatch>::target_type)qt_gsi::CppToQtAdaptor<QKeySequence::SequenceMatch>(((QKeySequence *)cls)->matches (arg1)));
}


// bool QKeySequence::operator!=(const QKeySequence &other)


static void _init_f_operator_excl__eq__c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<bool > ((bool)((QKeySequence *)cls)->operator!= (arg1));
}


// bool QKeySequence::operator<(const QKeySequence &ks)


static void _init_f_operator_lt__c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ks");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<bool > ((bool)((QKeySequence *)cls)->operator< (arg1));
}


// bool QKeySequence::operator<=(const QKeySequence &other)


static void _init_f_operator_lt__eq__c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<bool > ((bool)((QKeySequence *)cls)->operator<= (arg1));
}


// QKeySequence &QKeySequence::operator=(const QKeySequence &other)


static void _init_f_operator_eq__2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<QKeySequence & > ();
}

static void _call_f_operator_eq__2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<QKeySequence & > ((QKeySequence &)((QKeySequence *)cls)->operator= (arg1));
}


// bool QKeySequence::operator==(const QKeySequence &other)


static void _init_f_operator_eq__eq__c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<bool > ((bool)((QKeySequence *)cls)->operator== (arg1));
}


// bool QKeySequence::operator>(const QKeySequence &other)


static void _init_f_operator_gt__c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<bool > ((bool)((QKeySequence *)cls)->operator> (arg1));
}


// bool QKeySequence::operator>=(const QKeySequence &other)


static void _init_f_operator_gt__eq__c2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QKeySequence & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  ret.write<bool > ((bool)((QKeySequence *)cls)->operator>= (arg1));
}


// int QKeySequence::operator[](unsigned int i)


static void _init_f_operator_index__c1772 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_operator_index__c1772 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = gsi::arg_reader<unsigned int >() (args, heap);
  ret.write<int > ((int)((QKeySequence *)cls)->operator[] (arg1));
}


// QString QKeySequence::toString(QKeySequence::SequenceFormat format)


static void _init_f_toString_c3197 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format", true, "QKeySequence::PortableText");
  decl->add_arg<const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c3197 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QKeySequence::SequenceFormat>(heap, QKeySequence::PortableText), heap);
  ret.write<QString > ((QString)((QKeySequence *)cls)->toString (qt_gsi::QtToCppAdaptor<QKeySequence::SequenceFormat>(arg1).cref()));
}


// static QKeySequence QKeySequence::fromString(const QString &str, QKeySequence::SequenceFormat format)


static void _init_f_fromString_5114 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QKeySequence::PortableText");
  decl->add_arg<const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & > (argspec_1);
  decl->set_return<QKeySequence > ();
}

static void _call_f_fromString_5114 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QKeySequence::SequenceFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QKeySequence::SequenceFormat>(heap, QKeySequence::PortableText), heap);
  ret.write<QKeySequence > ((QKeySequence)QKeySequence::fromString (arg1, qt_gsi::QtToCppAdaptor<QKeySequence::SequenceFormat>(arg2).cref()));
}


// static QList<QKeySequence> QKeySequence::keyBindings(QKeySequence::StandardKey key)


static void _init_f_keyBindings_2869 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & > (argspec_0);
  decl->set_return<QList<QKeySequence> > ();
}

static void _call_f_keyBindings_2869 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QKeySequence::StandardKey>::target_type & >() (args, heap);
  ret.write<QList<QKeySequence> > ((QList<QKeySequence>)QKeySequence::keyBindings (qt_gsi::QtToCppAdaptor<QKeySequence::StandardKey>(arg1).cref()));
}


// static QKeySequence QKeySequence::mnemonic(const QString &text)


static void _init_f_mnemonic_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QKeySequence > ();
}

static void _call_f_mnemonic_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QKeySequence > ((QKeySequence)QKeySequence::mnemonic (arg1));
}



namespace gsi
{

static gsi::Methods methods_QKeySequence () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeySequence::QKeySequence()\nThis method creates an object of class QKeySequence.", &_init_ctor_QKeySequence_0, &_call_ctor_QKeySequence_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeySequence::QKeySequence(const QString &key)\nThis method creates an object of class QKeySequence.", &_init_ctor_QKeySequence_2025, &_call_ctor_QKeySequence_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeySequence::QKeySequence(int k1, int k2, int k3, int k4)\nThis method creates an object of class QKeySequence.", &_init_ctor_QKeySequence_2744, &_call_ctor_QKeySequence_2744);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QKeySequence::QKeySequence(const QKeySequence &ks)\nThis method creates an object of class QKeySequence.", &_init_ctor_QKeySequence_2516, &_call_ctor_QKeySequence_2516);
  methods += new qt_gsi::GenericStaticMethod ("new_std", "@brief Constructor QKeySequence::QKeySequence(QKeySequence::StandardKey key)\nThis method creates an object of class QKeySequence.", &_init_ctor_QKeySequence_2869, &_call_ctor_QKeySequence_2869);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method unsigned int QKeySequence::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("isDetached?", "@brief Method bool QKeySequence::isDetached()\n", true, &_init_f_isDetached_c0, &_call_f_isDetached_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QKeySequence::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("matches", "@brief Method QKeySequence::SequenceMatch QKeySequence::matches(const QKeySequence &seq)\n", true, &_init_f_matches_c2516, &_call_f_matches_c2516);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QKeySequence::operator!=(const QKeySequence &other)\n", true, &_init_f_operator_excl__eq__c2516, &_call_f_operator_excl__eq__c2516);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QKeySequence::operator<(const QKeySequence &ks)\n", true, &_init_f_operator_lt__c2516, &_call_f_operator_lt__c2516);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QKeySequence::operator<=(const QKeySequence &other)\n", true, &_init_f_operator_lt__eq__c2516, &_call_f_operator_lt__eq__c2516);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QKeySequence &QKeySequence::operator=(const QKeySequence &other)\n", false, &_init_f_operator_eq__2516, &_call_f_operator_eq__2516);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QKeySequence::operator==(const QKeySequence &other)\n", true, &_init_f_operator_eq__eq__c2516, &_call_f_operator_eq__eq__c2516);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QKeySequence::operator>(const QKeySequence &other)\n", true, &_init_f_operator_gt__c2516, &_call_f_operator_gt__c2516);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QKeySequence::operator>=(const QKeySequence &other)\n", true, &_init_f_operator_gt__eq__c2516, &_call_f_operator_gt__eq__c2516);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method int QKeySequence::operator[](unsigned int i)\n", true, &_init_f_operator_index__c1772, &_call_f_operator_index__c1772);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QKeySequence::toString(QKeySequence::SequenceFormat format)\n", true, &_init_f_toString_c3197, &_call_f_toString_c3197);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QKeySequence QKeySequence::fromString(const QString &str, QKeySequence::SequenceFormat format)\nThis method is static and can be called without an instance.", &_init_f_fromString_5114, &_call_f_fromString_5114);
  methods += new qt_gsi::GenericStaticMethod ("keyBindings", "@brief Static method QList<QKeySequence> QKeySequence::keyBindings(QKeySequence::StandardKey key)\nThis method is static and can be called without an instance.", &_init_f_keyBindings_2869, &_call_f_keyBindings_2869);
  methods += new qt_gsi::GenericStaticMethod ("mnemonic", "@brief Static method QKeySequence QKeySequence::mnemonic(const QString &text)\nThis method is static and can be called without an instance.", &_init_f_mnemonic_2025, &_call_f_mnemonic_2025);
  return methods;
}

gsi::Class<QKeySequence> decl_QKeySequence ("QtGui", "QKeySequence",
  methods_QKeySequence (),
  "@qt\n@brief Binding of QKeySequence");


GSI_QTGUI_PUBLIC gsi::Class<QKeySequence> &qtdecl_QKeySequence () { return decl_QKeySequence; }

}


//  Implementation of the enum wrapper class for QKeySequence::SequenceFormat
namespace qt_gsi
{

static gsi::Enum<QKeySequence::SequenceFormat> decl_QKeySequence_SequenceFormat_Enum ("QtGui", "QKeySequence_SequenceFormat",
    gsi::enum_const ("NativeText", QKeySequence::NativeText, "@brief Enum constant QKeySequence::NativeText") +
    gsi::enum_const ("PortableText", QKeySequence::PortableText, "@brief Enum constant QKeySequence::PortableText"),
  "@qt\n@brief This class represents the QKeySequence::SequenceFormat enum");

static gsi::QFlagsClass<QKeySequence::SequenceFormat > decl_QKeySequence_SequenceFormat_Enums ("QtGui", "QKeySequence_QFlags_SequenceFormat",
  "@qt\n@brief This class represents the QFlags<QKeySequence::SequenceFormat> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QKeySequence> inject_QKeySequence_SequenceFormat_Enum_in_parent (decl_QKeySequence_SequenceFormat_Enum.defs ());
static gsi::ClassExt<QKeySequence> decl_QKeySequence_SequenceFormat_Enum_as_child (decl_QKeySequence_SequenceFormat_Enum, "SequenceFormat");
static gsi::ClassExt<QKeySequence> decl_QKeySequence_SequenceFormat_Enums_as_child (decl_QKeySequence_SequenceFormat_Enums, "QFlags_SequenceFormat");

}


//  Implementation of the enum wrapper class for QKeySequence::SequenceMatch
namespace qt_gsi
{

static gsi::Enum<QKeySequence::SequenceMatch> decl_QKeySequence_SequenceMatch_Enum ("QtGui", "QKeySequence_SequenceMatch",
    gsi::enum_const ("NoMatch", QKeySequence::NoMatch, "@brief Enum constant QKeySequence::NoMatch") +
    gsi::enum_const ("PartialMatch", QKeySequence::PartialMatch, "@brief Enum constant QKeySequence::PartialMatch") +
    gsi::enum_const ("ExactMatch", QKeySequence::ExactMatch, "@brief Enum constant QKeySequence::ExactMatch"),
  "@qt\n@brief This class represents the QKeySequence::SequenceMatch enum");

static gsi::QFlagsClass<QKeySequence::SequenceMatch > decl_QKeySequence_SequenceMatch_Enums ("QtGui", "QKeySequence_QFlags_SequenceMatch",
  "@qt\n@brief This class represents the QFlags<QKeySequence::SequenceMatch> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QKeySequence> inject_QKeySequence_SequenceMatch_Enum_in_parent (decl_QKeySequence_SequenceMatch_Enum.defs ());
static gsi::ClassExt<QKeySequence> decl_QKeySequence_SequenceMatch_Enum_as_child (decl_QKeySequence_SequenceMatch_Enum, "SequenceMatch");
static gsi::ClassExt<QKeySequence> decl_QKeySequence_SequenceMatch_Enums_as_child (decl_QKeySequence_SequenceMatch_Enums, "QFlags_SequenceMatch");

}


//  Implementation of the enum wrapper class for QKeySequence::StandardKey
namespace qt_gsi
{

static gsi::Enum<QKeySequence::StandardKey> decl_QKeySequence_StandardKey_Enum ("QtGui", "QKeySequence_StandardKey",
    gsi::enum_const ("UnknownKey", QKeySequence::UnknownKey, "@brief Enum constant QKeySequence::UnknownKey") +
    gsi::enum_const ("HelpContents", QKeySequence::HelpContents, "@brief Enum constant QKeySequence::HelpContents") +
    gsi::enum_const ("WhatsThis", QKeySequence::WhatsThis, "@brief Enum constant QKeySequence::WhatsThis") +
    gsi::enum_const ("Open", QKeySequence::Open, "@brief Enum constant QKeySequence::Open") +
    gsi::enum_const ("Close", QKeySequence::Close, "@brief Enum constant QKeySequence::Close") +
    gsi::enum_const ("Save", QKeySequence::Save, "@brief Enum constant QKeySequence::Save") +
    gsi::enum_const ("New", QKeySequence::New, "@brief Enum constant QKeySequence::New") +
    gsi::enum_const ("Delete", QKeySequence::Delete, "@brief Enum constant QKeySequence::Delete") +
    gsi::enum_const ("Cut", QKeySequence::Cut, "@brief Enum constant QKeySequence::Cut") +
    gsi::enum_const ("Copy", QKeySequence::Copy, "@brief Enum constant QKeySequence::Copy") +
    gsi::enum_const ("Paste", QKeySequence::Paste, "@brief Enum constant QKeySequence::Paste") +
    gsi::enum_const ("Undo", QKeySequence::Undo, "@brief Enum constant QKeySequence::Undo") +
    gsi::enum_const ("Redo", QKeySequence::Redo, "@brief Enum constant QKeySequence::Redo") +
    gsi::enum_const ("Back", QKeySequence::Back, "@brief Enum constant QKeySequence::Back") +
    gsi::enum_const ("Forward", QKeySequence::Forward, "@brief Enum constant QKeySequence::Forward") +
    gsi::enum_const ("Refresh", QKeySequence::Refresh, "@brief Enum constant QKeySequence::Refresh") +
    gsi::enum_const ("ZoomIn", QKeySequence::ZoomIn, "@brief Enum constant QKeySequence::ZoomIn") +
    gsi::enum_const ("ZoomOut", QKeySequence::ZoomOut, "@brief Enum constant QKeySequence::ZoomOut") +
    gsi::enum_const ("Print", QKeySequence::Print, "@brief Enum constant QKeySequence::Print") +
    gsi::enum_const ("AddTab", QKeySequence::AddTab, "@brief Enum constant QKeySequence::AddTab") +
    gsi::enum_const ("NextChild", QKeySequence::NextChild, "@brief Enum constant QKeySequence::NextChild") +
    gsi::enum_const ("PreviousChild", QKeySequence::PreviousChild, "@brief Enum constant QKeySequence::PreviousChild") +
    gsi::enum_const ("Find", QKeySequence::Find, "@brief Enum constant QKeySequence::Find") +
    gsi::enum_const ("FindNext", QKeySequence::FindNext, "@brief Enum constant QKeySequence::FindNext") +
    gsi::enum_const ("FindPrevious", QKeySequence::FindPrevious, "@brief Enum constant QKeySequence::FindPrevious") +
    gsi::enum_const ("Replace", QKeySequence::Replace, "@brief Enum constant QKeySequence::Replace") +
    gsi::enum_const ("SelectAll", QKeySequence::SelectAll, "@brief Enum constant QKeySequence::SelectAll") +
    gsi::enum_const ("Bold", QKeySequence::Bold, "@brief Enum constant QKeySequence::Bold") +
    gsi::enum_const ("Italic", QKeySequence::Italic, "@brief Enum constant QKeySequence::Italic") +
    gsi::enum_const ("Underline", QKeySequence::Underline, "@brief Enum constant QKeySequence::Underline") +
    gsi::enum_const ("MoveToNextChar", QKeySequence::MoveToNextChar, "@brief Enum constant QKeySequence::MoveToNextChar") +
    gsi::enum_const ("MoveToPreviousChar", QKeySequence::MoveToPreviousChar, "@brief Enum constant QKeySequence::MoveToPreviousChar") +
    gsi::enum_const ("MoveToNextWord", QKeySequence::MoveToNextWord, "@brief Enum constant QKeySequence::MoveToNextWord") +
    gsi::enum_const ("MoveToPreviousWord", QKeySequence::MoveToPreviousWord, "@brief Enum constant QKeySequence::MoveToPreviousWord") +
    gsi::enum_const ("MoveToNextLine", QKeySequence::MoveToNextLine, "@brief Enum constant QKeySequence::MoveToNextLine") +
    gsi::enum_const ("MoveToPreviousLine", QKeySequence::MoveToPreviousLine, "@brief Enum constant QKeySequence::MoveToPreviousLine") +
    gsi::enum_const ("MoveToNextPage", QKeySequence::MoveToNextPage, "@brief Enum constant QKeySequence::MoveToNextPage") +
    gsi::enum_const ("MoveToPreviousPage", QKeySequence::MoveToPreviousPage, "@brief Enum constant QKeySequence::MoveToPreviousPage") +
    gsi::enum_const ("MoveToStartOfLine", QKeySequence::MoveToStartOfLine, "@brief Enum constant QKeySequence::MoveToStartOfLine") +
    gsi::enum_const ("MoveToEndOfLine", QKeySequence::MoveToEndOfLine, "@brief Enum constant QKeySequence::MoveToEndOfLine") +
    gsi::enum_const ("MoveToStartOfBlock", QKeySequence::MoveToStartOfBlock, "@brief Enum constant QKeySequence::MoveToStartOfBlock") +
    gsi::enum_const ("MoveToEndOfBlock", QKeySequence::MoveToEndOfBlock, "@brief Enum constant QKeySequence::MoveToEndOfBlock") +
    gsi::enum_const ("MoveToStartOfDocument", QKeySequence::MoveToStartOfDocument, "@brief Enum constant QKeySequence::MoveToStartOfDocument") +
    gsi::enum_const ("MoveToEndOfDocument", QKeySequence::MoveToEndOfDocument, "@brief Enum constant QKeySequence::MoveToEndOfDocument") +
    gsi::enum_const ("SelectNextChar", QKeySequence::SelectNextChar, "@brief Enum constant QKeySequence::SelectNextChar") +
    gsi::enum_const ("SelectPreviousChar", QKeySequence::SelectPreviousChar, "@brief Enum constant QKeySequence::SelectPreviousChar") +
    gsi::enum_const ("SelectNextWord", QKeySequence::SelectNextWord, "@brief Enum constant QKeySequence::SelectNextWord") +
    gsi::enum_const ("SelectPreviousWord", QKeySequence::SelectPreviousWord, "@brief Enum constant QKeySequence::SelectPreviousWord") +
    gsi::enum_const ("SelectNextLine", QKeySequence::SelectNextLine, "@brief Enum constant QKeySequence::SelectNextLine") +
    gsi::enum_const ("SelectPreviousLine", QKeySequence::SelectPreviousLine, "@brief Enum constant QKeySequence::SelectPreviousLine") +
    gsi::enum_const ("SelectNextPage", QKeySequence::SelectNextPage, "@brief Enum constant QKeySequence::SelectNextPage") +
    gsi::enum_const ("SelectPreviousPage", QKeySequence::SelectPreviousPage, "@brief Enum constant QKeySequence::SelectPreviousPage") +
    gsi::enum_const ("SelectStartOfLine", QKeySequence::SelectStartOfLine, "@brief Enum constant QKeySequence::SelectStartOfLine") +
    gsi::enum_const ("SelectEndOfLine", QKeySequence::SelectEndOfLine, "@brief Enum constant QKeySequence::SelectEndOfLine") +
    gsi::enum_const ("SelectStartOfBlock", QKeySequence::SelectStartOfBlock, "@brief Enum constant QKeySequence::SelectStartOfBlock") +
    gsi::enum_const ("SelectEndOfBlock", QKeySequence::SelectEndOfBlock, "@brief Enum constant QKeySequence::SelectEndOfBlock") +
    gsi::enum_const ("SelectStartOfDocument", QKeySequence::SelectStartOfDocument, "@brief Enum constant QKeySequence::SelectStartOfDocument") +
    gsi::enum_const ("SelectEndOfDocument", QKeySequence::SelectEndOfDocument, "@brief Enum constant QKeySequence::SelectEndOfDocument") +
    gsi::enum_const ("DeleteStartOfWord", QKeySequence::DeleteStartOfWord, "@brief Enum constant QKeySequence::DeleteStartOfWord") +
    gsi::enum_const ("DeleteEndOfWord", QKeySequence::DeleteEndOfWord, "@brief Enum constant QKeySequence::DeleteEndOfWord") +
    gsi::enum_const ("DeleteEndOfLine", QKeySequence::DeleteEndOfLine, "@brief Enum constant QKeySequence::DeleteEndOfLine") +
    gsi::enum_const ("InsertParagraphSeparator", QKeySequence::InsertParagraphSeparator, "@brief Enum constant QKeySequence::InsertParagraphSeparator") +
    gsi::enum_const ("InsertLineSeparator", QKeySequence::InsertLineSeparator, "@brief Enum constant QKeySequence::InsertLineSeparator") +
    gsi::enum_const ("SaveAs", QKeySequence::SaveAs, "@brief Enum constant QKeySequence::SaveAs") +
    gsi::enum_const ("Preferences", QKeySequence::Preferences, "@brief Enum constant QKeySequence::Preferences") +
    gsi::enum_const ("Quit", QKeySequence::Quit, "@brief Enum constant QKeySequence::Quit"),
  "@qt\n@brief This class represents the QKeySequence::StandardKey enum");

static gsi::QFlagsClass<QKeySequence::StandardKey > decl_QKeySequence_StandardKey_Enums ("QtGui", "QKeySequence_QFlags_StandardKey",
  "@qt\n@brief This class represents the QFlags<QKeySequence::StandardKey> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QKeySequence> inject_QKeySequence_StandardKey_Enum_in_parent (decl_QKeySequence_StandardKey_Enum.defs ());
static gsi::ClassExt<QKeySequence> decl_QKeySequence_StandardKey_Enum_as_child (decl_QKeySequence_StandardKey_Enum, "StandardKey");
static gsi::ClassExt<QKeySequence> decl_QKeySequence_StandardKey_Enums_as_child (decl_QKeySequence_StandardKey_Enums, "QFlags_StandardKey");

}


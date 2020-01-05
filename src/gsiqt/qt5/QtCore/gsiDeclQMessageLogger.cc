
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
*  @file gsiDeclQMessageLogger.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMessageLogger>
#include <QDebug>
#include <QLoggingCategory>
#include <QNoDebug>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMessageLogger

//  Constructor QMessageLogger::QMessageLogger()


static void _init_ctor_QMessageLogger_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMessageLogger> ();
}

static void _call_ctor_QMessageLogger_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMessageLogger *> (new QMessageLogger ());
}


//  Constructor QMessageLogger::QMessageLogger(const char *file, int line, const char *function)


static void _init_ctor_QMessageLogger_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("line");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("function");
  decl->add_arg<const char * > (argspec_2);
  decl->set_return_new<QMessageLogger> ();
}

static void _call_ctor_QMessageLogger_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QMessageLogger *> (new QMessageLogger (arg1, arg2, arg3));
}


//  Constructor QMessageLogger::QMessageLogger(const char *file, int line, const char *function, const char *category)


static void _init_ctor_QMessageLogger_5636 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("file");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("line");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("function");
  decl->add_arg<const char * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("category");
  decl->add_arg<const char * > (argspec_3);
  decl->set_return_new<QMessageLogger> ();
}

static void _call_ctor_QMessageLogger_5636 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const char *arg3 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg4 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QMessageLogger *> (new QMessageLogger (arg1, arg2, arg3, arg4));
}


// void QMessageLogger::critical(const char *msg, ...)


static void _init_f_critical_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msg");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_critical_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->critical (arg1);
}


// void QMessageLogger::critical(const QLoggingCategory &cat, const char *msg, ...)


static void _init_f_critical_c4558 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("msg");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_critical_c4558 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->critical (arg1, arg2);
}


// QDebug QMessageLogger::critical()


static void _init_f_critical_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug > ();
}

static void _call_f_critical_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->critical ());
}


// QDebug QMessageLogger::critical(const QLoggingCategory &cat)


static void _init_f_critical_c2935 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  decl->set_return<QDebug > ();
}

static void _call_f_critical_c2935 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->critical (arg1));
}


// void QMessageLogger::debug(const char *msg, ...)


static void _init_f_debug_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msg");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_debug_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->debug (arg1);
}


// void QMessageLogger::debug(const QLoggingCategory &cat, const char *msg, ...)


static void _init_f_debug_c4558 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("msg");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_debug_c4558 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->debug (arg1, arg2);
}


// QDebug QMessageLogger::debug()


static void _init_f_debug_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug > ();
}

static void _call_f_debug_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->debug ());
}


// QDebug QMessageLogger::debug(const QLoggingCategory &cat)


static void _init_f_debug_c2935 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  decl->set_return<QDebug > ();
}

static void _call_f_debug_c2935 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->debug (arg1));
}


// void QMessageLogger::fatal(const char *msg, ...)


static void _init_f_fatal_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msg");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_fatal_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->fatal (arg1);
}


// void QMessageLogger::info(const char *msg, ...)


static void _init_f_info_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msg");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_info_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->info (arg1);
}


// void QMessageLogger::info(const QLoggingCategory &cat, const char *msg, ...)


static void _init_f_info_c4558 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("msg");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_info_c4558 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->info (arg1, arg2);
}


// QDebug QMessageLogger::info()


static void _init_f_info_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug > ();
}

static void _call_f_info_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->info ());
}


// QDebug QMessageLogger::info(const QLoggingCategory &cat)


static void _init_f_info_c2935 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  decl->set_return<QDebug > ();
}

static void _call_f_info_c2935 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->info (arg1));
}


// void QMessageLogger::noDebug(const char *, ...)


static void _init_f_noDebug_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_noDebug_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->noDebug (arg1);
}


// QNoDebug QMessageLogger::noDebug()


static void _init_f_noDebug_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNoDebug > ();
}

static void _call_f_noDebug_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNoDebug > ((QNoDebug)((QMessageLogger *)cls)->noDebug ());
}


// void QMessageLogger::warning(const char *msg, ...)


static void _init_f_warning_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msg");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_warning_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->warning (arg1);
}


// void QMessageLogger::warning(const QLoggingCategory &cat, const char *msg, ...)


static void _init_f_warning_c4558 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("msg");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_warning_c4558 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  const char *arg2 = gsi::arg_reader<const char * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMessageLogger *)cls)->warning (arg1, arg2);
}


// QDebug QMessageLogger::warning()


static void _init_f_warning_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDebug > ();
}

static void _call_f_warning_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->warning ());
}


// QDebug QMessageLogger::warning(const QLoggingCategory &cat)


static void _init_f_warning_c2935 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cat");
  decl->add_arg<const QLoggingCategory & > (argspec_0);
  decl->set_return<QDebug > ();
}

static void _call_f_warning_c2935 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLoggingCategory &arg1 = gsi::arg_reader<const QLoggingCategory & >() (args, heap);
  ret.write<QDebug > ((QDebug)((QMessageLogger *)cls)->warning (arg1));
}



namespace gsi
{

static gsi::Methods methods_QMessageLogger () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMessageLogger::QMessageLogger()\nThis method creates an object of class QMessageLogger.", &_init_ctor_QMessageLogger_0, &_call_ctor_QMessageLogger_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMessageLogger::QMessageLogger(const char *file, int line, const char *function)\nThis method creates an object of class QMessageLogger.", &_init_ctor_QMessageLogger_4013, &_call_ctor_QMessageLogger_4013);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMessageLogger::QMessageLogger(const char *file, int line, const char *function, const char *category)\nThis method creates an object of class QMessageLogger.", &_init_ctor_QMessageLogger_5636, &_call_ctor_QMessageLogger_5636);
  methods += new qt_gsi::GenericMethod ("critical", "@brief Method void QMessageLogger::critical(const char *msg, ...)\n", true, &_init_f_critical_c1731, &_call_f_critical_c1731);
  methods += new qt_gsi::GenericMethod ("critical", "@brief Method void QMessageLogger::critical(const QLoggingCategory &cat, const char *msg, ...)\n", true, &_init_f_critical_c4558, &_call_f_critical_c4558);
  methods += new qt_gsi::GenericMethod ("critical", "@brief Method QDebug QMessageLogger::critical()\n", true, &_init_f_critical_c0, &_call_f_critical_c0);
  methods += new qt_gsi::GenericMethod ("critical", "@brief Method QDebug QMessageLogger::critical(const QLoggingCategory &cat)\n", true, &_init_f_critical_c2935, &_call_f_critical_c2935);
  methods += new qt_gsi::GenericMethod ("debug", "@brief Method void QMessageLogger::debug(const char *msg, ...)\n", true, &_init_f_debug_c1731, &_call_f_debug_c1731);
  methods += new qt_gsi::GenericMethod ("debug", "@brief Method void QMessageLogger::debug(const QLoggingCategory &cat, const char *msg, ...)\n", true, &_init_f_debug_c4558, &_call_f_debug_c4558);
  methods += new qt_gsi::GenericMethod ("debug", "@brief Method QDebug QMessageLogger::debug()\n", true, &_init_f_debug_c0, &_call_f_debug_c0);
  methods += new qt_gsi::GenericMethod ("debug", "@brief Method QDebug QMessageLogger::debug(const QLoggingCategory &cat)\n", true, &_init_f_debug_c2935, &_call_f_debug_c2935);
  methods += new qt_gsi::GenericMethod ("fatal", "@brief Method void QMessageLogger::fatal(const char *msg, ...)\n", true, &_init_f_fatal_c1731, &_call_f_fatal_c1731);
  methods += new qt_gsi::GenericMethod ("info", "@brief Method void QMessageLogger::info(const char *msg, ...)\n", true, &_init_f_info_c1731, &_call_f_info_c1731);
  methods += new qt_gsi::GenericMethod ("info", "@brief Method void QMessageLogger::info(const QLoggingCategory &cat, const char *msg, ...)\n", true, &_init_f_info_c4558, &_call_f_info_c4558);
  methods += new qt_gsi::GenericMethod ("info", "@brief Method QDebug QMessageLogger::info()\n", true, &_init_f_info_c0, &_call_f_info_c0);
  methods += new qt_gsi::GenericMethod ("info", "@brief Method QDebug QMessageLogger::info(const QLoggingCategory &cat)\n", true, &_init_f_info_c2935, &_call_f_info_c2935);
  methods += new qt_gsi::GenericMethod ("noDebug", "@brief Method void QMessageLogger::noDebug(const char *, ...)\n", true, &_init_f_noDebug_c1731, &_call_f_noDebug_c1731);
  methods += new qt_gsi::GenericMethod ("noDebug", "@brief Method QNoDebug QMessageLogger::noDebug()\n", true, &_init_f_noDebug_c0, &_call_f_noDebug_c0);
  methods += new qt_gsi::GenericMethod ("warning", "@brief Method void QMessageLogger::warning(const char *msg, ...)\n", true, &_init_f_warning_c1731, &_call_f_warning_c1731);
  methods += new qt_gsi::GenericMethod ("warning", "@brief Method void QMessageLogger::warning(const QLoggingCategory &cat, const char *msg, ...)\n", true, &_init_f_warning_c4558, &_call_f_warning_c4558);
  methods += new qt_gsi::GenericMethod ("warning", "@brief Method QDebug QMessageLogger::warning()\n", true, &_init_f_warning_c0, &_call_f_warning_c0);
  methods += new qt_gsi::GenericMethod ("warning", "@brief Method QDebug QMessageLogger::warning(const QLoggingCategory &cat)\n", true, &_init_f_warning_c2935, &_call_f_warning_c2935);
  return methods;
}

gsi::Class<QMessageLogger> decl_QMessageLogger ("QtCore", "QMessageLogger",
  methods_QMessageLogger (),
  "@qt\n@brief Binding of QMessageLogger");


GSI_QTCORE_PUBLIC gsi::Class<QMessageLogger> &qtdecl_QMessageLogger () { return decl_QMessageLogger; }

}


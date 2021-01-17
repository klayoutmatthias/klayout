
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
*  @file gsiDeclQBasicTimer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QBasicTimer>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QBasicTimer

//  Constructor QBasicTimer::QBasicTimer()


static void _init_ctor_QBasicTimer_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QBasicTimer> ();
}

static void _call_ctor_QBasicTimer_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBasicTimer *> (new QBasicTimer ());
}


// bool QBasicTimer::isActive()


static void _init_f_isActive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isActive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QBasicTimer *)cls)->isActive ());
}


// void QBasicTimer::start(int msec, QObject *obj)


static void _init_f_start_1961 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msec");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("obj");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_start_1961 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBasicTimer *)cls)->start (arg1, arg2);
}


// void QBasicTimer::start(int msec, Qt::TimerType timerType, QObject *obj)


static void _init_f_start_3533 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msec");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("timerType");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("obj");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_start_3533 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::TimerType>::target_type & >() (args, heap);
  QObject *arg3 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBasicTimer *)cls)->start (arg1, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg2).cref(), arg3);
}


// void QBasicTimer::stop()


static void _init_f_stop_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_stop_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBasicTimer *)cls)->stop ();
}


// int QBasicTimer::timerId()


static void _init_f_timerId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_timerId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QBasicTimer *)cls)->timerId ());
}



namespace gsi
{

static gsi::Methods methods_QBasicTimer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBasicTimer::QBasicTimer()\nThis method creates an object of class QBasicTimer.", &_init_ctor_QBasicTimer_0, &_call_ctor_QBasicTimer_0);
  methods += new qt_gsi::GenericMethod ("isActive?", "@brief Method bool QBasicTimer::isActive()\n", true, &_init_f_isActive_c0, &_call_f_isActive_c0);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QBasicTimer::start(int msec, QObject *obj)\n", false, &_init_f_start_1961, &_call_f_start_1961);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QBasicTimer::start(int msec, Qt::TimerType timerType, QObject *obj)\n", false, &_init_f_start_3533, &_call_f_start_3533);
  methods += new qt_gsi::GenericMethod ("stop", "@brief Method void QBasicTimer::stop()\n", false, &_init_f_stop_0, &_call_f_stop_0);
  methods += new qt_gsi::GenericMethod ("timerId", "@brief Method int QBasicTimer::timerId()\n", true, &_init_f_timerId_c0, &_call_f_timerId_c0);
  return methods;
}

gsi::Class<QBasicTimer> decl_QBasicTimer ("QtCore", "QBasicTimer",
  methods_QBasicTimer (),
  "@qt\n@brief Binding of QBasicTimer");


GSI_QTCORE_PUBLIC gsi::Class<QBasicTimer> &qtdecl_QBasicTimer () { return decl_QBasicTimer; }

}


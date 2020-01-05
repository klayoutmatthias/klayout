
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
*  @file gsiDeclQMoveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMoveEvent>
#include <QEvent>
#include <QPoint>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMoveEvent

// const QPoint &QMoveEvent::oldPos()


static void _init_f_oldPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_oldPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QMoveEvent *)cls)->oldPos ());
}


// const QPoint &QMoveEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QMoveEvent *)cls)->pos ());
}


namespace gsi
{

static gsi::Methods methods_QMoveEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("oldPos", "@brief Method const QPoint &QMoveEvent::oldPos()\n", true, &_init_f_oldPos_c0, &_call_f_oldPos_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QMoveEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QMoveEvent> decl_QMoveEvent (qtdecl_QEvent (), "QtGui", "QMoveEvent_Native",
  methods_QMoveEvent (),
  "@hide\n@alias QMoveEvent");

GSI_QTGUI_PUBLIC gsi::Class<QMoveEvent> &qtdecl_QMoveEvent () { return decl_QMoveEvent; }

}


class QMoveEvent_Adaptor : public QMoveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMoveEvent_Adaptor();

  //  [adaptor ctor] QMoveEvent::QMoveEvent(const QPoint &pos, const QPoint &oldPos)
  QMoveEvent_Adaptor(const QPoint &pos, const QPoint &oldPos) : QMoveEvent(pos, oldPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QMoveEvent_Adaptor::~QMoveEvent_Adaptor() { }

//  Constructor QMoveEvent::QMoveEvent(const QPoint &pos, const QPoint &oldPos) (adaptor class)

static void _init_ctor_QMoveEvent_Adaptor_3724 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("oldPos");
  decl->add_arg<const QPoint & > (argspec_1);
  decl->set_return_new<QMoveEvent_Adaptor> ();
}

static void _call_ctor_QMoveEvent_Adaptor_3724 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QPoint &arg2 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QMoveEvent_Adaptor *> (new QMoveEvent_Adaptor (arg1, arg2));
}


namespace gsi
{

gsi::Class<QMoveEvent> &qtdecl_QMoveEvent ();

static gsi::Methods methods_QMoveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMoveEvent::QMoveEvent(const QPoint &pos, const QPoint &oldPos)\nThis method creates an object of class QMoveEvent.", &_init_ctor_QMoveEvent_Adaptor_3724, &_call_ctor_QMoveEvent_Adaptor_3724);
  return methods;
}

gsi::Class<QMoveEvent_Adaptor> decl_QMoveEvent_Adaptor (qtdecl_QMoveEvent (), "QtGui", "QMoveEvent",
  methods_QMoveEvent_Adaptor (),
  "@qt\n@brief Binding of QMoveEvent");

}


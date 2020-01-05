
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
*  @file gsiDeclQGraphicsSceneMoveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsSceneMoveEvent>
#include <QPointF>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsSceneMoveEvent

// QPointF QGraphicsSceneMoveEvent::newPos()


static void _init_f_newPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_newPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneMoveEvent *)cls)->newPos ());
}


// QPointF QGraphicsSceneMoveEvent::oldPos()


static void _init_f_oldPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_oldPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneMoveEvent *)cls)->oldPos ());
}


// void QGraphicsSceneMoveEvent::setNewPos(const QPointF &pos)


static void _init_f_setNewPos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNewPos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneMoveEvent *)cls)->setNewPos (arg1);
}


// void QGraphicsSceneMoveEvent::setOldPos(const QPointF &pos)


static void _init_f_setOldPos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setOldPos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneMoveEvent *)cls)->setOldPos (arg1);
}


namespace gsi
{

static gsi::Methods methods_QGraphicsSceneMoveEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":newPos", "@brief Method QPointF QGraphicsSceneMoveEvent::newPos()\n", true, &_init_f_newPos_c0, &_call_f_newPos_c0);
  methods += new qt_gsi::GenericMethod (":oldPos", "@brief Method QPointF QGraphicsSceneMoveEvent::oldPos()\n", true, &_init_f_oldPos_c0, &_call_f_oldPos_c0);
  methods += new qt_gsi::GenericMethod ("setNewPos|newPos=", "@brief Method void QGraphicsSceneMoveEvent::setNewPos(const QPointF &pos)\n", false, &_init_f_setNewPos_1986, &_call_f_setNewPos_1986);
  methods += new qt_gsi::GenericMethod ("setOldPos|oldPos=", "@brief Method void QGraphicsSceneMoveEvent::setOldPos(const QPointF &pos)\n", false, &_init_f_setOldPos_1986, &_call_f_setOldPos_1986);
  return methods;
}

gsi::Class<QGraphicsSceneEvent> &qtdecl_QGraphicsSceneEvent ();

gsi::Class<QGraphicsSceneMoveEvent> decl_QGraphicsSceneMoveEvent (qtdecl_QGraphicsSceneEvent (), "QtGui", "QGraphicsSceneMoveEvent_Native",
  methods_QGraphicsSceneMoveEvent (),
  "@hide\n@alias QGraphicsSceneMoveEvent");

GSI_QTGUI_PUBLIC gsi::Class<QGraphicsSceneMoveEvent> &qtdecl_QGraphicsSceneMoveEvent () { return decl_QGraphicsSceneMoveEvent; }

}


class QGraphicsSceneMoveEvent_Adaptor : public QGraphicsSceneMoveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsSceneMoveEvent_Adaptor();

  //  [adaptor ctor] QGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent()
  QGraphicsSceneMoveEvent_Adaptor() : QGraphicsSceneMoveEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QGraphicsSceneMoveEvent_Adaptor::~QGraphicsSceneMoveEvent_Adaptor() { }

//  Constructor QGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent() (adaptor class)

static void _init_ctor_QGraphicsSceneMoveEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGraphicsSceneMoveEvent_Adaptor> ();
}

static void _call_ctor_QGraphicsSceneMoveEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGraphicsSceneMoveEvent_Adaptor *> (new QGraphicsSceneMoveEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QGraphicsSceneMoveEvent> &qtdecl_QGraphicsSceneMoveEvent ();

static gsi::Methods methods_QGraphicsSceneMoveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent()\nThis method creates an object of class QGraphicsSceneMoveEvent.", &_init_ctor_QGraphicsSceneMoveEvent_Adaptor_0, &_call_ctor_QGraphicsSceneMoveEvent_Adaptor_0);
  return methods;
}

gsi::Class<QGraphicsSceneMoveEvent_Adaptor> decl_QGraphicsSceneMoveEvent_Adaptor (qtdecl_QGraphicsSceneMoveEvent (), "QtGui", "QGraphicsSceneMoveEvent",
  methods_QGraphicsSceneMoveEvent_Adaptor (),
  "@qt\n@brief Binding of QGraphicsSceneMoveEvent");

}


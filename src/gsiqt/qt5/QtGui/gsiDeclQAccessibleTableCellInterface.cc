
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
*  @file gsiDeclQAccessibleTableCellInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleTableCellInterface>
#include <QAccessibleInterface>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleTableCellInterface

// int QAccessibleTableCellInterface::columnExtent()


static void _init_f_columnExtent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columnExtent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface *)cls)->columnExtent ());
}


// QList<QAccessibleInterface*> QAccessibleTableCellInterface::columnHeaderCells()


static void _init_f_columnHeaderCells_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAccessibleInterface*> > ();
}

static void _call_f_columnHeaderCells_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAccessibleInterface*> > ((QList<QAccessibleInterface*>)((QAccessibleTableCellInterface *)cls)->columnHeaderCells ());
}


// int QAccessibleTableCellInterface::columnIndex()


static void _init_f_columnIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columnIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface *)cls)->columnIndex ());
}


// bool QAccessibleTableCellInterface::isSelected()


static void _init_f_isSelected_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSelected_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleTableCellInterface *)cls)->isSelected ());
}


// int QAccessibleTableCellInterface::rowExtent()


static void _init_f_rowExtent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rowExtent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface *)cls)->rowExtent ());
}


// QList<QAccessibleInterface*> QAccessibleTableCellInterface::rowHeaderCells()


static void _init_f_rowHeaderCells_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAccessibleInterface*> > ();
}

static void _call_f_rowHeaderCells_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAccessibleInterface*> > ((QList<QAccessibleInterface*>)((QAccessibleTableCellInterface *)cls)->rowHeaderCells ());
}


// int QAccessibleTableCellInterface::rowIndex()


static void _init_f_rowIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rowIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface *)cls)->rowIndex ());
}


// QAccessibleInterface *QAccessibleTableCellInterface::table()


static void _init_f_table_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_table_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleTableCellInterface *)cls)->table ());
}


namespace gsi
{

static gsi::Methods methods_QAccessibleTableCellInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("columnExtent", "@brief Method int QAccessibleTableCellInterface::columnExtent()\n", true, &_init_f_columnExtent_c0, &_call_f_columnExtent_c0);
  methods += new qt_gsi::GenericMethod ("columnHeaderCells", "@brief Method QList<QAccessibleInterface*> QAccessibleTableCellInterface::columnHeaderCells()\n", true, &_init_f_columnHeaderCells_c0, &_call_f_columnHeaderCells_c0);
  methods += new qt_gsi::GenericMethod ("columnIndex", "@brief Method int QAccessibleTableCellInterface::columnIndex()\n", true, &_init_f_columnIndex_c0, &_call_f_columnIndex_c0);
  methods += new qt_gsi::GenericMethod ("isSelected?", "@brief Method bool QAccessibleTableCellInterface::isSelected()\n", true, &_init_f_isSelected_c0, &_call_f_isSelected_c0);
  methods += new qt_gsi::GenericMethod ("rowExtent", "@brief Method int QAccessibleTableCellInterface::rowExtent()\n", true, &_init_f_rowExtent_c0, &_call_f_rowExtent_c0);
  methods += new qt_gsi::GenericMethod ("rowHeaderCells", "@brief Method QList<QAccessibleInterface*> QAccessibleTableCellInterface::rowHeaderCells()\n", true, &_init_f_rowHeaderCells_c0, &_call_f_rowHeaderCells_c0);
  methods += new qt_gsi::GenericMethod ("rowIndex", "@brief Method int QAccessibleTableCellInterface::rowIndex()\n", true, &_init_f_rowIndex_c0, &_call_f_rowIndex_c0);
  methods += new qt_gsi::GenericMethod ("table", "@brief Method QAccessibleInterface *QAccessibleTableCellInterface::table()\n", true, &_init_f_table_c0, &_call_f_table_c0);
  return methods;
}

gsi::Class<QAccessibleTableCellInterface> decl_QAccessibleTableCellInterface ("QtGui", "QAccessibleTableCellInterface_Native",
  methods_QAccessibleTableCellInterface (),
  "@hide\n@alias QAccessibleTableCellInterface");

GSI_QTGUI_PUBLIC gsi::Class<QAccessibleTableCellInterface> &qtdecl_QAccessibleTableCellInterface () { return decl_QAccessibleTableCellInterface; }

}


class QAccessibleTableCellInterface_Adaptor : public QAccessibleTableCellInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleTableCellInterface_Adaptor();

  //  [adaptor ctor] QAccessibleTableCellInterface::QAccessibleTableCellInterface()
  QAccessibleTableCellInterface_Adaptor() : QAccessibleTableCellInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] int QAccessibleTableCellInterface::columnExtent()
  int cbs_columnExtent_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("columnExtent");
  }

  virtual int columnExtent() const
  {
    if (cb_columnExtent_c0_0.can_issue()) {
      return cb_columnExtent_c0_0.issue<QAccessibleTableCellInterface_Adaptor, int>(&QAccessibleTableCellInterface_Adaptor::cbs_columnExtent_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("columnExtent");
    }
  }

  //  [adaptor impl] QList<QAccessibleInterface*> QAccessibleTableCellInterface::columnHeaderCells()
  QList<QAccessibleInterface*> cbs_columnHeaderCells_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("columnHeaderCells");
  }

  virtual QList<QAccessibleInterface*> columnHeaderCells() const
  {
    if (cb_columnHeaderCells_c0_0.can_issue()) {
      return cb_columnHeaderCells_c0_0.issue<QAccessibleTableCellInterface_Adaptor, QList<QAccessibleInterface*> >(&QAccessibleTableCellInterface_Adaptor::cbs_columnHeaderCells_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("columnHeaderCells");
    }
  }

  //  [adaptor impl] int QAccessibleTableCellInterface::columnIndex()
  int cbs_columnIndex_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("columnIndex");
  }

  virtual int columnIndex() const
  {
    if (cb_columnIndex_c0_0.can_issue()) {
      return cb_columnIndex_c0_0.issue<QAccessibleTableCellInterface_Adaptor, int>(&QAccessibleTableCellInterface_Adaptor::cbs_columnIndex_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("columnIndex");
    }
  }

  //  [adaptor impl] bool QAccessibleTableCellInterface::isSelected()
  bool cbs_isSelected_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("isSelected");
  }

  virtual bool isSelected() const
  {
    if (cb_isSelected_c0_0.can_issue()) {
      return cb_isSelected_c0_0.issue<QAccessibleTableCellInterface_Adaptor, bool>(&QAccessibleTableCellInterface_Adaptor::cbs_isSelected_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("isSelected");
    }
  }

  //  [adaptor impl] int QAccessibleTableCellInterface::rowExtent()
  int cbs_rowExtent_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("rowExtent");
  }

  virtual int rowExtent() const
  {
    if (cb_rowExtent_c0_0.can_issue()) {
      return cb_rowExtent_c0_0.issue<QAccessibleTableCellInterface_Adaptor, int>(&QAccessibleTableCellInterface_Adaptor::cbs_rowExtent_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("rowExtent");
    }
  }

  //  [adaptor impl] QList<QAccessibleInterface*> QAccessibleTableCellInterface::rowHeaderCells()
  QList<QAccessibleInterface*> cbs_rowHeaderCells_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("rowHeaderCells");
  }

  virtual QList<QAccessibleInterface*> rowHeaderCells() const
  {
    if (cb_rowHeaderCells_c0_0.can_issue()) {
      return cb_rowHeaderCells_c0_0.issue<QAccessibleTableCellInterface_Adaptor, QList<QAccessibleInterface*> >(&QAccessibleTableCellInterface_Adaptor::cbs_rowHeaderCells_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("rowHeaderCells");
    }
  }

  //  [adaptor impl] int QAccessibleTableCellInterface::rowIndex()
  int cbs_rowIndex_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("rowIndex");
  }

  virtual int rowIndex() const
  {
    if (cb_rowIndex_c0_0.can_issue()) {
      return cb_rowIndex_c0_0.issue<QAccessibleTableCellInterface_Adaptor, int>(&QAccessibleTableCellInterface_Adaptor::cbs_rowIndex_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("rowIndex");
    }
  }

  //  [adaptor impl] QAccessibleInterface *QAccessibleTableCellInterface::table()
  QAccessibleInterface * cbs_table_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("table");
  }

  virtual QAccessibleInterface * table() const
  {
    if (cb_table_c0_0.can_issue()) {
      return cb_table_c0_0.issue<QAccessibleTableCellInterface_Adaptor, QAccessibleInterface *>(&QAccessibleTableCellInterface_Adaptor::cbs_table_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("table");
    }
  }

  gsi::Callback cb_columnExtent_c0_0;
  gsi::Callback cb_columnHeaderCells_c0_0;
  gsi::Callback cb_columnIndex_c0_0;
  gsi::Callback cb_isSelected_c0_0;
  gsi::Callback cb_rowExtent_c0_0;
  gsi::Callback cb_rowHeaderCells_c0_0;
  gsi::Callback cb_rowIndex_c0_0;
  gsi::Callback cb_table_c0_0;
};

QAccessibleTableCellInterface_Adaptor::~QAccessibleTableCellInterface_Adaptor() { }

//  Constructor QAccessibleTableCellInterface::QAccessibleTableCellInterface() (adaptor class)

static void _init_ctor_QAccessibleTableCellInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessibleTableCellInterface_Adaptor> ();
}

static void _call_ctor_QAccessibleTableCellInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleTableCellInterface_Adaptor *> (new QAccessibleTableCellInterface_Adaptor ());
}


// int QAccessibleTableCellInterface::columnExtent()

static void _init_cbs_columnExtent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_columnExtent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_columnExtent_c0_0 ());
}

static void _set_callback_cbs_columnExtent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_columnExtent_c0_0 = cb;
}


// QList<QAccessibleInterface*> QAccessibleTableCellInterface::columnHeaderCells()

static void _init_cbs_columnHeaderCells_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAccessibleInterface*> > ();
}

static void _call_cbs_columnHeaderCells_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAccessibleInterface*> > ((QList<QAccessibleInterface*>)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_columnHeaderCells_c0_0 ());
}

static void _set_callback_cbs_columnHeaderCells_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_columnHeaderCells_c0_0 = cb;
}


// int QAccessibleTableCellInterface::columnIndex()

static void _init_cbs_columnIndex_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_columnIndex_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_columnIndex_c0_0 ());
}

static void _set_callback_cbs_columnIndex_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_columnIndex_c0_0 = cb;
}


// bool QAccessibleTableCellInterface::isSelected()

static void _init_cbs_isSelected_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isSelected_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_isSelected_c0_0 ());
}

static void _set_callback_cbs_isSelected_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_isSelected_c0_0 = cb;
}


// int QAccessibleTableCellInterface::rowExtent()

static void _init_cbs_rowExtent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_rowExtent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_rowExtent_c0_0 ());
}

static void _set_callback_cbs_rowExtent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_rowExtent_c0_0 = cb;
}


// QList<QAccessibleInterface*> QAccessibleTableCellInterface::rowHeaderCells()

static void _init_cbs_rowHeaderCells_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QAccessibleInterface*> > ();
}

static void _call_cbs_rowHeaderCells_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QAccessibleInterface*> > ((QList<QAccessibleInterface*>)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_rowHeaderCells_c0_0 ());
}

static void _set_callback_cbs_rowHeaderCells_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_rowHeaderCells_c0_0 = cb;
}


// int QAccessibleTableCellInterface::rowIndex()

static void _init_cbs_rowIndex_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_rowIndex_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_rowIndex_c0_0 ());
}

static void _set_callback_cbs_rowIndex_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_rowIndex_c0_0 = cb;
}


// QAccessibleInterface *QAccessibleTableCellInterface::table()

static void _init_cbs_table_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_cbs_table_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleTableCellInterface_Adaptor *)cls)->cbs_table_c0_0 ());
}

static void _set_callback_cbs_table_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTableCellInterface_Adaptor *)cls)->cb_table_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleTableCellInterface> &qtdecl_QAccessibleTableCellInterface ();

static gsi::Methods methods_QAccessibleTableCellInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTableCellInterface::QAccessibleTableCellInterface()\nThis method creates an object of class QAccessibleTableCellInterface.", &_init_ctor_QAccessibleTableCellInterface_Adaptor_0, &_call_ctor_QAccessibleTableCellInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("columnExtent", "@brief Virtual method int QAccessibleTableCellInterface::columnExtent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_columnExtent_c0_0, &_call_cbs_columnExtent_c0_0);
  methods += new qt_gsi::GenericMethod ("columnExtent", "@hide", true, &_init_cbs_columnExtent_c0_0, &_call_cbs_columnExtent_c0_0, &_set_callback_cbs_columnExtent_c0_0);
  methods += new qt_gsi::GenericMethod ("columnHeaderCells", "@brief Virtual method QList<QAccessibleInterface*> QAccessibleTableCellInterface::columnHeaderCells()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_columnHeaderCells_c0_0, &_call_cbs_columnHeaderCells_c0_0);
  methods += new qt_gsi::GenericMethod ("columnHeaderCells", "@hide", true, &_init_cbs_columnHeaderCells_c0_0, &_call_cbs_columnHeaderCells_c0_0, &_set_callback_cbs_columnHeaderCells_c0_0);
  methods += new qt_gsi::GenericMethod ("columnIndex", "@brief Virtual method int QAccessibleTableCellInterface::columnIndex()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_columnIndex_c0_0, &_call_cbs_columnIndex_c0_0);
  methods += new qt_gsi::GenericMethod ("columnIndex", "@hide", true, &_init_cbs_columnIndex_c0_0, &_call_cbs_columnIndex_c0_0, &_set_callback_cbs_columnIndex_c0_0);
  methods += new qt_gsi::GenericMethod ("isSelected", "@brief Virtual method bool QAccessibleTableCellInterface::isSelected()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isSelected_c0_0, &_call_cbs_isSelected_c0_0);
  methods += new qt_gsi::GenericMethod ("isSelected", "@hide", true, &_init_cbs_isSelected_c0_0, &_call_cbs_isSelected_c0_0, &_set_callback_cbs_isSelected_c0_0);
  methods += new qt_gsi::GenericMethod ("rowExtent", "@brief Virtual method int QAccessibleTableCellInterface::rowExtent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_rowExtent_c0_0, &_call_cbs_rowExtent_c0_0);
  methods += new qt_gsi::GenericMethod ("rowExtent", "@hide", true, &_init_cbs_rowExtent_c0_0, &_call_cbs_rowExtent_c0_0, &_set_callback_cbs_rowExtent_c0_0);
  methods += new qt_gsi::GenericMethod ("rowHeaderCells", "@brief Virtual method QList<QAccessibleInterface*> QAccessibleTableCellInterface::rowHeaderCells()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_rowHeaderCells_c0_0, &_call_cbs_rowHeaderCells_c0_0);
  methods += new qt_gsi::GenericMethod ("rowHeaderCells", "@hide", true, &_init_cbs_rowHeaderCells_c0_0, &_call_cbs_rowHeaderCells_c0_0, &_set_callback_cbs_rowHeaderCells_c0_0);
  methods += new qt_gsi::GenericMethod ("rowIndex", "@brief Virtual method int QAccessibleTableCellInterface::rowIndex()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_rowIndex_c0_0, &_call_cbs_rowIndex_c0_0);
  methods += new qt_gsi::GenericMethod ("rowIndex", "@hide", true, &_init_cbs_rowIndex_c0_0, &_call_cbs_rowIndex_c0_0, &_set_callback_cbs_rowIndex_c0_0);
  methods += new qt_gsi::GenericMethod ("table", "@brief Virtual method QAccessibleInterface *QAccessibleTableCellInterface::table()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_table_c0_0, &_call_cbs_table_c0_0);
  methods += new qt_gsi::GenericMethod ("table", "@hide", true, &_init_cbs_table_c0_0, &_call_cbs_table_c0_0, &_set_callback_cbs_table_c0_0);
  return methods;
}

gsi::Class<QAccessibleTableCellInterface_Adaptor> decl_QAccessibleTableCellInterface_Adaptor (qtdecl_QAccessibleTableCellInterface (), "QtGui", "QAccessibleTableCellInterface",
  methods_QAccessibleTableCellInterface_Adaptor (),
  "@qt\n@brief Binding of QAccessibleTableCellInterface");

}


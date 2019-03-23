
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
*  @file gsiDeclQDomAttr.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include "gsiDeclQtXmlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomAttr

//  Constructor QDomAttr::QDomAttr()


static void _init_ctor_QDomAttr_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomAttr> ();
}

static void _call_ctor_QDomAttr_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomAttr *> (new QDomAttr ());
}


//  Constructor QDomAttr::QDomAttr(const QDomAttr &x)


static void _init_ctor_QDomAttr_2093 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomAttr & > (argspec_0);
  decl->set_return_new<QDomAttr> ();
}

static void _call_ctor_QDomAttr_2093 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomAttr &arg1 = gsi::arg_reader<const QDomAttr & >() (args, heap);
  ret.write<QDomAttr *> (new QDomAttr (arg1));
}


// QString QDomAttr::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomAttr *)cls)->name ());
}


// QDomNode::NodeType QDomAttr::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomAttr *)cls)->nodeType ()));
}


// QDomAttr &QDomAttr::operator=(const QDomAttr &)


static void _init_f_operator_eq__2093 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomAttr & > (argspec_0);
  decl->set_return<QDomAttr & > ();
}

static void _call_f_operator_eq__2093 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomAttr &arg1 = gsi::arg_reader<const QDomAttr & >() (args, heap);
  ret.write<QDomAttr & > ((QDomAttr &)((QDomAttr *)cls)->operator= (arg1));
}


// QDomElement QDomAttr::ownerElement()


static void _init_f_ownerElement_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomElement > ();
}

static void _call_f_ownerElement_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomElement > ((QDomElement)((QDomAttr *)cls)->ownerElement ());
}


// void QDomAttr::setValue(const QString &)


static void _init_f_setValue_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setValue_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomAttr *)cls)->setValue (arg1);
}


// bool QDomAttr::specified()


static void _init_f_specified_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_specified_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDomAttr *)cls)->specified ());
}


// QString QDomAttr::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomAttr *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QDomAttr () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomAttr::QDomAttr()\nThis method creates an object of class QDomAttr.", &_init_ctor_QDomAttr_0, &_call_ctor_QDomAttr_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomAttr::QDomAttr(const QDomAttr &x)\nThis method creates an object of class QDomAttr.", &_init_ctor_QDomAttr_2093, &_call_ctor_QDomAttr_2093);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QDomAttr::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomAttr::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomAttr &QDomAttr::operator=(const QDomAttr &)\n", false, &_init_f_operator_eq__2093, &_call_f_operator_eq__2093);
  methods += new qt_gsi::GenericMethod ("ownerElement", "@brief Method QDomElement QDomAttr::ownerElement()\n", true, &_init_f_ownerElement_c0, &_call_f_ownerElement_c0);
  methods += new qt_gsi::GenericMethod ("setValue|value=", "@brief Method void QDomAttr::setValue(const QString &)\n", false, &_init_f_setValue_2025, &_call_f_setValue_2025);
  methods += new qt_gsi::GenericMethod ("specified", "@brief Method bool QDomAttr::specified()\n", true, &_init_f_specified_c0, &_call_f_specified_c0);
  methods += new qt_gsi::GenericMethod (":value", "@brief Method QString QDomAttr::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomAttr> decl_QDomAttr (qtdecl_QDomNode (), "QtXml", "QDomAttr",
  methods_QDomAttr (),
  "@qt\n@brief Binding of QDomAttr");


GSI_QTXML_PUBLIC gsi::Class<QDomAttr> &qtdecl_QDomAttr () { return decl_QDomAttr; }

}


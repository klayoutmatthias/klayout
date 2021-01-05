
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
*  @file gsiDeclQDomEntityReference.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomEntityReference>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
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
// class QDomEntityReference

//  Constructor QDomEntityReference::QDomEntityReference()


static void _init_ctor_QDomEntityReference_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomEntityReference> ();
}

static void _call_ctor_QDomEntityReference_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomEntityReference *> (new QDomEntityReference ());
}


//  Constructor QDomEntityReference::QDomEntityReference(const QDomEntityReference &x)


static void _init_ctor_QDomEntityReference_3230 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomEntityReference & > (argspec_0);
  decl->set_return_new<QDomEntityReference> ();
}

static void _call_ctor_QDomEntityReference_3230 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomEntityReference &arg1 = gsi::arg_reader<const QDomEntityReference & >() (args, heap);
  ret.write<QDomEntityReference *> (new QDomEntityReference (arg1));
}


// QDomNode::NodeType QDomEntityReference::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomEntityReference *)cls)->nodeType ()));
}


// QDomEntityReference &QDomEntityReference::operator=(const QDomEntityReference &)


static void _init_f_operator_eq__3230 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomEntityReference & > (argspec_0);
  decl->set_return<QDomEntityReference & > ();
}

static void _call_f_operator_eq__3230 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomEntityReference &arg1 = gsi::arg_reader<const QDomEntityReference & >() (args, heap);
  ret.write<QDomEntityReference & > ((QDomEntityReference &)((QDomEntityReference *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QDomEntityReference () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomEntityReference::QDomEntityReference()\nThis method creates an object of class QDomEntityReference.", &_init_ctor_QDomEntityReference_0, &_call_ctor_QDomEntityReference_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomEntityReference::QDomEntityReference(const QDomEntityReference &x)\nThis method creates an object of class QDomEntityReference.", &_init_ctor_QDomEntityReference_3230, &_call_ctor_QDomEntityReference_3230);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomEntityReference::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomEntityReference &QDomEntityReference::operator=(const QDomEntityReference &)\n", false, &_init_f_operator_eq__3230, &_call_f_operator_eq__3230);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomEntityReference> decl_QDomEntityReference (qtdecl_QDomNode (), "QtXml", "QDomEntityReference",
  methods_QDomEntityReference (),
  "@qt\n@brief Binding of QDomEntityReference");


GSI_QTXML_PUBLIC gsi::Class<QDomEntityReference> &qtdecl_QDomEntityReference () { return decl_QDomEntityReference; }

}


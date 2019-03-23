
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
*  @file gsiDeclQDomNotation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomNotation>
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
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include "gsiDeclQtXmlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomNotation

//  Constructor QDomNotation::QDomNotation()


static void _init_ctor_QDomNotation_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomNotation> ();
}

static void _call_ctor_QDomNotation_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomNotation *> (new QDomNotation ());
}


//  Constructor QDomNotation::QDomNotation(const QDomNotation &x)


static void _init_ctor_QDomNotation_2526 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomNotation & > (argspec_0);
  decl->set_return_new<QDomNotation> ();
}

static void _call_ctor_QDomNotation_2526 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNotation &arg1 = gsi::arg_reader<const QDomNotation & >() (args, heap);
  ret.write<QDomNotation *> (new QDomNotation (arg1));
}


// QDomNode::NodeType QDomNotation::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomNotation *)cls)->nodeType ()));
}


// QDomNotation &QDomNotation::operator=(const QDomNotation &)


static void _init_f_operator_eq__2526 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomNotation & > (argspec_0);
  decl->set_return<QDomNotation & > ();
}

static void _call_f_operator_eq__2526 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomNotation &arg1 = gsi::arg_reader<const QDomNotation & >() (args, heap);
  ret.write<QDomNotation & > ((QDomNotation &)((QDomNotation *)cls)->operator= (arg1));
}


// QString QDomNotation::publicId()


static void _init_f_publicId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_publicId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomNotation *)cls)->publicId ());
}


// QString QDomNotation::systemId()


static void _init_f_systemId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_systemId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomNotation *)cls)->systemId ());
}



namespace gsi
{

static gsi::Methods methods_QDomNotation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomNotation::QDomNotation()\nThis method creates an object of class QDomNotation.", &_init_ctor_QDomNotation_0, &_call_ctor_QDomNotation_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomNotation::QDomNotation(const QDomNotation &x)\nThis method creates an object of class QDomNotation.", &_init_ctor_QDomNotation_2526, &_call_ctor_QDomNotation_2526);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomNotation::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomNotation &QDomNotation::operator=(const QDomNotation &)\n", false, &_init_f_operator_eq__2526, &_call_f_operator_eq__2526);
  methods += new qt_gsi::GenericMethod ("publicId", "@brief Method QString QDomNotation::publicId()\n", true, &_init_f_publicId_c0, &_call_f_publicId_c0);
  methods += new qt_gsi::GenericMethod ("systemId", "@brief Method QString QDomNotation::systemId()\n", true, &_init_f_systemId_c0, &_call_f_systemId_c0);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomNotation> decl_QDomNotation (qtdecl_QDomNode (), "QtXml", "QDomNotation",
  methods_QDomNotation (),
  "@qt\n@brief Binding of QDomNotation");


GSI_QTXML_PUBLIC gsi::Class<QDomNotation> &qtdecl_QDomNotation () { return decl_QDomNotation; }

}


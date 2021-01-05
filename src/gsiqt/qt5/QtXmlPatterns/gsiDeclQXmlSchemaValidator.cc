
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
*  @file gsiDeclQXmlSchemaValidator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlSchemaValidator>
#include <QAbstractMessageHandler>
#include <QAbstractUriResolver>
#include <QIODevice>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QXmlNamePool>
#include <QXmlSchema>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlSchemaValidator

//  Constructor QXmlSchemaValidator::QXmlSchemaValidator()


static void _init_ctor_QXmlSchemaValidator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlSchemaValidator> ();
}

static void _call_ctor_QXmlSchemaValidator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlSchemaValidator *> (new QXmlSchemaValidator ());
}


//  Constructor QXmlSchemaValidator::QXmlSchemaValidator(const QXmlSchema &schema)


static void _init_ctor_QXmlSchemaValidator_2292 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("schema");
  decl->add_arg<const QXmlSchema & > (argspec_0);
  decl->set_return_new<QXmlSchemaValidator> ();
}

static void _call_ctor_QXmlSchemaValidator_2292 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlSchema &arg1 = gsi::arg_reader<const QXmlSchema & >() (args, heap);
  ret.write<QXmlSchemaValidator *> (new QXmlSchemaValidator (arg1));
}


// QAbstractMessageHandler *QXmlSchemaValidator::messageHandler()


static void _init_f_messageHandler_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAbstractMessageHandler * > ();
}

static void _call_f_messageHandler_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractMessageHandler * > ((QAbstractMessageHandler *)((QXmlSchemaValidator *)cls)->messageHandler ());
}


// QXmlNamePool QXmlSchemaValidator::namePool()


static void _init_f_namePool_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QXmlNamePool > ();
}

static void _call_f_namePool_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlNamePool > ((QXmlNamePool)((QXmlSchemaValidator *)cls)->namePool ());
}


// QNetworkAccessManager *QXmlSchemaValidator::networkAccessManager()


static void _init_f_networkAccessManager_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkAccessManager * > ();
}

static void _call_f_networkAccessManager_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkAccessManager * > ((QNetworkAccessManager *)((QXmlSchemaValidator *)cls)->networkAccessManager ());
}


// QXmlSchema QXmlSchemaValidator::schema()


static void _init_f_schema_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QXmlSchema > ();
}

static void _call_f_schema_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlSchema > ((QXmlSchema)((QXmlSchemaValidator *)cls)->schema ());
}


// void QXmlSchemaValidator::setMessageHandler(QAbstractMessageHandler *handler)


static void _init_f_setMessageHandler_2934 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("handler");
  decl->add_arg<QAbstractMessageHandler * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMessageHandler_2934 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAbstractMessageHandler *arg1 = gsi::arg_reader<QAbstractMessageHandler * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSchemaValidator *)cls)->setMessageHandler (arg1);
}


// void QXmlSchemaValidator::setNetworkAccessManager(QNetworkAccessManager *networkmanager)


static void _init_f_setNetworkAccessManager_2742 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("networkmanager");
  decl->add_arg<QNetworkAccessManager * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNetworkAccessManager_2742 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkAccessManager *arg1 = gsi::arg_reader<QNetworkAccessManager * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSchemaValidator *)cls)->setNetworkAccessManager (arg1);
}


// void QXmlSchemaValidator::setSchema(const QXmlSchema &schema)


static void _init_f_setSchema_2292 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("schema");
  decl->add_arg<const QXmlSchema & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSchema_2292 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlSchema &arg1 = gsi::arg_reader<const QXmlSchema & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSchemaValidator *)cls)->setSchema (arg1);
}


// void QXmlSchemaValidator::setUriResolver(const QAbstractUriResolver *resolver)


static void _init_f_setUriResolver_3372 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("resolver");
  decl->add_arg<const QAbstractUriResolver * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUriResolver_3372 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAbstractUriResolver *arg1 = gsi::arg_reader<const QAbstractUriResolver * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSchemaValidator *)cls)->setUriResolver (arg1);
}


// const QAbstractUriResolver *QXmlSchemaValidator::uriResolver()


static void _init_f_uriResolver_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QAbstractUriResolver * > ();
}

static void _call_f_uriResolver_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QAbstractUriResolver * > ((const QAbstractUriResolver *)((QXmlSchemaValidator *)cls)->uriResolver ());
}


// bool QXmlSchemaValidator::validate(const QUrl &source)


static void _init_f_validate_c1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_validate_c1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = gsi::arg_reader<const QUrl & >() (args, heap);
  ret.write<bool > ((bool)((QXmlSchemaValidator *)cls)->validate (arg1));
}


// bool QXmlSchemaValidator::validate(QIODevice *source, const QUrl &documentUri)


static void _init_f_validate_c3040 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("source");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("documentUri", true, "QUrl()");
  decl->add_arg<const QUrl & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_validate_c3040 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const QUrl &arg2 = args ? gsi::arg_reader<const QUrl & >() (args, heap) : gsi::arg_maker<const QUrl & >() (QUrl(), heap);
  ret.write<bool > ((bool)((QXmlSchemaValidator *)cls)->validate (arg1, arg2));
}


// bool QXmlSchemaValidator::validate(const QByteArray &data, const QUrl &documentUri)


static void _init_f_validate_c3902 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("documentUri", true, "QUrl()");
  decl->add_arg<const QUrl & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_validate_c3902 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const QUrl &arg2 = args ? gsi::arg_reader<const QUrl & >() (args, heap) : gsi::arg_maker<const QUrl & >() (QUrl(), heap);
  ret.write<bool > ((bool)((QXmlSchemaValidator *)cls)->validate (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QXmlSchemaValidator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlSchemaValidator::QXmlSchemaValidator()\nThis method creates an object of class QXmlSchemaValidator.", &_init_ctor_QXmlSchemaValidator_0, &_call_ctor_QXmlSchemaValidator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlSchemaValidator::QXmlSchemaValidator(const QXmlSchema &schema)\nThis method creates an object of class QXmlSchemaValidator.", &_init_ctor_QXmlSchemaValidator_2292, &_call_ctor_QXmlSchemaValidator_2292);
  methods += new qt_gsi::GenericMethod (":messageHandler", "@brief Method QAbstractMessageHandler *QXmlSchemaValidator::messageHandler()\n", true, &_init_f_messageHandler_c0, &_call_f_messageHandler_c0);
  methods += new qt_gsi::GenericMethod ("namePool", "@brief Method QXmlNamePool QXmlSchemaValidator::namePool()\n", true, &_init_f_namePool_c0, &_call_f_namePool_c0);
  methods += new qt_gsi::GenericMethod (":networkAccessManager", "@brief Method QNetworkAccessManager *QXmlSchemaValidator::networkAccessManager()\n", true, &_init_f_networkAccessManager_c0, &_call_f_networkAccessManager_c0);
  methods += new qt_gsi::GenericMethod (":schema", "@brief Method QXmlSchema QXmlSchemaValidator::schema()\n", true, &_init_f_schema_c0, &_call_f_schema_c0);
  methods += new qt_gsi::GenericMethod ("setMessageHandler|messageHandler=", "@brief Method void QXmlSchemaValidator::setMessageHandler(QAbstractMessageHandler *handler)\n", false, &_init_f_setMessageHandler_2934, &_call_f_setMessageHandler_2934);
  methods += new qt_gsi::GenericMethod ("setNetworkAccessManager|networkAccessManager=", "@brief Method void QXmlSchemaValidator::setNetworkAccessManager(QNetworkAccessManager *networkmanager)\n", false, &_init_f_setNetworkAccessManager_2742, &_call_f_setNetworkAccessManager_2742);
  methods += new qt_gsi::GenericMethod ("setSchema|schema=", "@brief Method void QXmlSchemaValidator::setSchema(const QXmlSchema &schema)\n", false, &_init_f_setSchema_2292, &_call_f_setSchema_2292);
  methods += new qt_gsi::GenericMethod ("setUriResolver|uriResolver=", "@brief Method void QXmlSchemaValidator::setUriResolver(const QAbstractUriResolver *resolver)\n", false, &_init_f_setUriResolver_3372, &_call_f_setUriResolver_3372);
  methods += new qt_gsi::GenericMethod (":uriResolver", "@brief Method const QAbstractUriResolver *QXmlSchemaValidator::uriResolver()\n", true, &_init_f_uriResolver_c0, &_call_f_uriResolver_c0);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Method bool QXmlSchemaValidator::validate(const QUrl &source)\n", true, &_init_f_validate_c1701, &_call_f_validate_c1701);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Method bool QXmlSchemaValidator::validate(QIODevice *source, const QUrl &documentUri)\n", true, &_init_f_validate_c3040, &_call_f_validate_c3040);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Method bool QXmlSchemaValidator::validate(const QByteArray &data, const QUrl &documentUri)\n", true, &_init_f_validate_c3902, &_call_f_validate_c3902);
  return methods;
}

gsi::Class<QXmlSchemaValidator> decl_QXmlSchemaValidator ("QtXmlPatterns", "QXmlSchemaValidator",
  methods_QXmlSchemaValidator (),
  "@qt\n@brief Binding of QXmlSchemaValidator");


GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlSchemaValidator> &qtdecl_QXmlSchemaValidator () { return decl_QXmlSchemaValidator; }

}


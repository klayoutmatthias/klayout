
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
*  @file gsiDeclQNetworkProxyFactory.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkProxyFactory>
#include <QNetworkProxy>
#include <QNetworkProxyQuery>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkProxyFactory

// QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery &query)


static void _init_f_queryProxy_3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query", true, "QNetworkProxyQuery()");
  decl->add_arg<const QNetworkProxyQuery & > (argspec_0);
  decl->set_return<QList<QNetworkProxy> > ();
}

static void _call_f_queryProxy_3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxyQuery &arg1 = args ? gsi::arg_reader<const QNetworkProxyQuery & >() (args, heap) : gsi::arg_maker<const QNetworkProxyQuery & >() (QNetworkProxyQuery(), heap);
  ret.write<QList<QNetworkProxy> > ((QList<QNetworkProxy>)((QNetworkProxyFactory *)cls)->queryProxy (arg1));
}


// static QList<QNetworkProxy> QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery &query)


static void _init_f_proxyForQuery_3220 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QNetworkProxyQuery & > (argspec_0);
  decl->set_return<QList<QNetworkProxy> > ();
}

static void _call_f_proxyForQuery_3220 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxyQuery &arg1 = gsi::arg_reader<const QNetworkProxyQuery & >() (args, heap);
  ret.write<QList<QNetworkProxy> > ((QList<QNetworkProxy>)QNetworkProxyFactory::proxyForQuery (arg1));
}


// static void QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory *factory)


static void _init_f_setApplicationProxyFactory_2723 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factory");
  decl->add_arg<QNetworkProxyFactory * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setApplicationProxyFactory_2723 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkProxyFactory *arg1 = gsi::arg_reader<QNetworkProxyFactory * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QNetworkProxyFactory::setApplicationProxyFactory (arg1);
}


// static void QNetworkProxyFactory::setUseSystemConfiguration(bool enable)


static void _init_f_setUseSystemConfiguration_864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("enable");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setUseSystemConfiguration_864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QNetworkProxyFactory::setUseSystemConfiguration (arg1);
}


// static QList<QNetworkProxy> QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery &query)


static void _init_f_systemProxyForQuery_3220 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query", true, "QNetworkProxyQuery()");
  decl->add_arg<const QNetworkProxyQuery & > (argspec_0);
  decl->set_return<QList<QNetworkProxy> > ();
}

static void _call_f_systemProxyForQuery_3220 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxyQuery &arg1 = args ? gsi::arg_reader<const QNetworkProxyQuery & >() (args, heap) : gsi::arg_maker<const QNetworkProxyQuery & >() (QNetworkProxyQuery(), heap);
  ret.write<QList<QNetworkProxy> > ((QList<QNetworkProxy>)QNetworkProxyFactory::systemProxyForQuery (arg1));
}


namespace gsi
{

static gsi::Methods methods_QNetworkProxyFactory () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("queryProxy", "@brief Method QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery &query)\n", false, &_init_f_queryProxy_3220, &_call_f_queryProxy_3220);
  methods += new qt_gsi::GenericStaticMethod ("proxyForQuery", "@brief Static method QList<QNetworkProxy> QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery &query)\nThis method is static and can be called without an instance.", &_init_f_proxyForQuery_3220, &_call_f_proxyForQuery_3220);
  methods += new qt_gsi::GenericStaticMethod ("setApplicationProxyFactory", "@brief Static method void QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory *factory)\nThis method is static and can be called without an instance.", &_init_f_setApplicationProxyFactory_2723, &_call_f_setApplicationProxyFactory_2723);
  methods += new qt_gsi::GenericStaticMethod ("setUseSystemConfiguration", "@brief Static method void QNetworkProxyFactory::setUseSystemConfiguration(bool enable)\nThis method is static and can be called without an instance.", &_init_f_setUseSystemConfiguration_864, &_call_f_setUseSystemConfiguration_864);
  methods += new qt_gsi::GenericStaticMethod ("systemProxyForQuery", "@brief Static method QList<QNetworkProxy> QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery &query)\nThis method is static and can be called without an instance.", &_init_f_systemProxyForQuery_3220, &_call_f_systemProxyForQuery_3220);
  return methods;
}

gsi::Class<QNetworkProxyFactory> decl_QNetworkProxyFactory ("QtNetwork", "QNetworkProxyFactory_Native",
  methods_QNetworkProxyFactory (),
  "@hide\n@alias QNetworkProxyFactory");

GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkProxyFactory> &qtdecl_QNetworkProxyFactory () { return decl_QNetworkProxyFactory; }

}


class QNetworkProxyFactory_Adaptor : public QNetworkProxyFactory, public qt_gsi::QtObjectBase
{
public:

  virtual ~QNetworkProxyFactory_Adaptor();

  //  [adaptor ctor] QNetworkProxyFactory::QNetworkProxyFactory()
  QNetworkProxyFactory_Adaptor() : QNetworkProxyFactory()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery &query)
  QList<QNetworkProxy> cbs_queryProxy_3220_1(const QNetworkProxyQuery &query)
  {
    __SUPPRESS_UNUSED_WARNING (query);
    throw qt_gsi::AbstractMethodCalledException("queryProxy");
  }

  virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery &query)
  {
    if (cb_queryProxy_3220_1.can_issue()) {
      return cb_queryProxy_3220_1.issue<QNetworkProxyFactory_Adaptor, QList<QNetworkProxy>, const QNetworkProxyQuery &>(&QNetworkProxyFactory_Adaptor::cbs_queryProxy_3220_1, query);
    } else {
      throw qt_gsi::AbstractMethodCalledException("queryProxy");
    }
  }

  gsi::Callback cb_queryProxy_3220_1;
};

QNetworkProxyFactory_Adaptor::~QNetworkProxyFactory_Adaptor() { }

//  Constructor QNetworkProxyFactory::QNetworkProxyFactory() (adaptor class)

static void _init_ctor_QNetworkProxyFactory_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNetworkProxyFactory_Adaptor> ();
}

static void _call_ctor_QNetworkProxyFactory_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkProxyFactory_Adaptor *> (new QNetworkProxyFactory_Adaptor ());
}


// QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery &query)

static void _init_cbs_queryProxy_3220_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QNetworkProxyQuery & > (argspec_0);
  decl->set_return<QList<QNetworkProxy> > ();
}

static void _call_cbs_queryProxy_3220_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkProxyQuery &arg1 = args.read<const QNetworkProxyQuery & > (heap);
  ret.write<QList<QNetworkProxy> > ((QList<QNetworkProxy>)((QNetworkProxyFactory_Adaptor *)cls)->cbs_queryProxy_3220_1 (arg1));
}

static void _set_callback_cbs_queryProxy_3220_1 (void *cls, const gsi::Callback &cb)
{
  ((QNetworkProxyFactory_Adaptor *)cls)->cb_queryProxy_3220_1 = cb;
}


namespace gsi
{

gsi::Class<QNetworkProxyFactory> &qtdecl_QNetworkProxyFactory ();

static gsi::Methods methods_QNetworkProxyFactory_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkProxyFactory::QNetworkProxyFactory()\nThis method creates an object of class QNetworkProxyFactory.", &_init_ctor_QNetworkProxyFactory_Adaptor_0, &_call_ctor_QNetworkProxyFactory_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("queryProxy", "@hide", false, &_init_cbs_queryProxy_3220_1, &_call_cbs_queryProxy_3220_1);
  methods += new qt_gsi::GenericMethod ("queryProxy", "@brief Virtual method QList<QNetworkProxy> QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery &query)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_queryProxy_3220_1, &_call_cbs_queryProxy_3220_1, &_set_callback_cbs_queryProxy_3220_1);
  return methods;
}

gsi::Class<QNetworkProxyFactory_Adaptor> decl_QNetworkProxyFactory_Adaptor (qtdecl_QNetworkProxyFactory (), "QtNetwork", "QNetworkProxyFactory",
  methods_QNetworkProxyFactory_Adaptor (),
  "@qt\n@brief Binding of QNetworkProxyFactory");

}


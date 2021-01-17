
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
*  @file gsiDeclQMediaServiceProviderFactoryInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceProviderFactoryInterface>
#include <QMediaService>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMediaServiceProviderFactoryInterface

// QMediaService *QMediaServiceProviderFactoryInterface::create(QString const &key)


static void _init_f_create_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<QString const & > (argspec_0);
  decl->set_return<QMediaService * > ();
}

static void _call_f_create_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString const &arg1 = gsi::arg_reader<QString const & >() (args, heap);
  ret.write<QMediaService * > ((QMediaService *)((QMediaServiceProviderFactoryInterface *)cls)->create (arg1));
}


// void QMediaServiceProviderFactoryInterface::release(QMediaService *service)


static void _init_f_release_1904 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<QMediaService * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_release_1904 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaService *arg1 = gsi::arg_reader<QMediaService * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderFactoryInterface *)cls)->release (arg1);
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceProviderFactoryInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method QMediaService *QMediaServiceProviderFactoryInterface::create(QString const &key)\n", false, &_init_f_create_2025, &_call_f_create_2025);
  methods += new qt_gsi::GenericMethod ("release", "@brief Method void QMediaServiceProviderFactoryInterface::release(QMediaService *service)\n", false, &_init_f_release_1904, &_call_f_release_1904);
  return methods;
}

gsi::Class<QMediaServiceProviderFactoryInterface> decl_QMediaServiceProviderFactoryInterface ("QtMultimedia", "QMediaServiceProviderFactoryInterface_Native",
  methods_QMediaServiceProviderFactoryInterface (),
  "@hide\n@alias QMediaServiceProviderFactoryInterface");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaServiceProviderFactoryInterface> &qtdecl_QMediaServiceProviderFactoryInterface () { return decl_QMediaServiceProviderFactoryInterface; }

}


class QMediaServiceProviderFactoryInterface_Adaptor : public QMediaServiceProviderFactoryInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceProviderFactoryInterface_Adaptor();

  //  [adaptor ctor] QMediaServiceProviderFactoryInterface::QMediaServiceProviderFactoryInterface()
  QMediaServiceProviderFactoryInterface_Adaptor() : QMediaServiceProviderFactoryInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QMediaService *QMediaServiceProviderFactoryInterface::create(QString const &key)
  QMediaService * cbs_create_2025_0(QString const &key)
  {
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("create");
  }

  virtual QMediaService * create(QString const &key)
  {
    if (cb_create_2025_0.can_issue()) {
      return cb_create_2025_0.issue<QMediaServiceProviderFactoryInterface_Adaptor, QMediaService *, QString const &>(&QMediaServiceProviderFactoryInterface_Adaptor::cbs_create_2025_0, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("create");
    }
  }

  //  [adaptor impl] void QMediaServiceProviderFactoryInterface::release(QMediaService *service)
  void cbs_release_1904_0(QMediaService *service)
  {
    __SUPPRESS_UNUSED_WARNING (service);
    throw qt_gsi::AbstractMethodCalledException("release");
  }

  virtual void release(QMediaService *service)
  {
    if (cb_release_1904_0.can_issue()) {
      cb_release_1904_0.issue<QMediaServiceProviderFactoryInterface_Adaptor, QMediaService *>(&QMediaServiceProviderFactoryInterface_Adaptor::cbs_release_1904_0, service);
    } else {
      throw qt_gsi::AbstractMethodCalledException("release");
    }
  }

  gsi::Callback cb_create_2025_0;
  gsi::Callback cb_release_1904_0;
};

QMediaServiceProviderFactoryInterface_Adaptor::~QMediaServiceProviderFactoryInterface_Adaptor() { }

//  Constructor QMediaServiceProviderFactoryInterface::QMediaServiceProviderFactoryInterface() (adaptor class)

static void _init_ctor_QMediaServiceProviderFactoryInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceProviderFactoryInterface_Adaptor> ();
}

static void _call_ctor_QMediaServiceProviderFactoryInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceProviderFactoryInterface_Adaptor *> (new QMediaServiceProviderFactoryInterface_Adaptor ());
}


// QMediaService *QMediaServiceProviderFactoryInterface::create(QString const &key)

static void _init_cbs_create_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<QString const & > (argspec_0);
  decl->set_return<QMediaService * > ();
}

static void _call_cbs_create_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString const &arg1 = args.read<QString const & > (heap);
  ret.write<QMediaService * > ((QMediaService *)((QMediaServiceProviderFactoryInterface_Adaptor *)cls)->cbs_create_2025_0 (arg1));
}

static void _set_callback_cbs_create_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderFactoryInterface_Adaptor *)cls)->cb_create_2025_0 = cb;
}


// void QMediaServiceProviderFactoryInterface::release(QMediaService *service)

static void _init_cbs_release_1904_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<QMediaService * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_release_1904_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaService *arg1 = args.read<QMediaService * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaServiceProviderFactoryInterface_Adaptor *)cls)->cbs_release_1904_0 (arg1);
}

static void _set_callback_cbs_release_1904_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceProviderFactoryInterface_Adaptor *)cls)->cb_release_1904_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceProviderFactoryInterface> &qtdecl_QMediaServiceProviderFactoryInterface ();

static gsi::Methods methods_QMediaServiceProviderFactoryInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceProviderFactoryInterface::QMediaServiceProviderFactoryInterface()\nThis method creates an object of class QMediaServiceProviderFactoryInterface.", &_init_ctor_QMediaServiceProviderFactoryInterface_Adaptor_0, &_call_ctor_QMediaServiceProviderFactoryInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Virtual method QMediaService *QMediaServiceProviderFactoryInterface::create(QString const &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_create_2025_0, &_call_cbs_create_2025_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@hide", false, &_init_cbs_create_2025_0, &_call_cbs_create_2025_0, &_set_callback_cbs_create_2025_0);
  methods += new qt_gsi::GenericMethod ("release", "@brief Virtual method void QMediaServiceProviderFactoryInterface::release(QMediaService *service)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_release_1904_0, &_call_cbs_release_1904_0);
  methods += new qt_gsi::GenericMethod ("release", "@hide", false, &_init_cbs_release_1904_0, &_call_cbs_release_1904_0, &_set_callback_cbs_release_1904_0);
  return methods;
}

gsi::Class<QMediaServiceProviderFactoryInterface_Adaptor> decl_QMediaServiceProviderFactoryInterface_Adaptor (qtdecl_QMediaServiceProviderFactoryInterface (), "QtMultimedia", "QMediaServiceProviderFactoryInterface",
  methods_QMediaServiceProviderFactoryInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceProviderFactoryInterface");

}


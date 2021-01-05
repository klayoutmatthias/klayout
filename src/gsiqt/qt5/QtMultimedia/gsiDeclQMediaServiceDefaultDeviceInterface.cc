
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
*  @file gsiDeclQMediaServiceDefaultDeviceInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaServiceDefaultDeviceInterface>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMediaServiceDefaultDeviceInterface

// QByteArray QMediaServiceDefaultDeviceInterface::defaultDevice(const QByteArray &service)


static void _init_f_defaultDevice_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_defaultDevice_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)((QMediaServiceDefaultDeviceInterface *)cls)->defaultDevice (arg1));
}


namespace gsi
{

static gsi::Methods methods_QMediaServiceDefaultDeviceInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("defaultDevice", "@brief Method QByteArray QMediaServiceDefaultDeviceInterface::defaultDevice(const QByteArray &service)\n", true, &_init_f_defaultDevice_c2309, &_call_f_defaultDevice_c2309);
  return methods;
}

gsi::Class<QMediaServiceDefaultDeviceInterface> decl_QMediaServiceDefaultDeviceInterface ("QtMultimedia", "QMediaServiceDefaultDeviceInterface_Native",
  methods_QMediaServiceDefaultDeviceInterface (),
  "@hide\n@alias QMediaServiceDefaultDeviceInterface");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaServiceDefaultDeviceInterface> &qtdecl_QMediaServiceDefaultDeviceInterface () { return decl_QMediaServiceDefaultDeviceInterface; }

}


class QMediaServiceDefaultDeviceInterface_Adaptor : public QMediaServiceDefaultDeviceInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaServiceDefaultDeviceInterface_Adaptor();

  //  [adaptor ctor] QMediaServiceDefaultDeviceInterface::QMediaServiceDefaultDeviceInterface()
  QMediaServiceDefaultDeviceInterface_Adaptor() : QMediaServiceDefaultDeviceInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QByteArray QMediaServiceDefaultDeviceInterface::defaultDevice(const QByteArray &service)
  QByteArray cbs_defaultDevice_c2309_0(const QByteArray &service) const
  {
    __SUPPRESS_UNUSED_WARNING (service);
    throw qt_gsi::AbstractMethodCalledException("defaultDevice");
  }

  virtual QByteArray defaultDevice(const QByteArray &service) const
  {
    if (cb_defaultDevice_c2309_0.can_issue()) {
      return cb_defaultDevice_c2309_0.issue<QMediaServiceDefaultDeviceInterface_Adaptor, QByteArray, const QByteArray &>(&QMediaServiceDefaultDeviceInterface_Adaptor::cbs_defaultDevice_c2309_0, service);
    } else {
      throw qt_gsi::AbstractMethodCalledException("defaultDevice");
    }
  }

  gsi::Callback cb_defaultDevice_c2309_0;
};

QMediaServiceDefaultDeviceInterface_Adaptor::~QMediaServiceDefaultDeviceInterface_Adaptor() { }

//  Constructor QMediaServiceDefaultDeviceInterface::QMediaServiceDefaultDeviceInterface() (adaptor class)

static void _init_ctor_QMediaServiceDefaultDeviceInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaServiceDefaultDeviceInterface_Adaptor> ();
}

static void _call_ctor_QMediaServiceDefaultDeviceInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaServiceDefaultDeviceInterface_Adaptor *> (new QMediaServiceDefaultDeviceInterface_Adaptor ());
}


// QByteArray QMediaServiceDefaultDeviceInterface::defaultDevice(const QByteArray &service)

static void _init_cbs_defaultDevice_c2309_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("service");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_cbs_defaultDevice_c2309_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QByteArray > ((QByteArray)((QMediaServiceDefaultDeviceInterface_Adaptor *)cls)->cbs_defaultDevice_c2309_0 (arg1));
}

static void _set_callback_cbs_defaultDevice_c2309_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaServiceDefaultDeviceInterface_Adaptor *)cls)->cb_defaultDevice_c2309_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaServiceDefaultDeviceInterface> &qtdecl_QMediaServiceDefaultDeviceInterface ();

static gsi::Methods methods_QMediaServiceDefaultDeviceInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaServiceDefaultDeviceInterface::QMediaServiceDefaultDeviceInterface()\nThis method creates an object of class QMediaServiceDefaultDeviceInterface.", &_init_ctor_QMediaServiceDefaultDeviceInterface_Adaptor_0, &_call_ctor_QMediaServiceDefaultDeviceInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("defaultDevice", "@brief Virtual method QByteArray QMediaServiceDefaultDeviceInterface::defaultDevice(const QByteArray &service)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_defaultDevice_c2309_0, &_call_cbs_defaultDevice_c2309_0);
  methods += new qt_gsi::GenericMethod ("defaultDevice", "@hide", true, &_init_cbs_defaultDevice_c2309_0, &_call_cbs_defaultDevice_c2309_0, &_set_callback_cbs_defaultDevice_c2309_0);
  return methods;
}

gsi::Class<QMediaServiceDefaultDeviceInterface_Adaptor> decl_QMediaServiceDefaultDeviceInterface_Adaptor (qtdecl_QMediaServiceDefaultDeviceInterface (), "QtMultimedia", "QMediaServiceDefaultDeviceInterface",
  methods_QMediaServiceDefaultDeviceInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaServiceDefaultDeviceInterface");

}



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
*  @file gsiDeclQTouchDevice.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTouchDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTouchDevice

//  Constructor QTouchDevice::QTouchDevice()


static void _init_ctor_QTouchDevice_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTouchDevice> ();
}

static void _call_ctor_QTouchDevice_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTouchDevice *> (new QTouchDevice ());
}


// QFlags<QTouchDevice::CapabilityFlag> QTouchDevice::capabilities()


static void _init_f_capabilities_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QTouchDevice::CapabilityFlag> > ();
}

static void _call_f_capabilities_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QTouchDevice::CapabilityFlag> > ((QFlags<QTouchDevice::CapabilityFlag>)((QTouchDevice *)cls)->capabilities ());
}


// int QTouchDevice::maximumTouchPoints()


static void _init_f_maximumTouchPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_maximumTouchPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTouchDevice *)cls)->maximumTouchPoints ());
}


// QString QTouchDevice::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTouchDevice *)cls)->name ());
}


// void QTouchDevice::setCapabilities(QFlags<QTouchDevice::CapabilityFlag> caps)


static void _init_f_setCapabilities_3840 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("caps");
  decl->add_arg<QFlags<QTouchDevice::CapabilityFlag> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCapabilities_3840 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTouchDevice::CapabilityFlag> arg1 = gsi::arg_reader<QFlags<QTouchDevice::CapabilityFlag> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchDevice *)cls)->setCapabilities (arg1);
}


// void QTouchDevice::setMaximumTouchPoints(int max)


static void _init_f_setMaximumTouchPoints_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("max");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMaximumTouchPoints_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchDevice *)cls)->setMaximumTouchPoints (arg1);
}


// void QTouchDevice::setName(const QString &name)


static void _init_f_setName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchDevice *)cls)->setName (arg1);
}


// void QTouchDevice::setType(QTouchDevice::DeviceType devType)


static void _init_f_setType_2750 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("devType");
  decl->add_arg<const qt_gsi::Converter<QTouchDevice::DeviceType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setType_2750 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTouchDevice::DeviceType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTouchDevice::DeviceType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTouchDevice *)cls)->setType (qt_gsi::QtToCppAdaptor<QTouchDevice::DeviceType>(arg1).cref());
}


// QTouchDevice::DeviceType QTouchDevice::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QTouchDevice::DeviceType>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QTouchDevice::DeviceType>::target_type > ((qt_gsi::Converter<QTouchDevice::DeviceType>::target_type)qt_gsi::CppToQtAdaptor<QTouchDevice::DeviceType>(((QTouchDevice *)cls)->type ()));
}


// static QList<const QTouchDevice *> QTouchDevice::devices()


static void _init_f_devices_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<const QTouchDevice *> > ();
}

static void _call_f_devices_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<const QTouchDevice *> > ((QList<const QTouchDevice *>)QTouchDevice::devices ());
}



namespace gsi
{

static gsi::Methods methods_QTouchDevice () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTouchDevice::QTouchDevice()\nThis method creates an object of class QTouchDevice.", &_init_ctor_QTouchDevice_0, &_call_ctor_QTouchDevice_0);
  methods += new qt_gsi::GenericMethod (":capabilities", "@brief Method QFlags<QTouchDevice::CapabilityFlag> QTouchDevice::capabilities()\n", true, &_init_f_capabilities_c0, &_call_f_capabilities_c0);
  methods += new qt_gsi::GenericMethod (":maximumTouchPoints", "@brief Method int QTouchDevice::maximumTouchPoints()\n", true, &_init_f_maximumTouchPoints_c0, &_call_f_maximumTouchPoints_c0);
  methods += new qt_gsi::GenericMethod (":name", "@brief Method QString QTouchDevice::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("setCapabilities|capabilities=", "@brief Method void QTouchDevice::setCapabilities(QFlags<QTouchDevice::CapabilityFlag> caps)\n", false, &_init_f_setCapabilities_3840, &_call_f_setCapabilities_3840);
  methods += new qt_gsi::GenericMethod ("setMaximumTouchPoints|maximumTouchPoints=", "@brief Method void QTouchDevice::setMaximumTouchPoints(int max)\n", false, &_init_f_setMaximumTouchPoints_767, &_call_f_setMaximumTouchPoints_767);
  methods += new qt_gsi::GenericMethod ("setName|name=", "@brief Method void QTouchDevice::setName(const QString &name)\n", false, &_init_f_setName_2025, &_call_f_setName_2025);
  methods += new qt_gsi::GenericMethod ("setType|type=", "@brief Method void QTouchDevice::setType(QTouchDevice::DeviceType devType)\n", false, &_init_f_setType_2750, &_call_f_setType_2750);
  methods += new qt_gsi::GenericMethod (":type", "@brief Method QTouchDevice::DeviceType QTouchDevice::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericStaticMethod ("devices", "@brief Static method QList<const QTouchDevice *> QTouchDevice::devices()\nThis method is static and can be called without an instance.", &_init_f_devices_0, &_call_f_devices_0);
  return methods;
}

gsi::Class<QTouchDevice> decl_QTouchDevice ("QtGui", "QTouchDevice",
  methods_QTouchDevice (),
  "@qt\n@brief Binding of QTouchDevice");


GSI_QTGUI_PUBLIC gsi::Class<QTouchDevice> &qtdecl_QTouchDevice () { return decl_QTouchDevice; }

}


//  Implementation of the enum wrapper class for QTouchDevice::CapabilityFlag
namespace qt_gsi
{

static gsi::Enum<QTouchDevice::CapabilityFlag> decl_QTouchDevice_CapabilityFlag_Enum ("QtGui", "QTouchDevice_CapabilityFlag",
    gsi::enum_const ("Position", QTouchDevice::Position, "@brief Enum constant QTouchDevice::Position") +
    gsi::enum_const ("Area", QTouchDevice::Area, "@brief Enum constant QTouchDevice::Area") +
    gsi::enum_const ("Pressure", QTouchDevice::Pressure, "@brief Enum constant QTouchDevice::Pressure") +
    gsi::enum_const ("Velocity", QTouchDevice::Velocity, "@brief Enum constant QTouchDevice::Velocity") +
    gsi::enum_const ("RawPositions", QTouchDevice::RawPositions, "@brief Enum constant QTouchDevice::RawPositions") +
    gsi::enum_const ("NormalizedPosition", QTouchDevice::NormalizedPosition, "@brief Enum constant QTouchDevice::NormalizedPosition") +
    gsi::enum_const ("MouseEmulation", QTouchDevice::MouseEmulation, "@brief Enum constant QTouchDevice::MouseEmulation"),
  "@qt\n@brief This class represents the QTouchDevice::CapabilityFlag enum");

static gsi::QFlagsClass<QTouchDevice::CapabilityFlag > decl_QTouchDevice_CapabilityFlag_Enums ("QtGui", "QTouchDevice_QFlags_CapabilityFlag",
  "@qt\n@brief This class represents the QFlags<QTouchDevice::CapabilityFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTouchDevice> inject_QTouchDevice_CapabilityFlag_Enum_in_parent (decl_QTouchDevice_CapabilityFlag_Enum.defs ());
static gsi::ClassExt<QTouchDevice> decl_QTouchDevice_CapabilityFlag_Enum_as_child (decl_QTouchDevice_CapabilityFlag_Enum, "CapabilityFlag");
static gsi::ClassExt<QTouchDevice> decl_QTouchDevice_CapabilityFlag_Enums_as_child (decl_QTouchDevice_CapabilityFlag_Enums, "QFlags_CapabilityFlag");

}


//  Implementation of the enum wrapper class for QTouchDevice::DeviceType
namespace qt_gsi
{

static gsi::Enum<QTouchDevice::DeviceType> decl_QTouchDevice_DeviceType_Enum ("QtGui", "QTouchDevice_DeviceType",
    gsi::enum_const ("TouchScreen", QTouchDevice::TouchScreen, "@brief Enum constant QTouchDevice::TouchScreen") +
    gsi::enum_const ("TouchPad", QTouchDevice::TouchPad, "@brief Enum constant QTouchDevice::TouchPad"),
  "@qt\n@brief This class represents the QTouchDevice::DeviceType enum");

static gsi::QFlagsClass<QTouchDevice::DeviceType > decl_QTouchDevice_DeviceType_Enums ("QtGui", "QTouchDevice_QFlags_DeviceType",
  "@qt\n@brief This class represents the QFlags<QTouchDevice::DeviceType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTouchDevice> inject_QTouchDevice_DeviceType_Enum_in_parent (decl_QTouchDevice_DeviceType_Enum.defs ());
static gsi::ClassExt<QTouchDevice> decl_QTouchDevice_DeviceType_Enum_as_child (decl_QTouchDevice_DeviceType_Enum, "DeviceType");
static gsi::ClassExt<QTouchDevice> decl_QTouchDevice_DeviceType_Enums_as_child (decl_QTouchDevice_DeviceType_Enums, "QFlags_DeviceType");

}


// Generated by gmmproc 2.48.1 -- DO NOT MODIFY!
#ifndef _GIOMM_EMBLEM_H
#define _GIOMM_EMBLEM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/object.h>
#include <giomm/icon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GEmblem = struct _GEmblem;
using GEmblemClass = struct _GEmblemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class Emblem_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var EmblemOrigin EMBLEM_ORIGIN_UNKNOWN
 * Emblem of unknown origin.
 * 
 *  @var EmblemOrigin EMBLEM_ORIGIN_DEVICE
 * Emblem adds device-specific information.
 * 
 *  @var EmblemOrigin EMBLEM_ORIGIN_LIVEMETADATA
 * Emblem depicts live metadata, such as "readonly".
 * 
 *  @var EmblemOrigin EMBLEM_ORIGIN_TAG
 * Emblem comes from a user-defined tag, e.g. set by nautilus (in the future).
 * 
 *  @enum EmblemOrigin
 * 
 * GEmblemOrigin is used to add information about the origin of the emblem
 * to Emblem.
 * 
 * @newin{2,18}
 *
 * @ingroup giommEnums
 */
enum EmblemOrigin
{
  EMBLEM_ORIGIN_UNKNOWN,
  EMBLEM_ORIGIN_DEVICE,
  EMBLEM_ORIGIN_LIVEMETADATA,
  EMBLEM_ORIGIN_TAG
};


/** An object for emblems
 *
 * Emblem is an implementation of GIcon that supports having an emblem, which
 * is an icon with additional properties. It can than be added to a
 * EmblemedIcon.
 *
 * Currently, only metainformation about the emblem's origin is supported. More
 * may be added in the future.
 *
 * @newin{2,20}
 */

class Emblem
: public Glib::Object,
  public Icon
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Emblem;
  using CppClassType = Emblem_Class;
  using BaseObjectType = GEmblem;
  using BaseClassType = GEmblemClass;

  // noncopyable
  Emblem(const Emblem&) = delete;
  Emblem& operator=(const Emblem&) = delete;

private:  friend class Emblem_Class;
  static CppClassType emblem_class_;

protected:
  explicit Emblem(const Glib::ConstructParams& construct_params);
  explicit Emblem(GEmblem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Emblem(Emblem&& src) noexcept;
  Emblem& operator=(Emblem&& src) noexcept;

  ~Emblem() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GEmblem*       gobj()       { return reinterpret_cast<GEmblem*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GEmblem* gobj() const { return reinterpret_cast<GEmblem*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GEmblem* gobj_copy();

private:

  
protected:
  /** Creates a new emblem for @a icon.
   * @param icon A Gio::Icon containing the icon.
   */
   explicit Emblem(const Glib::RefPtr<Icon>& icon);


  /** Creates a new emblem for @a icon.
   * @param icon A Gio::Icon containing the icon.
   * @param origin An EmblemOrigin value defining the emblem's origin
   */
   explicit Emblem(const Glib::RefPtr<Icon>& icon, EmblemOrigin origin);


public:
  /** Creates a new emblem for @a icon.
   * @param icon A Gio::Icon containing the icon.
   */
  
  static Glib::RefPtr<Emblem> create(const Glib::RefPtr<Icon>& icon);


  /** Creates a new emblem for @a icon.
   * @param icon A Gio::Icon containing the icon.
   * @param origin An EmblemOrigin value defining the emblem's origin
   */
  
  static Glib::RefPtr<Emblem> create(const Glib::RefPtr<Icon>& icon, EmblemOrigin origin);


  /** Gives back the icon from @a emblem.
   * 
   * @newin{2,18}
   * 
   * @return A Icon. The returned object belongs to
   * the emblem and should not be modified or freed.
   */
  Glib::RefPtr<Icon> get_icon();
  
  /** Gives back the icon from @a emblem.
   * 
   * @newin{2,18}
   * 
   * @return A Icon. The returned object belongs to
   * the emblem and should not be modified or freed.
   */
  Glib::RefPtr<const Icon> get_icon() const;
  
  /** Gets the origin of the emblem.
   * 
   * @newin{2,18}
   * 
   * @return The origin of the emblem.
   */
  EmblemOrigin get_origin() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::Emblem
   */
  Glib::RefPtr<Gio::Emblem> wrap(GEmblem* object, bool take_copy = false);
}


#endif /* _GIOMM_EMBLEM_H */


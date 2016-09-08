// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SCROLLABLE_H
#define _GTKMM_SCROLLABLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/adjustment.h>
#include <gtkmm/border.h>
#include <glibmm/interface.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkScrollableInterface GtkScrollableInterface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkScrollable GtkScrollable;
typedef struct _GtkScrollableClass GtkScrollableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Scrollable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var ScrollablePolicy SCROLL_MINIMUM
 * Scrollable adjustments are based on the minimum size.
 * 
 *  @var ScrollablePolicy SCROLL_NATURAL
 * Scrollable adjustments are based on the natural size.
 * 
 *  @enum ScrollablePolicy
 * 
 * Defines the policy to be used in a scrollable widget when updating
 * the scrolled window adjustments in a given orientation.
 *
 * @ingroup gtkmmEnums
 */
enum ScrollablePolicy
{
  SCROLL_MINIMUM,
  SCROLL_NATURAL
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::ScrollablePolicy> : public Glib::Value_Enum<Gtk::ScrollablePolicy>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** This interface is implemented by widgets with native
 * scrolling ability.
 *
 * @newin{3,0}
 */

class Scrollable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Scrollable CppObjectType;
  typedef Scrollable_Class CppClassType;
  typedef GtkScrollable BaseObjectType;
  typedef GtkScrollableInterface BaseClassType;

  // noncopyable
  Scrollable(const Scrollable&) = delete;
  Scrollable& operator=(const Scrollable&) = delete;

private:
  friend class Scrollable_Class;
  static CppClassType scrollable_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Scrollable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Scrollable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Scrollable(GtkScrollable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Scrollable(Scrollable&& src) noexcept;
  Scrollable& operator=(Scrollable&& src) noexcept;

  ~Scrollable() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkScrollable*       gobj()       { return reinterpret_cast<GtkScrollable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkScrollable* gobj() const { return reinterpret_cast<GtkScrollable*>(gobject_); }

private:


public:
  
  /** Retrieves the Gtk::Adjustment used for horizontal scrolling.
   * 
   * @newin{3,0}
   * 
   * @return Horizontal Gtk::Adjustment.
   */
  Glib::RefPtr<Adjustment> get_hadjustment();
  
  /** Retrieves the Gtk::Adjustment used for horizontal scrolling.
   * 
   * @newin{3,0}
   * 
   * @return Horizontal Gtk::Adjustment.
   */
  Glib::RefPtr<const Adjustment> get_hadjustment() const;

  
  /** Sets the horizontal adjustment of the Gtk::Scrollable.
   * 
   * @newin{3,0}
   * 
   * @param hadjustment A Gtk::Adjustment.
   */
  void set_hadjustment(const Glib::RefPtr<Adjustment>& hadjustment);

  /** This method removes the hadjustment.
   * @see set_hadjustment().
   */
  void unset_hadjustment();

  
  /** Retrieves the Gtk::Adjustment used for vertical scrolling.
   * 
   * @newin{3,0}
   * 
   * @return Vertical Gtk::Adjustment.
   */
  Glib::RefPtr<Adjustment> get_vadjustment();
  
  /** Retrieves the Gtk::Adjustment used for vertical scrolling.
   * 
   * @newin{3,0}
   * 
   * @return Vertical Gtk::Adjustment.
   */
  Glib::RefPtr<const Adjustment> get_vadjustment() const;

  
  /** Sets the vertical adjustment of the Gtk::Scrollable.
   * 
   * @newin{3,0}
   * 
   * @param vadjustment A Gtk::Adjustment.
   */
  void set_vadjustment(const Glib::RefPtr<Adjustment>& vadjustment);

  /** This method removes the vadjustment.
   * @see set_vadjustment().
   */
  void unset_vadjustment();

  
  /** Gets the horizontal Gtk::ScrollablePolicy.
   * 
   * @newin{3,0}
   * 
   * @return The horizontal Gtk::ScrollablePolicy.
   */
  ScrollablePolicy get_hscroll_policy() const;
  
  /** Sets the Gtk::ScrollablePolicy to determine whether
   * horizontal scrolling should start below the minimum width or
   * below the natural width.
   * 
   * @newin{3,0}
   * 
   * @param policy The horizontal Gtk::ScrollablePolicy.
   */
  void set_hscroll_policy(ScrollablePolicy policy);
  
  /** Gets the vertical Gtk::ScrollablePolicy.
   * 
   * @newin{3,0}
   * 
   * @return The vertical Gtk::ScrollablePolicy.
   */
  ScrollablePolicy get_vscroll_policy() const;
  
  /** Sets the Gtk::ScrollablePolicy to determine whether
   * vertical scrolling should start below the minimum height or
   * below the natural height.
   * 
   * @newin{3,0}
   * 
   * @param policy The vertical Gtk::ScrollablePolicy.
   */
  void set_vscroll_policy(ScrollablePolicy policy);
  
  /** Returns the size of a non-scrolling border around the
   * outside of the scrollable. An example for this would
   * be treeview headers. GTK+ can use this information to
   * display overlayed graphics, like the overshoot indication,
   * at the right position.
   * 
   * @newin{3,16}
   * 
   * @param border Return location for the results.
   * @return <tt>true</tt> if @a border has been set.
   */
  bool get_border(Border& border) const;

  /** Horizontal Gtk::Adjustment of the scrollable widget. This adjustment is
   * shared between the scrollable widget and its parent.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Adjustment> > property_hadjustment() ;

/** Horizontal Gtk::Adjustment of the scrollable widget. This adjustment is
   * shared between the scrollable widget and its parent.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > property_hadjustment() const;

  /** Verical Gtk::Adjustment of the scrollable widget. This adjustment is shared
   * between the scrollable widget and its parent.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Adjustment> > property_vadjustment() ;

/** Verical Gtk::Adjustment of the scrollable widget. This adjustment is shared
   * between the scrollable widget and its parent.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Adjustment> > property_vadjustment() const;

  /** Determines whether horizontal scrolling should start once the scrollable
   * widget is allocated less than its minimum width or less than its natural width.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ScrollablePolicy > property_hscroll_policy() ;

/** Determines whether horizontal scrolling should start once the scrollable
   * widget is allocated less than its minimum width or less than its natural width.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ScrollablePolicy > property_hscroll_policy() const;

  /** Determines whether vertical scrolling should start once the scrollable
   * widget is allocated less than its minimum height or less than its natural height.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ScrollablePolicy > property_vscroll_policy() ;

/** Determines whether vertical scrolling should start once the scrollable
   * widget is allocated less than its minimum height or less than its natural height.
   * 
   * @newin{3,0}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ScrollablePolicy > property_vscroll_policy() const;


  //TODO: Add when we can break ABI:
  //_WRAP_VFUNC(bool get_border(Border& border) const, get_border)


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Scrollable
   */
  Glib::RefPtr<Gtk::Scrollable> wrap(GtkScrollable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_SCROLLABLE_H */

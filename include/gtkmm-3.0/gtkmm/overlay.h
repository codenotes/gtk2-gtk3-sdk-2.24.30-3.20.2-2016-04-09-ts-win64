// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_OVERLAY_H
#define _GTKMM_OVERLAY_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2014 The gtkmm Development Team
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

#include <gtkmm/bin.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkOverlay GtkOverlay;
typedef struct _GtkOverlayClass GtkOverlayClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Overlay_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A container which overlays widgets on top of each other.
 *
 * Gtk::Overlay is a container which contains a single main child, on top
 * of which it can place “overlay” widgets. The
 * position of each overlay widget is determined by its Gtk::Widget:halign
 * and Gtk::Widget:valign properties. E.g. a widget with both alignments
 * set to Gtk::ALIGN_START will be placed at the top left corner of the
 * main widget, whereas an overlay with halign set to Gtk::ALIGN_CENTER
 * and valign set to Gtk::ALIGN_END will be placed a the bottom edge of
 * the main widget, horizontally centered. The position can be adjusted
 * by setting the margin properties of the child to non-zero values.
 *
 * More complicated placement of overlays is possible by connecting
 * to the Gtk::Overlay::get-child-position signal.
 *
 * The Gtk::Overlay implementation of the Gtk::Buildable interface
 * supports placing a child as an overlay by specifying “overlay” as
 * the “type” attribute of a `<child>` element.
 *
 * @ingroup Containers
 * @newin{3,14}
 */


class Overlay
  : public Bin
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Overlay CppObjectType;
  typedef Overlay_Class CppClassType;
  typedef GtkOverlay BaseObjectType;
  typedef GtkOverlayClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Overlay(Overlay&& src) noexcept;
  Overlay& operator=(Overlay&& src) noexcept;

  // noncopyable
  Overlay(const Overlay&) = delete;
  Overlay& operator=(const Overlay&) = delete;

  ~Overlay() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Overlay_Class;
  static CppClassType overlay_class_;

protected:
  explicit Overlay(const Glib::ConstructParams& construct_params);
  explicit Overlay(GtkOverlay* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkOverlay*       gobj()       { return reinterpret_cast<GtkOverlay*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkOverlay* gobj() const { return reinterpret_cast<GtkOverlay*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_get_child_position().
  virtual bool on_get_child_position(Gtk::Widget* widget, Gdk::Rectangle& allocation);


private:

public:

  /** Creates a new Overlay.
   */
  Overlay();


  /** Adds @a widget to @a overlay.
   * 
   * The widget will be stacked on top of the main widget
   * added with Gtk::Container::add().
   * 
   * The position at which @a widget is placed is determined
   * from its Gtk::Widget::property_halign() and Gtk::Widget::property_valign() properties.
   * 
   * @newin{3,2}
   * 
   * @param widget A Gtk::Widget to be added to the container.
   */
  void add_overlay(Gtk::Widget& widget);

  
  /** Moves @a child to a new @a index in the list of @a overlay children.
   * The list contains overlays in the order that these were
   * added to @a overlay.
   * 
   * A widget’s index in the @a overlay children list determines which order
   * the children are drawn if they overlap. The first child is drawn at
   * the bottom. It also affects the default focus chain order.
   * 
   * @param child The overlaid Gtk::Widget to move.
   * @param position The new index for @a child in the list of overlay children
   * of @a overlay, starting from 0. If negative, indicates the end of
   * the list.
   */
  void reorder_overlay(Widget& child, int position);
  
  /** Convenience function to get the value of the Gtk::Overlay::property_pass_through()
   * child property for @a widget.
   * 
   * @newin{3,18}
   * 
   * @param widget An overlay child of Gtk::Overlay.
   * @return Whether the widget is a pass through child.
   */
  bool get_overlay_pass_through(Widget& widget) const;
  
  /** Convenience function to set the value of the Gtk::Overlay::property_pass_through()
   * child property for @a widget.
   * 
   * @newin{3,18}
   * 
   * @param widget An overlay child of Gtk::Overlay.
   * @param pass_through Whether the child should pass the input through.
   */
  void set_overlay_pass_through(Widget& widget, bool pass_through =  true);

 
  /**
   * @par Slot Prototype:
   * <tt>bool on_my_%get_child_position(Gtk::Widget* widget, Gdk::Rectangle& allocation)</tt>
   *
   * The signal_get_child_position() signal is emitted to determine
   * the position and size of any overlay child widgets. A
   * handler for this signal should fill @a allocation with
   * the desired position and size for @a widget, relative to
   * the 'main' child of @a overlay.
   * 
   * The default handler for this signal uses the @a widget's
   * halign and valign properties to determine the position
   * and gives the widget its natural size (except that an
   * alignment of Gtk::ALIGN_FILL will cause the overlay to
   * be full-width/height). If the main child is a
   * Gtk::ScrolledWindow, the overlays are placed relative
   * to its contents.
   * 
   * @param widget The child widget to position.
   * @param allocation Return
   * location for the allocation.
   * @return <tt>true</tt> if the @a allocation has been filled.
   */

  Glib::SignalProxy< bool,Gtk::Widget*,Gdk::Rectangle& > signal_get_child_position();


  /** Pass through input, does not affect main child.
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< bool > child_property_pass_through(Gtk::Widget& child) ;

/** Pass through input, does not affect main child.
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< bool > child_property_pass_through(const Gtk::Widget& child) const;

  /** The index of the overlay in the parent, -1 for the main child.
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< int > child_property_index(Gtk::Widget& child) ;

/** The index of the overlay in the parent, -1 for the main child.
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< int > child_property_index(const Gtk::Widget& child) const;


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
   * @relates Gtk::Overlay
   */
  Gtk::Overlay* wrap(GtkOverlay* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_OVERLAY_H */


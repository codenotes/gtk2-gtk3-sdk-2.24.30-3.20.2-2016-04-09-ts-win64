// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_STACKSWITCHER_H
#define _GTKMM_STACKSWITCHER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2013 The gtkmm Development Team
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

#include <gtkmm/box.h>
#include <gtkmm/stack.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkStackSwitcher GtkStackSwitcher;
typedef struct _GtkStackSwitcherClass GtkStackSwitcherClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class StackSwitcher_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
// Gtk::StackSwitcher is formally a container widget, but it's not included
// in group Containers. A StackSwitcher adds its children itself, when a Stack
// is connected. Users of StackSwitcher shall not call its inherited add() method.

/** A controller for a Gtk::Stack.
 *
 * It shows a row of buttons to switch between the various pages of
 * the associated stack widget.
 *
 * All the content for the buttons comes from the child properties of
 * the Gtk::Stack.
 *
 * It is possible to associate multiple StackSwitcher widgets with
 * the same stack widget.
 *
 * @ingroup Widgets
 * @newin{3,10}
 */

class StackSwitcher
  : public Box
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef StackSwitcher CppObjectType;
  typedef StackSwitcher_Class CppClassType;
  typedef GtkStackSwitcher BaseObjectType;
  typedef GtkStackSwitcherClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  StackSwitcher(StackSwitcher&& src) noexcept;
  StackSwitcher& operator=(StackSwitcher&& src) noexcept;

  // noncopyable
  StackSwitcher(const StackSwitcher&) = delete;
  StackSwitcher& operator=(const StackSwitcher&) = delete;

  ~StackSwitcher() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class StackSwitcher_Class;
  static CppClassType stackswitcher_class_;

protected:
  explicit StackSwitcher(const Glib::ConstructParams& construct_params);
  explicit StackSwitcher(GtkStackSwitcher* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkStackSwitcher*       gobj()       { return reinterpret_cast<GtkStackSwitcher*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkStackSwitcher* gobj() const { return reinterpret_cast<GtkStackSwitcher*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  StackSwitcher();

  
  /** Sets the stack to control.
   * 
   * @newin{3,10}
   * 
   * @param stack A Gtk::Stack.
   */
  void set_stack(Stack& stack);
  /** Unsets the associated Stack.
   * @see set_stack().
   * @newin{3,16}
   */
  void unset_stack();

  
  /** Retrieves the stack.
   * See set_stack().
   * 
   * @newin{3,10}
   * 
   * @return The stack, or <tt>nullptr</tt> if
   * none has been set explicitly.
   */
  Stack* get_stack();
  
  /** Retrieves the stack.
   * See set_stack().
   * 
   * @newin{3,10}
   * 
   * @return The stack, or <tt>nullptr</tt> if
   * none has been set explicitly.
   */
  const Stack* get_stack() const;

  /** Use the "icon-size" property to change the size of the image displayed
   * when a Gtk::StackSwitcher is displaying icons.
   * 
   * @newin{3,20}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< IconSize > property_icon_size() ;

/** Use the "icon-size" property to change the size of the image displayed
   * when a Gtk::StackSwitcher is displaying icons.
   * 
   * @newin{3,20}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< IconSize > property_icon_size() const;

  /** Stack.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Stack* > property_stack() ;

/** Stack.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Stack* > property_stack() const;


  // There are no signals or vfuncs.


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
   * @relates Gtk::StackSwitcher
   */
  Gtk::StackSwitcher* wrap(GtkStackSwitcher* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_STACKSWITCHER_H */


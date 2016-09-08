// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_MENUITEM_H
#define _GTKMM_MENUITEM_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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
#include <gtkmm/accelkey.h>
#include <gtkmm/accellabel.h>
#include <gtkmm/activatable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMenuItem GtkMenuItem;
typedef struct _GtkMenuItemClass GtkMenuItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class MenuItem_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

//TODO: Derive from (and implement) Actionable when we can break ABI.

class Menu;
namespace Menu_Helpers { class Element; }

/** Child item for menus.
 * Handle highlighting, alignment, events and submenus.
 * As it derives from Gtk::Bin it can hold any valid child widget, altough only a few are really useful.
 * @ingroup Widgets
 * @ingroup Menus
 */

class MenuItem
 : public Bin,
   public Activatable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MenuItem CppObjectType;
  typedef MenuItem_Class CppClassType;
  typedef GtkMenuItem BaseObjectType;
  typedef GtkMenuItemClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  MenuItem(MenuItem&& src) noexcept;
  MenuItem& operator=(MenuItem&& src) noexcept;

  // noncopyable
  MenuItem(const MenuItem&) = delete;
  MenuItem& operator=(const MenuItem&) = delete;

  ~MenuItem() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MenuItem_Class;
  static CppClassType menuitem_class_;

protected:
  explicit MenuItem(const Glib::ConstructParams& construct_params);
  explicit MenuItem(GtkMenuItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMenuItem*       gobj()       { return reinterpret_cast<GtkMenuItem*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMenuItem* gobj() const { return reinterpret_cast<GtkMenuItem*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_activate().
  virtual void on_activate();
  /// This is a default handler for the signal signal_activate_item().
  virtual void on_activate_item();
  /// This is a default handler for the signal signal_toggle_size_request().
  virtual void on_toggle_size_request(int* requisition);
  /// This is a default handler for the signal signal_toggle_size_allocate().
  virtual void on_toggle_size_allocate(int allocation);


private:

  
public:
  /// Create an empty menu item
  MenuItem();

  /// Create a menu item with widget
  explicit MenuItem(Widget& widget);

  /// Create a menu item with label
  explicit MenuItem(const Glib::ustring& label, bool mnemonic = false);

  
  /** Sets or replaces the menu item’s submenu, or removes it when a <tt>nullptr</tt>
   * submenu is passed.
   * 
   * @param submenu The submenu, or <tt>nullptr</tt>.
   */
  void set_submenu(Menu& submenu);

  /** Remove the menu item's sub-menu.
   * @newin{2,22}
   */
  void unset_submenu();

  
  /** Gets the submenu underneath this menu item, if any.
   * See set_submenu().
   * 
   * @return Submenu for this menu item, or <tt>nullptr</tt> if none.
   */
  Menu* get_submenu();
  
  /** Gets the submenu underneath this menu item, if any.
   * See set_submenu().
   * 
   * @return Submenu for this menu item, or <tt>nullptr</tt> if none.
   */
  const Menu* get_submenu() const;
  bool has_submenu() const;
  
  /** Emits the Gtk::MenuItem::signal_select() signal on the given item.
   */
  void select();
  
  /** Emits the Gtk::MenuItem::signal_deselect() signal on the given item.
   */
  void deselect();
  
  /** Emits the Gtk::MenuItem::signal_activate() signal on the given item
   */
  void activate();
  
  /** Emits the Gtk::MenuItem::signal_toggle_size_request() signal on the given item.
   * 
   * @param requisition The requisition to use as signal data.
   */
  void toggle_size_request(int& requisition);
  
  /** Emits the Gtk::MenuItem::signal_toggle_size_allocate() signal on the given item.
   * 
   * @param allocation The allocation to use as signal data.
   */
  void toggle_size_allocate(int allocation);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets whether the menu item appears justified at the right
   * side of a menu bar. This was traditionally done for “Help”
   * menu items, but is now considered a bad idea. (If the widget
   * layout is reversed for a right-to-left language like Hebrew
   * or Arabic, right-justified-menu-items appear at the left.)
   * 
   * Deprecated: 3.2: If you insist on using it, use
   * Gtk::Widget::set_hexpand() and Gtk::Widget::set_halign().
   * 
   * @deprecated If you insist on using it, use Widget::set_hexpand() and Widget::set_halign().
   * 
   * @param right_justified If <tt>true</tt> the menu item will appear at the
   * far right if added to a menu bar.
   */
  void set_right_justified(bool right_justified =  true);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets whether the menu item appears justified at the right
   * side of the menu bar.
   * 
   * Deprecated: 3.2: See set_right_justified()
   * 
   * @deprecated See set_right_justified().
   * 
   * @return <tt>true</tt> if the menu item will appear at the
   * far right if added to a menu bar.
   */
  bool get_right_justified() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Set the accelerator path on @a menu_item, through which runtime changes of the
   * menu item's accelerator caused by the user can be identified and saved to
   * persistant storage (see Gtk::AccelMap::save() on this).
   * To setup a default accelerator for this menu item, call
   * Gtk::AccelMap::add_entry() with the same @a accel_path.
   * See also Gtk::AccelMap::add_entry() on the specifics of accelerator paths,
   * and set_accel_path() for a more convenient variant of this function.
   * 
   * This function is basically a convenience wrapper that handles calling
   * Gtk::Widget::set_accel_path() with the appropriate accelerator group for
   * the menu item.
   * 
   * Note that you do need to set an accelerator on the parent menu with
   * set_accel_group() for this to work.
   * 
   * @param accel_path Accelerator path, corresponding to this menu item's
   * functionality.
   */
  void set_accel_path(const Glib::ustring& accel_path);
  void unset_accel_path();
  
  /** Retrieve the accelerator path that was previously set on @a menu_item.
   * 
   * See set_accel_path() for details.
   * 
   * @newin{2,14}
   * 
   * @return The accelerator path corresponding to
   * this menu item’s functionality, or <tt>nullptr</tt> if not set.
   */
  Glib::ustring get_accel_path() const;
  
  /** Sets @a text on the @a menu_item label
   * 
   * @newin{2,16}
   * 
   * @param label The text you want to set.
   */
  void set_label(const Glib::ustring& label);
  
  /** Sets @a text on the @a menu_item label
   * 
   * @newin{2,16}
   * 
   * @return The text in the @a menu_item label. This is the internal
   * string used by the label, and must not be modified.
   */
  Glib::ustring get_label() const;
  
  /** If true, an underline in the text indicates the next character
   * should be used for the mnemonic accelerator key.
   * 
   * @newin{2,16}
   * 
   * @param setting <tt>true</tt> if underlines in the text indicate mnemonics.
   */
  void set_use_underline(bool setting =  true);
  
  /** Checks if an underline in the text indicates the next character
   * should be used for the mnemonic accelerator key.
   * 
   * @newin{2,16}
   * 
   * @return <tt>true</tt> if an embedded underline in the label
   * indicates the mnemonic accelerator key.
   */
  bool get_use_underline() const;

  
  /** Sets whether the @a menu_item should reserve space for
   * the submenu indicator, regardless if it actually has
   * a submenu or not.
   * 
   * There should be little need for applications to call
   * this functions.
   * 
   * @newin{3,0}
   * 
   * @param reserve The new value.
   */
  void set_reserve_indicator(bool reserve =  true);
  
  /** Returns whether the @a menu_item reserves space for
   * the submenu indicator, regardless if it has a submenu
   * or not.
   * 
   * @newin{3,0}
   * 
   * @return <tt>true</tt> if @a menu_item always reserves space for the
   * submenu indicator.
   */
  bool get_reserve_indicator() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate()</tt>
   *
   * Emitted when the item is activated.
   */

  Glib::SignalProxy< void > signal_activate();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate_item()</tt>
   *
   * Emitted when the item is activated, but also if the menu item has a
   * submenu. For normal applications, the relevant signal is
   * Gtk::MenuItem::signal_activate().
   */

  Glib::SignalProxy< void > signal_activate_item();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%toggle_size_request(int* requisition)</tt>
   *
   */

  Glib::SignalProxy< void,int* > signal_toggle_size_request();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%toggle_size_allocate(int allocation)</tt>
   *
   */

  Glib::SignalProxy< void,int > signal_toggle_size_allocate();


  //TODO: Remove no_default_handler when we can break ABI
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%select()</tt>
   *
   */

  Glib::SignalProxy< void > signal_select();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%deselect()</tt>
   *
   */

  Glib::SignalProxy< void > signal_deselect();


  void accelerate(Window& window);

  //TODO: Deprecate the C property once GTK+ 3.5 has begun. It seems to have been forgotten.
  
#ifndef GTKMM_DISABLE_DEPRECATED

/** Sets whether the menu item appears justified
   * at the right side of a menu bar.
   * 
   * @newin{2,14}
   * 
   * @deprecated See set_right_justified.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_right_justified() ;

/** Sets whether the menu item appears justified
   * at the right side of a menu bar.
   * 
   * @newin{2,14}
   * 
   * @deprecated See set_right_justified.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_right_justified() const;

#endif // GTKMM_DISABLE_DEPRECATED


  /** The submenu attached to the menu item, or <tt>nullptr</tt> if it has none.
   * 
   * @newin{2,12}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gtk::Menu* > property_submenu() ;

/** The submenu attached to the menu item, or <tt>nullptr</tt> if it has none.
   * 
   * @newin{2,12}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gtk::Menu* > property_submenu() const;

  /** Sets the accelerator path of the menu item, through which runtime
   * changes of the menu item's accelerator caused by the user can be
   * identified and saved to persistant storage.
   * 
   * @newin{2,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_accel_path() ;

/** Sets the accelerator path of the menu item, through which runtime
   * changes of the menu item's accelerator caused by the user can be
   * identified and saved to persistant storage.
   * 
   * @newin{2,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_accel_path() const;

  /** The text for the child label.
   * 
   * @newin{2,16}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_label() ;

/** The text for the child label.
   * 
   * @newin{2,16}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_label() const;

  /** <tt>true</tt> if underlines in the text indicate mnemonics.
   * 
   * @newin{2,16}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_underline() ;

/** <tt>true</tt> if underlines in the text indicate mnemonics.
   * 
   * @newin{2,16}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_underline() const;


protected:
  void add_accel_label(const Glib::ustring& label, bool mnemonic = true);
  void set_accel_key(const AccelKey& accel_key);

private:
  friend class Menu_Helpers::Element;

  //This data is set by MenuElem, and will be used in on_realize(), in the call to add_accelerator().
  AccelKey accel_key_;


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
   * @relates Gtk::MenuItem
   */
  Gtk::MenuItem* wrap(GtkMenuItem* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MENUITEM_H */


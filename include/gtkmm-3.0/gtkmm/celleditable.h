// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLEDITABLE_H
#define _GTKMM_CELLEDITABLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkCellEditableIface GtkCellEditableIface;
typedef union _GdkEvent GdkEvent;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellEditable GtkCellEditable;
typedef struct _GtkCellEditableClass GtkCellEditableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class CellEditable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Interface for widgets which are used for editing cells.
 * The CellEditable interface must be implemented for widgets to be usable when editing the contents of a TreeView cell.
 */

class CellEditable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef CellEditable CppObjectType;
  typedef CellEditable_Class CppClassType;
  typedef GtkCellEditable BaseObjectType;
  typedef GtkCellEditableIface BaseClassType;

  // noncopyable
  CellEditable(const CellEditable&) = delete;
  CellEditable& operator=(const CellEditable&) = delete;

private:
  friend class CellEditable_Class;
  static CppClassType celleditable_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  CellEditable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit CellEditable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit CellEditable(GtkCellEditable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CellEditable(CellEditable&& src) noexcept;
  CellEditable& operator=(CellEditable&& src) noexcept;

  ~CellEditable() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkCellEditable*       gobj()       { return reinterpret_cast<GtkCellEditable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkCellEditable* gobj() const { return reinterpret_cast<GtkCellEditable*>(gobject_); }

private:


public:
  
  /** Begins editing on a @a cell_editable. @a event is the Gdk::Event that began 
   * the editing process. It may be <tt>nullptr</tt>, in the instance that editing was 
   * initiated through programatic means.
   * 
   * @param event A Gdk::Event, or <tt>nullptr</tt>.
   */
  void start_editing(GdkEvent* event);
  
  /** Emits the Gtk::CellEditable::signal_editing_done() signal.
   */
  void editing_done();
  
  /** Emits the Gtk::CellEditable::signal_remove_widget() signal.
   */
  void remove_widget();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%editing_done()</tt>
   *
   * This signal is a sign for the cell renderer to update its
   * value from the @a cell_editable.
   * 
   * Implementations of Gtk::CellEditable are responsible for
   * emitting this signal when they are done editing, e.g.
   * Gtk::Entry is emitting it when the user presses Enter.
   * 
   * Gtk::CellEditable::editing_done() is a convenience method
   * for emitting Gtk::CellEditable::signal_editing_done().
   */

  Glib::SignalProxy< void > signal_editing_done();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%remove_widget()</tt>
   *
   * This signal is meant to indicate that the cell is finished
   * editing, and the widget may now be destroyed.
   * 
   * Implementations of Gtk::CellEditable are responsible for
   * emitting this signal when they are done editing. It must
   * be emitted after the Gtk::CellEditable::signal_editing_done() signal,
   * to give the cell renderer a chance to update the cell's value
   * before the widget is removed.
   * 
   * Gtk::CellEditable::remove_widget() is a convenience method
   * for emitting Gtk::CellEditable::signal_remove_widget().
   */

  Glib::SignalProxy< void > signal_remove_widget();


  /** Indicates whether editing on the cell has been canceled.
   * 
   * @newin{2,20}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_editing_canceled() ;

/** Indicates whether editing on the cell has been canceled.
   * 
   * @newin{2,20}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_editing_canceled() const;


protected:
    virtual void start_editing_vfunc(GdkEvent* event);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_editing_done().
  virtual void on_editing_done();
  /// This is a default handler for the signal signal_remove_widget().
  virtual void on_remove_widget();


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
   * @relates Gtk::CellEditable
   */
  Glib::RefPtr<Gtk::CellEditable> wrap(GtkCellEditable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_CELLEDITABLE_H */

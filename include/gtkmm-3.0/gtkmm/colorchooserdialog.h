// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_COLORCHOOSERDIALOG_H
#define _GTKMM_COLORCHOOSERDIALOG_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The gtkmm Development Team
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

#include <gtkmm/dialog.h>
#include <gtkmm/colorchooser.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkColorChooserDialog GtkColorChooserDialog;
typedef struct _GtkColorChooserDialogClass GtkColorChooserDialogClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ColorChooserDialog_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** This dialog is for choosing a color. It implements the ColorChooser interface.
 *
 * A ColorChooserDialog looks like this:
 * @image html colorchooserdialog1.png
 *
 * @ingroup Dialogs
 */

class ColorChooserDialog
: public Dialog,
  public ColorChooser
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ColorChooserDialog CppObjectType;
  typedef ColorChooserDialog_Class CppClassType;
  typedef GtkColorChooserDialog BaseObjectType;
  typedef GtkColorChooserDialogClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ColorChooserDialog(ColorChooserDialog&& src) noexcept;
  ColorChooserDialog& operator=(ColorChooserDialog&& src) noexcept;

  // noncopyable
  ColorChooserDialog(const ColorChooserDialog&) = delete;
  ColorChooserDialog& operator=(const ColorChooserDialog&) = delete;

  ~ColorChooserDialog() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ColorChooserDialog_Class;
  static CppClassType colorchooserdialog_class_;

protected:
  explicit ColorChooserDialog(const Glib::ConstructParams& construct_params);
  explicit ColorChooserDialog(GtkColorChooserDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkColorChooserDialog*       gobj()       { return reinterpret_cast<GtkColorChooserDialog*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkColorChooserDialog* gobj() const { return reinterpret_cast<GtkColorChooserDialog*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:

  ColorChooserDialog();

  explicit ColorChooserDialog(const Glib::ustring& title);

    explicit ColorChooserDialog(const Glib::ustring& title, Window& parent);


  /** Show editor.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_editor() ;

/** Show editor.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_editor() const;


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
   * @relates Gtk::ColorChooserDialog
   */
  Gtk::ColorChooserDialog* wrap(GtkColorChooserDialog* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_COLORCHOOSERDIALOG_H */


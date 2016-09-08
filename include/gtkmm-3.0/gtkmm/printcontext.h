// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_PRINTCONTEXT_H
#define _GTKMM_PRINTCONTEXT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2006 The gtkmm Development Team
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

#include <glibmm/object.h>

#include <cairomm/context.h>

#include <pangomm/fontmap.h>
#include <pangomm/context.h>
#include <pangomm/layout.h>

#include <gtkmm/pagesetup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkPrintContext GtkPrintContext;
typedef struct _GtkPrintContextClass GtkPrintContextClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class PrintContext_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A PrintContext encapsulates context information that is required when
 * drawing pages for printing, such as the cairo context and important
 * parameters like page size and resolution. It also lets you easily
 * create Pango::Layout and Pango::Context objects that match the font metrics
 * of the cairo surface.
 *
 * PrintContext objects gets passed to the begin-print, end-print,
 * request-page-setup and draw-page signals on the PrintOperation.
 *
 * @newin{2,10}
 *
 * @ingroup Printing
 */

class PrintContext : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef PrintContext CppObjectType;
  typedef PrintContext_Class CppClassType;
  typedef GtkPrintContext BaseObjectType;
  typedef GtkPrintContextClass BaseClassType;

  // noncopyable
  PrintContext(const PrintContext&) = delete;
  PrintContext& operator=(const PrintContext&) = delete;

private:  friend class PrintContext_Class;
  static CppClassType printcontext_class_;

protected:
  explicit PrintContext(const Glib::ConstructParams& construct_params);
  explicit PrintContext(GtkPrintContext* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PrintContext(PrintContext&& src) noexcept;
  PrintContext& operator=(PrintContext&& src) noexcept;

  ~PrintContext() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkPrintContext*       gobj()       { return reinterpret_cast<GtkPrintContext*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkPrintContext* gobj() const { return reinterpret_cast<GtkPrintContext*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkPrintContext* gobj_copy();

private:


public:

   
  /** Obtains the cairo context that is associated with the
   * Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return The cairo context of @a context.
   */
  ::Cairo::RefPtr< ::Cairo::Context> get_cairo_context();
  
  /** Obtains the cairo context that is associated with the
   * Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return The cairo context of @a context.
   */
  ::Cairo::RefPtr<const ::Cairo::Context> get_cairo_context() const;

  
  /** Obtains the Gtk::PageSetup that determines the page
   * dimensions of the Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return The page setup of @a context.
   */
  Glib::RefPtr<PageSetup> get_page_setup();
  
  /** Obtains the Gtk::PageSetup that determines the page
   * dimensions of the Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return The page setup of @a context.
   */
  Glib::RefPtr<const PageSetup> get_page_setup() const;

  
  /** Obtains the width of the Gtk::PrintContext, in pixels.
   * 
   * @newin{2,10}
   * 
   * @return The width of @a context.
   */
  double get_width() const;
  
  /** Obtains the height of the Gtk::PrintContext, in pixels.
   * 
   * @newin{2,10}
   * 
   * @return The height of @a context.
   */
  double get_height() const;

  
  /** Obtains the horizontal resolution of the Gtk::PrintContext,
   * in dots per inch.
   * 
   * @newin{2,10}
   * 
   * @return The horizontal resolution of @a context.
   */
  double get_dpi_x() const;
  
  /** Obtains the vertical resolution of the Gtk::PrintContext,
   * in dots per inch.
   * 
   * @newin{2,10}
   * 
   * @return The vertical resolution of @a context.
   */
  double get_dpi_y() const;

  
  /** Obtains the hardware printer margins of the Gtk::PrintContext, in units.
   * 
   * @newin{2,20}
   * 
   * @param top Top hardware printer margin.
   * @param bottom Bottom hardware printer margin.
   * @param left Left hardware printer margin.
   * @param right Right hardware printer margin.
   * @return <tt>true</tt> if the hard margins were retrieved.
   */
  bool get_hard_margins(double& top, double& bottom, double& left, double& right) const;

  
  /** Returns a Pango::FontMap that is suitable for use
   * with the Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return The font map of @a context.
   */
  Glib::RefPtr<Pango::FontMap> get_pango_fontmap();
  
  /** Returns a Pango::FontMap that is suitable for use
   * with the Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return The font map of @a context.
   */
  Glib::RefPtr<const Pango::FontMap> get_pango_fontmap() const;

  
  /** Creates a new Pango::Context that can be used with the
   * Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return A new Pango context for @a context.
   */
  Glib::RefPtr<Pango::Context> create_pango_context();
  
  /** Creates a new Pango::Layout that is suitable for use
   * with the Gtk::PrintContext.
   * 
   * @newin{2,10}
   * 
   * @return A new Pango layout for @a context.
   */
  Glib::RefPtr<Pango::Layout> create_pango_layout();

  
  /** Sets a new cairo context on a print context. 
   * 
   * This function is intended to be used when implementing
   * an internal print preview, it is not needed for printing,
   * since GTK+ itself creates a suitable cairo context in that
   * case.
   * 
   * @newin{2,10}
   * 
   * @param cr The cairo context.
   * @param dpi_x The horizontal resolution to use with @a cr.
   * @param dpi_y The vertical resolution to use with @a cr.
   */
  void set_cairo_context(const ::Cairo::RefPtr< ::Cairo::Context>& cr, double dpi_x, double dpi_y);


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
   * @relates Gtk::PrintContext
   */
  Glib::RefPtr<Gtk::PrintContext> wrap(GtkPrintContext* object, bool take_copy = false);
}


#endif /* _GTKMM_PRINTCONTEXT_H */


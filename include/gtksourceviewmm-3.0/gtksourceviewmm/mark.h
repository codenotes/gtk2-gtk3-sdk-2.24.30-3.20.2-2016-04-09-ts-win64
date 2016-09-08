// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_MARK_H
#define _GTKSOURCEVIEWMM_MARK_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* mark.h
 *
 * Copyright (C) 2008 Jonathon Jongsma
 * Copyright (C) 2010, 2011 Krzesimir Nowak
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtkmm/textmark.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceMark GtkSourceMark;
typedef struct _GtkSourceMarkClass GtkSourceMarkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class Mark_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

/** Mark class for Buffer.
 *
 * @newin{2,2}
 */

class Mark : public Gtk::TextMark
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Mark CppObjectType;
  typedef Mark_Class CppClassType;
  typedef GtkSourceMark BaseObjectType;
  typedef GtkSourceMarkClass BaseClassType;

  // noncopyable
  Mark(const Mark&) = delete;
  Mark& operator=(const Mark&) = delete;

private:  friend class Mark_Class;
  static CppClassType mark_class_;

protected:
  explicit Mark(const Glib::ConstructParams& construct_params);
  explicit Mark(GtkSourceMark* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Mark(Mark&& src) noexcept;
  Mark& operator=(Mark&& src) noexcept;

  virtual ~Mark() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourceMark*       gobj()       { return reinterpret_cast<GtkSourceMark*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourceMark* gobj() const { return reinterpret_cast<GtkSourceMark*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSourceMark* gobj_copy();

private:


protected:

  explicit Mark(const Glib::ustring& category);
  explicit Mark(const Glib::ustring& name, const Glib::ustring& category);
  

public:
  /** Creates an anonymous text mark.
   *
   * Add it to a buffer using Gtk::TextBuffer::add_mark(). Note that such marks
   * cannot be retrieved by using Gtk::TextBuffer::get_mark(). Normally marks
   * are created using the utility function
   * Gsv::Buffer::create_source_mark().
   *
   * @param category Is used to classify marks according to common
   * characteristics (e.g. all the marks representing a bookmark could belong to
   * the "bookmark" category, or all the marks representing a compilation error
   * could belong to "error" category).
   *
   * @return A new anonymous Mark that can be added using
   * GtkTextBuffer::add_mark().
   */
  
  static Glib::RefPtr<Mark> create(const Glib::ustring& category);


  /** Creates a text mark.
   *
   * Add it to a buffer using Gtk::TextBuffer::add_mark(). The mark can be
   * retrieved by name by using Gtk::TextBuffer::get_mark(). Normally marks are
   * created using the utility function Buffer::create_source_mark().
   *
   * @param category Is used to classify marks according to common
   * characteristics (e.g. all the marks representing a bookmark could belong to
   * the "bookmark" category, or all the marks representing a compilation error
   * could belong to "error" category).
   * @param name Name of the Mark.
   *
   * @return A new Mark that can be added using GtkTextBuffer::add_mark().
   */
  
  static Glib::RefPtr<Mark> create(const Glib::ustring& name, const Glib::ustring& category);


  /** Returns the mark category.
   *
   * @return The category of the Mark.
   *
   * @newin{2,2}
   */
  Glib::ustring get_category() const;

  
  /** Returns the next Mark in the buffer.
   *
   * If there is no next mark, empty refptr will be returned.
   *
   * @param category A string specifying the mark category.
   *
   * @return The next Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<Gsv::Mark> next(const Glib::ustring& category);

  
  /** Returns the next Mark in the buffer.
   *
   * If there is no next mark, empty refptr will be returned.
   *
   * @param category A string specifying the mark category.
   *
   * @return The next Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<const Gsv::Mark> next(const Glib::ustring& category) const;

  /** Returns the next Mark of any category in the buffer.
   *
   * If there is no next mark, empty refptr will be returned.
   *
   * @return The next Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<Gsv::Mark> next();

  /** Returns the next Mark of any category in the buffer.
   *
   * If there is no next mark, empty refptr will be returned.
   *
   * @return The next Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<const Gsv::Mark> next() const;

  
  /** Returns the previous Mark in the buffer.
   *
   * If there is no previous mark, empty refptr will be returned.
   *
   * @param category A string specifying the mark category.
   *
   * @return The previous Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<Gsv::Mark> prev(const Glib::ustring& category);

  
  /** Returns the previous Mark in the buffer.
   *
   * If there is no previous mark, empty refptr will be returned.
   *
   * @param category A string specifying the mark category.
   *
   * @return The previous Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<const Gsv::Mark> prev(const Glib::ustring& category) const;

  /** Returns the previous Mark of any category in the buffer.
   *
   * If there is no previous mark, empty refptr will be returned.
   *
   * @return The previous Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<Gsv::Mark> prev();

  /** Returns the previous Mark of any category in the buffer.
   *
   * If there is no previous mark, empty refptr will be returned.
   *
   * @return The previous Mark or empty Glib::RefPtr.
   *
   * @newin{2,2}
   */
  Glib::RefPtr<const Gsv::Mark> prev() const;

  /** The mark category.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_category() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};//end class Mark

}//end namespace Gsv


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gsv::Mark
   */
  Glib::RefPtr<Gsv::Mark> wrap(GtkSourceMark* object, bool take_copy = false);
}


#endif /* _GTKSOURCEVIEWMM_MARK_H */

// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_SOURCESTYLESCHEMEMANAGER_H
#define _GTKSOURCEVIEWMM_SOURCESTYLESCHEMEMANAGER_H


#include <glibmm.h>

/* sourcestyleschememanager.h
 *
 * Copyright (C) 2008 Jonathon Jongsma
 * Copyright (C) 2009, 2010 Krzesimir Nowak
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

#include <gtksourceviewmm/sourcestylescheme.h>
#include <gtksourceview/gtksourcestyleschememanager.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceStyleSchemeManager GtkSourceStyleSchemeManager;
typedef struct _GtkSourceStyleSchemeManagerClass GtkSourceStyleSchemeManagerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace gtksourceview
{ class SourceStyleSchemeManager_Class; } // namespace gtksourceview
namespace gtksourceview
{

/** Class providing access to SourceStyleSchemes.
 */

class SourceStyleSchemeManager : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef SourceStyleSchemeManager CppObjectType;
  typedef SourceStyleSchemeManager_Class CppClassType;
  typedef GtkSourceStyleSchemeManager BaseObjectType;
  typedef GtkSourceStyleSchemeManagerClass BaseClassType;

private:  friend class SourceStyleSchemeManager_Class;
  static CppClassType sourcestyleschememanager_class_;

private:
  // noncopyable
  SourceStyleSchemeManager(const SourceStyleSchemeManager&);
  SourceStyleSchemeManager& operator=(const SourceStyleSchemeManager&);

protected:
  explicit SourceStyleSchemeManager(const Glib::ConstructParams& construct_params);
  explicit SourceStyleSchemeManager(GtkSourceStyleSchemeManager* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~SourceStyleSchemeManager();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourceStyleSchemeManager*       gobj()       { return reinterpret_cast<GtkSourceStyleSchemeManager*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourceStyleSchemeManager* gobj() const { return reinterpret_cast<GtkSourceStyleSchemeManager*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSourceStyleSchemeManager* gobj_copy();

private:


protected:
  SourceStyleSchemeManager();

public:
  /** Creates a new style manager.
   *
   * If you do not need more than one style manager then use get_default()
   * instead.
   *
   * @return A SourceStyleSchemeManager.
   */
  
  static Glib::RefPtr<SourceStyleSchemeManager> create();


  /** Returns the default SourceStyleSchemeManager instance.
   *
   * @return A SourceStyleSchemeManager.
   */
  static Glib::RefPtr<SourceStyleSchemeManager> get_default();

 
  /** Returns the current search path for the manager.
   *
   * See set_search_path() for details.
   *
   * @return An array of string containing the search path.
   */
  Glib::StringArrayHandle get_search_path() const;

 
  /** Sets the list of directories where the manager looks for style scheme
   *  files.
   *
   * @param path An empty string terminated array of strings.
   */
  void set_search_path(const Glib::StringArrayHandle& path);

  /** Resets the list of directories where the manager looks for style scheme
   * files to default.
   */
  void reset_search_path();

  
  /** Appends @a path to the list of directories where the @a manager looks for
   * style scheme files.
   * See set_search_path() for details.
   * @param path A directory or a filename.
   */
  void append_search_path(const Glib::ustring& path);

  
  /** Prepends @a path to the list of directories where the @a manager looks
   * for style scheme files.
   * See set_search_path() for details.
   * @param path A directory or a filename.
   */
  void prepend_search_path(const Glib::ustring& path);

  
  /** Looks up style scheme by id.
   *
   * @param scheme_id Style scheme id to find.
   *
   * @return A SourceStyleScheme object.
   */
  Glib::RefPtr<SourceStyleScheme> get_scheme(const Glib::ustring& scheme_id);

  
  /** Looks up style scheme by id.
   *
   * @param scheme_id Style scheme id to find.
   *
   * @return A SourceStyleScheme object.
   */
  Glib::RefPtr<const SourceStyleScheme> get_scheme(const Glib::ustring& scheme_id) const;

  
  /** Mark any currently cached information about the available style schemes
   *  as invalid.
   *
   * All the available style schemes will be reloaded next time the manager is
   * accessed.
   */
  void force_rescan();

  
  /** Returns the ids of the available style schemes.
   *
   * @return An array of string containing the ids of the available style
   * schemes.
   */
  Glib::StringArrayHandle get_scheme_ids() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};//end class SourceStyleSchemeManager

}//end namespace gtksourceview


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates gtksourceview::SourceStyleSchemeManager
   */
  Glib::RefPtr<gtksourceview::SourceStyleSchemeManager> wrap(GtkSourceStyleSchemeManager* object, bool take_copy = false);
}


#endif /* _GTKSOURCEVIEWMM_SOURCESTYLESCHEMEMANAGER_H */


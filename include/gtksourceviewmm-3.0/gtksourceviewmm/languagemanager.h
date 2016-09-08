// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_LANGUAGEMANAGER_H
#define _GTKSOURCEVIEWMM_LANGUAGEMANAGER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* languagemanager.h
 *
 * Copyright (C) 2004-2005 Jae Jang
 * Copyright (C) 2005-2006 Rob Page
 * Copyright (C) 2006 Dodji Seketeli
 * Copyright (C) 2009, 2010, 2011 Krzesimir Nowak
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

/// \file
/// \brief LanguageManager class

#include <vector>

#include <glibmm/object.h>
#include <gtksourceviewmm/language.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceLanguageManager GtkSourceLanguageManager;
typedef struct _GtkSourceLanguageManagerClass GtkSourceLanguageManagerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class LanguageManager_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{


/** Class which provides access to SourceLanguages.
 *
 * LanguageManager is a class which processes language description files
 * and creates and stores Language objects, and provides API to access
 * them.
 *
 * Use get_default() to retrieve the default instance of LanguageManager,
 * and guess_language() to get a Language for given file name and content
 * type.
 */

class LanguageManager : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef LanguageManager CppObjectType;
  typedef LanguageManager_Class CppClassType;
  typedef GtkSourceLanguageManager BaseObjectType;
  typedef GtkSourceLanguageManagerClass BaseClassType;

  // noncopyable
  LanguageManager(const LanguageManager&) = delete;
  LanguageManager& operator=(const LanguageManager&) = delete;

private:  friend class LanguageManager_Class;
  static CppClassType languagemanager_class_;

protected:
  explicit LanguageManager(const Glib::ConstructParams& construct_params);
  explicit LanguageManager(GtkSourceLanguageManager* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  LanguageManager(LanguageManager&& src) noexcept;
  LanguageManager& operator=(LanguageManager&& src) noexcept;

  virtual ~LanguageManager() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourceLanguageManager*       gobj()       { return reinterpret_cast<GtkSourceLanguageManager*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourceLanguageManager* gobj() const { return reinterpret_cast<GtkSourceLanguageManager*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSourceLanguageManager* gobj_copy();

private:

protected:
  LanguageManager();

public:

  /** Creates a new language manager.
   *
   * If you do not need more than one language manager or a private language
   * manager instance then use get_default() instead.
   *
   * @return A LanguageManager.
   */
  
  static Glib::RefPtr<LanguageManager> create();


  /** Returns the default LanguageManager instance.
   *
   * @return A LanguageManager.
   */
  static Glib::RefPtr<LanguageManager> get_default();

 
  /** Gets the list directories where language manager looks for language files.
   *
   * @return An array containg a list of language files directories.
   */
  std::vector<std::string> get_search_path() const;

 
  /** Sets the list of directories where the language manager looks for language
   *  files.
   *
   * @note At the moment this function can be called only before the language
   * files are loaded for the first time. In practice to set a custom search
   * path for a LanguageManager, you have to call this function right
   * after creating it.
   *
   * @param dirs An empty string terminated array of strings.
   */
  void set_search_path(const std::vector<std::string>& dirs);

  /** Resets the list of directories where the language manager looks for
   *  language files to default.
   *
   * @note At the moment this function can be called only before the language
   * files are loaded for the first time. In practice to set a custom search
   * path for a LanguageManager, you have to call this function right
   * after creating it.
   */
  void reset_search_path();

  
  /** Returns the ids of the available languages.
   *
   * @return An array of string containing the ids of the available languages.
   */
  std::vector<std::string> get_language_ids() const;

  
  /** Gets the Language identified by the given @a id in the language
   *  manager.
   *
   * @param id A language id.
   *
   * @return A Language, or empty Glib::RefPtr if there is no language
   * identified by the given @a id.
   */
  Glib::RefPtr<Language> get_language(const std::string& id);

  
  /** Gets the Language identified by the given @a id in the language
   *  manager.
   *
   * @param id A language id.
   *
   * @return A Language, or empty Glib::RefPtr if there is no language
   * identified by the given @a id.
   */
  Glib::RefPtr<const Language> get_language(const std::string& id) const;

  
  /** Picks a Language for given file name and content type,
   *  according to the information in lang files.
   *
   * Either @a filename or @a content_type may be an empty string. This function
   * can be used as follows:
   *
   * @code
   * Glib::RefPtr<Language> lang;
   * lang = lm->guess_language(filename, Glib::ustring());
   * buffer->set_language(lang);
   * @endcode
   *
   * or
   *
   * @code
   * Glib::RefPtr<Language> lang;
   * bool result_uncertain = FALSE;
   * Glib::ustring content_type;
   *
   * content_type = Gio::content_type_guess(filename, 0, 0, &result_uncertain);
   * if (result_uncertain)
   * {
   *   content_type.clear();
   * }
   *
   * lang = lm->guess_language(filename, content_type);
   * buffer->set_language(lang);
   * @endcode
   *
   * etc. Use get_mime_types() and get_globs() if you need full control over
   * file -> language mapping.
   *
   * @param filename A filename, or empty string.
   * @param content_type A content type (as in GIO API), or empty string.
   *
   * @return A Language, or empty Glib::RefPtr if there is no suitable
   * language for given @a filename and/or @a content_type.
   */
  Glib::RefPtr<Language> guess_language(const std::string& filename, const std::string& content_type);

  
  /** Picks a Language for given file name and content type,
   *  according to the information in lang files.
   *
   * Either @a filename or @a content_type may be an empty string. This function
   * can be used as follows:
   *
   * @code
   * Glib::RefPtr<LanguageManager> lm = LanguageManager::get_default();
   * Glib::RefPtr<Language> lang;
   * Glib::RefPtr<Buffer> buffer = Buffer::create();
   * lang = lm->guess_language(filename, Glib::ustring());
   * buffer->set_language(lang);
   * // or just:
   * // Glib::RefPtr<Buffer> buffer = Buffer::create(lang);
   * @endcode
   *
   * or
   *
   * @code
   * Glib::RefPtr<Language> lang;
   * Glib::RefPtr<LanguageManager> lm = LanguageManager::get_default();
   * Glib::RefPtr<Buffer> buffer = Buffer::create();
   * bool result_uncertain = FALSE;
   * Glib::ustring content_type;
   *
   * content_type = Gio::content_type_guess(filename, 0, 0, &result_uncertain);
   * if (result_uncertain)
   * {
   *   content_type.clear();
   * }
   *
   * lang = lm->guess_language(filename, content_type);
   * buffer->set_language(lang);
   * // or just:
   * // Glib::RefPtr<Buffer> buffer = Buffer::create(lang);
   * @endcode
   *
   * etc. Use Language::get_mime_types() and Language::get_globs()
   * if you need full control over file -> language mapping.
   *
   * @param filename A filename, or empty string.
   * @param content_type A content type (as in GIO API), or empty string.
   *
   * @return A Language, or empty Glib::RefPtr if there is no suitable
   * language for given @a filename and/or @a content_type.
   */
  Glib::RefPtr<const Language> guess_language(const std::string& filename, const std::string& content_type) const;

  /** List of directories where the language specification files (.lang) are located.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< std::vector<std::string> > property_search_path() ;

/** List of directories where the language specification files (.lang) are located.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::vector<std::string> > property_search_path() const;

  /** List of the ids of the available languages.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::vector<std::string> > property_language_ids() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} /* namespace Gsv */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gsv::LanguageManager
   */
  Glib::RefPtr<Gsv::LanguageManager> wrap(GtkSourceLanguageManager* object, bool take_copy = false);
}


#endif /* _GTKSOURCEVIEWMM_LANGUAGEMANAGER_H */


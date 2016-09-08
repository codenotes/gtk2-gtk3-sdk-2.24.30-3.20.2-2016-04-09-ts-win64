// Generated by gmmproc 2.48.1 -- DO NOT MODIFY!
#ifndef _GLIBMM_VARIANTDICT_H
#define _GLIBMM_VARIANTDICT_H


/*
 * Copyright (C) 2014 The glibmm Development Team
 *
 * This library is free software, ) you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, ) either
 * version 2.1 of the License, or(at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, ) without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library, ) if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <glibmm/variant.h>


namespace Glib
{

/** VariantDict is a mutable interface to Variant dictionaries.
 *
 * It can be used for doing a sequence of dictionary lookups in an
 * efficient way on an existing Variant dictionary or it can be used
 * to construct new dictionaries with a hashtable-like interface.  It
 * can also be used for taking existing dictionaries and modifying them
 * in order to create new ones.
 *
 * newin{2,40}
 */
class VariantDict final
{
  //GVariantDict is registered as a boxed type, but it has ref/unref functions instead of copy/free,
  //so we use it via RefPtr.
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = VariantDict;
  using BaseObjectType = GVariantDict;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GVariantDict*       gobj();

  ///Provides access to the underlying C instance.
  const GVariantDict* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GVariantDict* gobj_copy() const;

  VariantDict() = delete;

  // noncopyable
  VariantDict(const VariantDict&) = delete;
  VariantDict& operator=(const VariantDict&) = delete;

protected:
  // Do not derive this.  Glib::VariantDict can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
  
  /** Allocates and initialises a new VariantDict.
   * 
   * You should call g_variant_dict_unref() on the return value when it
   * is no longer needed.  The memory will not be automatically freed by
   * any other call.
   * 
   * In some cases it may be easier to place a VariantDict directly on
   * the stack of the calling function and initialise it with
   * g_variant_dict_init().  This is particularly useful when you are
   * using VariantDict to construct a Variant.
   * 
   * @newin{2,40}
   * 
   * @param from_asv The Variant with which to initialise the
   * dictionary.
   * @return A VariantDict.
   */
  static Glib::RefPtr<VariantDict> create(const VariantBase& from_asv);

  /// A create() convenience overload.
  static Glib::RefPtr<VariantDict> create();


//TODO: Add a method overload that does not take expected_type (which can be null),
//just returning a VariantBase that should be cast_dynamic()ed?

  /** Looks up a value in the VariantDict. See also lookup_value().
   *
   * If the @a key is not found the false is returned.
   *
   * The @a expected_type string specifies what type of value is expected.
   * If the value associated with @a key has a different type then false is
   * returned.
   *
   * If the key is found and the value has the correct type, it is
   * returned in the @a value output variable.
   */
  bool lookup_value_variant(const Glib::ustring& key, const VariantType& expected_type, VariantBase& value) const;
  

  /** Looks up a value in the VariantDict.
   *
   * If the @a key is not found the false is returned.
   *
   * If the value associated with @a key has a different type than expected then false is
   * returned.
   *
   * If the key is found and the value has the correct type, it is
   * returned in the @a value output variable.
   */
  template <typename T_Value>
  bool lookup_value(const Glib::ustring& key, T_Value& value) const;
  

  /** Checks if @a key exists in @a dict.
   * 
   * @newin{2,40}
   * 
   * @param key The key to lookup in the dictionary.
   * @return <tt>true</tt> if @a key is in @a dict.
   */
  bool contains(const Glib::ustring& key) const;

  
  /** Inserts (or replaces) a key in a VariantDict.
   * 
   *  @a value is consumed if it is floating.
   * 
   * @newin{2,40}
   * 
   * @param key The key to insert a value for.
   * @param value The value to insert.
   */
  void insert_value_variant(const Glib::ustring& key, const VariantBase& value);

  /** Inserts (or replaces) a key in a VariantDict.
   * 
   * @param key The key to insert a value for.
   * @param value The value to insert.
   */
  template <typename T_Value>
  void insert_value(const Glib::ustring& key, const T_Value& value);


  /** Removes a key and its associated value from a VariantDict.
   * 
   * @newin{2,40}
   * 
   * @param key The key to remove.
   * @return <tt>true</tt> if the key was found and removed.
   */
  bool remove(const Glib::ustring& key);

  
  /** Releases all memory associated with a VariantDict without freeing
   * the VariantDict structure itself.
   * 
   * It typically only makes sense to do this on a stack-allocated
   * VariantDict if you want to abort building the value part-way
   * through.  This function need not be called if you call
   * g_variant_dict_end() and it also doesn't need to be called on dicts
   * allocated with g_variant_dict_new (see g_variant_dict_unref() for
   * that).
   * 
   * It is valid to call this function on either an initialised
   * VariantDict or one that was previously cleared by an earlier call
   * to g_variant_dict_clear() but it is not valid to call this function
   * on uninitialised memory.
   * 
   * @newin{2,40}
   */
  void clear();

  
};

template <typename T_Value>
void VariantDict::insert_value(const Glib::ustring& key, const T_Value& value)
{
  using type_glib_variant = Glib::Variant<T_Value>;

  //TODO: Can we do any check like this here, before glib does?
  //g_return_val_if_fail(
  //  g_variant_type_equal(g_action_get_parameter_type(const_cast<GAction*>(gobj())), type_glib_variant::variant_type().gobj()),
  //  Glib::ustring());
  return insert_value_variant(key, type_glib_variant::create(value));
}

template <typename T_Value>
bool VariantDict::lookup_value(const Glib::ustring& key, T_Value& value) const
{
  value = T_Value(); //Make sure that it is initialized.

  using type_glib_variant = Glib::Variant<T_Value>;

  //TODO: Can we do any check like this here, before glib does?
  //g_variant_type_equal(g_action_group_get_action_state_type(const_cast<GActionGroup*>(gobj()), action_name.c_str()), type_glib_variant::variant_type().gobj()));

  Glib::VariantBase variantBase;
  const bool result = lookup_value_variant(key, type_glib_variant::variant_type(), variantBase);
  if(!result)
    return result;

  try
  {
    const type_glib_variant variantDerived = variantBase.cast_dynamic<type_glib_variant>(variantBase);
    value = variantDerived.get();
  }
  catch(const std::bad_cast& ex)
  {
    return false;
  }

  return result;
}

} //namespace Glib


namespace Glib
{

  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Glib::VariantDict
   */
  Glib::RefPtr<Glib::VariantDict> wrap(GVariantDict* object, bool take_copy = false);

} // namespace Glib


#endif /* _GLIBMM_VARIANTDICT_H */


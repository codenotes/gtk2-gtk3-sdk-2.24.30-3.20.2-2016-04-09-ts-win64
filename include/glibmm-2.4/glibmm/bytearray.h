// Generated by gmmproc 2.48.1 -- DO NOT MODIFY!
#ifndef _GLIBMM_BYTEARRAY_H
#define _GLIBMM_BYTEARRAY_H


/* Copyright (C) 2013 The glibmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <cstddef> // std::size_t
#include <sigc++/slot.h>
#include <glibmm/refptr.h>
#include <glibmm/value.h>
#include <glibmm/wrap.h>
#include <glib.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GByteArray GByteArray;
#endif

namespace Glib
{

/** ByteArray - Arrays of bytes.
 * ByteArray is a mutable array of bytes, to provide arrays of bytes which grow
 * automatically as elements are added.
 *
 * To create a new ByteArray use create(). To add elements to a ByteArray, use
 * append(), and prepend().
 *
 * To set the size of a ByteArray, use set_size().
 *
 * @newin{2,36}
 */
class ByteArray final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = ByteArray;
  using BaseObjectType = GByteArray;
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
  GByteArray*       gobj();

  ///Provides access to the underlying C instance.
  const GByteArray* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GByteArray* gobj_copy() const;

  ByteArray() = delete;

  // noncopyable
  ByteArray(const ByteArray&) = delete;
  ByteArray& operator=(const ByteArray&) = delete;

protected:
  // Do not derive this.  Glib::ByteArray can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
  /** A Slot type to compare two elements in the array.  The slot should return
   * -1 if the first value is less than the second, 0 if they are equal and 1
   * if the first value is greater than the second.
   *
   * Slot Prototype:
   *
   * <code>
   * int compare(const guint8* first, const guint8* second);
   * </code>
   */
  typedef sigc::slot<int, const guint8*, const guint8*> SlotCompare;

  
  /** Creates a new ByteArray with a reference count of 1.
   * 
   * @return The new ByteArray.
   */
  static Glib::RefPtr<ByteArray> create();

  
  /** Adds the given bytes to the end of the ByteArray.
   * The array will grow in size automatically if necessary.
   * 
   * @param data The byte data to be added.
   * @param len The number of bytes to add.
   * @return The ByteArray.
   */
  Glib::RefPtr<ByteArray> append(const guint8* data, guint len);
  
  /** Adds the given data to the start of the ByteArray.
   * The array will grow in size automatically if necessary.
   * 
   * @param data The byte data to be added.
   * @param len The number of bytes to add.
   * @return The ByteArray.
   */
  Glib::RefPtr<ByteArray> prepend(const guint8* data, guint len);

  /** Gets the size of the byte array.
   * @return The size.
   * @newin{2,36}
   */
  guint size() const;

  /** Gets the data of the byte array.
   * @return The data.
   * @newin{2,36}
   */
  guint8* get_data();

  /** Gets the data of the byte array.
   * @return The data.
   * @newin{2,36}
   */
  const guint8* get_data() const;

  
  /** Removes the byte at the given index from a ByteArray.
   * The following bytes are moved down one place.
   * 
   * @param index The index of the byte to remove.
   * @return The ByteArray.
   */
  Glib::RefPtr<ByteArray> remove_index(guint index_);
  
  /** Removes the byte at the given index from a ByteArray. The last
   * element in the array is used to fill in the space, so this function
   * does not preserve the order of the ByteArray. But it is faster
   * than g_byte_array_remove_index().
   * 
   * @param index The index of the byte to remove.
   * @return The ByteArray.
   */
  Glib::RefPtr<ByteArray> remove_index_fast(guint index_);
  
  /** Removes the given number of bytes starting at the given index from a
   * ByteArray.  The following elements are moved to close the gap.
   * 
   * @newin{2,4}
   * 
   * @param index The index of the first byte to remove.
   * @param length The number of bytes to remove.
   * @return The ByteArray.
   */
  Glib::RefPtr<ByteArray> remove_range(guint index_, guint length);

  
  /** Like g_byte_array_sort(), but the comparison function takes an extra
   * user data argument.
   * 
   * @param slot Comparison function.
   */
  void sort(const SlotCompare& slot);
  

  /** Sets the size of the ByteArray, expanding it if necessary.
   * 
   * @param length The new size of the ByteArray.
   * @return The ByteArray.
   */
  Glib::RefPtr<ByteArray> set_size(guint length);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type() G_GNUC_CONST;
#endif


};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value< Glib::RefPtr<Glib::ByteArray> > : public ValueBase_Boxed
{
public:
  static GType value_type() { return Glib::ByteArray::get_type(); }
  void set(const Glib::RefPtr<Glib::ByteArray>& array) { set_boxed(Glib::unwrap(array)); }
  Glib::RefPtr<Glib::ByteArray> get()                  { return Glib::RefPtr<Glib::ByteArray>(reinterpret_cast<Glib::ByteArray*>(get_boxed())); }
};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


namespace Glib
{

  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Glib::ByteArray
   */
  Glib::RefPtr<Glib::ByteArray> wrap(GByteArray* object, bool take_copy = false);

} // namespace Glib


#endif /* _GLIBMM_BYTEARRAY_H */

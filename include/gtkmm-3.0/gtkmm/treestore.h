// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TREESTORE_H
#define _GTKMM_TREESTORE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright(C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or(at your option) any later version.
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

#include <vector>

#include <gtkmm/treeiter.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/treesortable.h>
#include <gtkmm/treedragdest.h>
#include <gtkmm/treedragsource.h>
#include <gtkmm/buildable.h>
// We couldn't include it in treemodel.h, but doing it here makes it easier for people.
#include <gtkmm/treepath.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkTreeStore GtkTreeStore;
typedef struct _GtkTreeStoreClass GtkTreeStoreClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class TreeStore_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/**
 * @ingroup TreeView
 */

class TreeStore :
  public Glib::Object,
  public Gtk::TreeModel,
  public TreeSortable,
  public TreeDragSource,
  public TreeDragDest,
  public Buildable
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef TreeStore CppObjectType;
  typedef TreeStore_Class CppClassType;
  typedef GtkTreeStore BaseObjectType;
  typedef GtkTreeStoreClass BaseClassType;

  // noncopyable
  TreeStore(const TreeStore&) = delete;
  TreeStore& operator=(const TreeStore&) = delete;

private:  friend class TreeStore_Class;
  static CppClassType treestore_class_;

protected:
  explicit TreeStore(const Glib::ConstructParams& construct_params);
  explicit TreeStore(GtkTreeStore* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  TreeStore(TreeStore&& src) noexcept;
  TreeStore& operator=(TreeStore&& src) noexcept;

  ~TreeStore() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkTreeStore*       gobj()       { return reinterpret_cast<GtkTreeStore*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkTreeStore* gobj() const { return reinterpret_cast<GtkTreeStore*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkTreeStore* gobj_copy();

private:

  
protected:
  /** When using this constructor, you must use set_column_types() immediately afterwards.
   * This can be useful when deriving from this class, with a fixed TreeModelColumnRecord
   * that is a member of the class.
   * There is no create() method that corresponds to this constructor, because this
   * constructor should only be used by derived classes.
   */
  TreeStore();

  explicit TreeStore(const TreeModelColumnRecord& columns);

public:
  /** Instantiate a new TreeStore.
   * @param columns The column types for this tree model.
   * @result The new TreeStore.
   */
  
  static Glib::RefPtr<TreeStore> create(const TreeModelColumnRecord& columns);


  void set_column_types(const TreeModelColumnRecord& columns);
  

  /** Removes the given row from the list store.
   * @param iter The iterator to the row to be removed.
   * @result An iterator to the next row, or end() if there is none.
   */
  iterator erase(const iterator& iter);
  

  //TODO: Make this documentation similar to documentation for Standard C++ insert methods.
  /** Creates a new row before the position.
   * If iter is end() then a new row will be appended to the list.
   * The row will be empty - to fill in values, you need to dereference the returned iterator and use Row::operator[] or Row::set_value().
   * See also prepend() and append().
   *
   * @param iter An iterator to the row before which the new row will be inserted.
   * @result An iterator to the new row.
   */
  iterator insert(const iterator& iter);
  

  /** Creates a new row after the position.
   * If iter is end() then a new row will be prepended to the list.
   * The row will be empty - to fill in values, you need to dereference the returned iterator and use Row::operator[] or Row::set_value().
   * See also prepend() and append().
   *
   * @param iter An iterator to the row after which the new row will be inserted.
   * @result An iterator to the new row.
   */
  iterator insert_after(const iterator& iter);
  

  /** Creates a new row at the start of the top-level.
   * The row will be empty - to fill in values, you need to dereference the returned iterator and use Row::operator[] or Row::set_value().
   * See also insert() and append().
   *
   * @result An iterator to the new row.
   */
  iterator prepend();

  /** Creates a new row at the start of the row's children.
   * The row will be empty - to fill in values, you need to dereference the returned iterator and use Row::operator[] or Row::set_value().
   * See also insert() and append().
   *
   * @param node The list of the parent row's children, as returned by Gtk::TreeModel::iterator::children().
   * @result An iterator to the new row.
   */
  iterator prepend(const TreeNodeChildren& node);


  /** Creates a new row at the end of the top-level.
   * The row will be empty - to fill in values, you need to dereference the returned iterator and use Row::operator[] or Row::set_value().
   * See also insert() and prepend().
   *
   * @result An iterator to the new row.
   */
  iterator append();

  /** Creates a new row at the end of the row's children.
   * The row will be empty - to fill in values, you need to dereference the returned iterator and use Row::operator[] or Row::set_value().
   * See also insert() and prepend().
   *
   * @param node The list of the parent row's children, as returned by Gtk::TreeModel::iterator::children().
   * @result An iterator to the new row.
   */
  iterator append(const TreeNodeChildren& node);

  
  /** Swaps @a a and @a b in the same level of @a tree_store. Note that this function
   * only works with unsorted stores.
   * 
   * @newin{2,2}
   * 
   * @param a A Gtk::TreeIter.
   * @param b Another Gtk::TreeIter.
   */
  void iter_swap(const iterator& a, const iterator& b);

  /** Moves @a source to the position at @a destination.
   * @a source and @a destination should be at the same level.
   * Note that this function only works with unsorted stores.
   * @param source The row that should be moved.
   * @param destination The position to move to.
   */
  void move(const iterator& source, const iterator& destination);

  /** Reorders the children of @a node to follow the order indicated by @a new_order.
   * Note that this function only works with unsorted stores.
   */
  void reorder(const TreeNodeChildren& node, const std::vector<int>& new_order);

  
  /** Removes all rows from @a tree_store
   */
  void clear();
  
  /** Returns <tt>true</tt> if @a iter is an ancestor of @a descendant.  That is, @a iter is the
   * parent (or grandparent or great-grandparent) of @a descendant.
   * 
   * @param iter A valid Gtk::TreeIter.
   * @param descendant A valid Gtk::TreeIter.
   * @return <tt>true</tt>, if @a iter is an ancestor of @a descendant.
   */
  bool is_ancestor(const iterator& iter, const iterator& descendant) const;
  
  /** Returns the depth of @a iter.  This will be 0 for anything on the root level, 1
   * for anything down a level, etc.
   * 
   * @param iter A valid Gtk::TreeIter.
   * @return The depth of @a iter.
   */
  int iter_depth(const iterator& iter) const;

  
  /** WARNING: This function is slow. Only use it for debugging and/or testing
   * purposes.
   * 
   * Checks if the given iter is a valid iter for this Gtk::TreeStore.
   * 
   * @newin{2,2}
   * 
   * @param iter A Gtk::TreeIter.
   * @return <tt>true</tt> if the iter is valid, <tt>false</tt> if the iter is invalid.
   */
  bool iter_is_valid(const iterator& iter) const;

protected:
  void set_value_impl(const iterator& row, int column, const Glib::ValueBase& value) override;
  

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
   * @relates Gtk::TreeStore
   */
  Glib::RefPtr<Gtk::TreeStore> wrap(GtkTreeStore* object, bool take_copy = false);
}


#endif /* _GTKMM_TREESTORE_H */


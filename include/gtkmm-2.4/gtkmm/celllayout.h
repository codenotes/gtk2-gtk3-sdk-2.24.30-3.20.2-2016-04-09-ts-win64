// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_CELLLAYOUT_H
#define _GTKMM_CELLLAYOUT_H


#include <glibmm.h>

/* $Id: celllayout.hg,v 1.12 2006/05/10 20:59:27 murrayc Exp $ */

/* Copyright (C) 2003 The gtkmm Development Team
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

#include <glibmm/interface.h>
#include <gtkmm/cellrenderer.h>
#include <gtkmm/cellrenderer_generation.h>
#include <gtkmm/treemodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkCellLayoutIface GtkCellLayoutIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellLayout GtkCellLayout;
typedef struct _GtkCellLayoutClass GtkCellLayoutClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CellLayout_Class; } // namespace Gtk
namespace Gtk
{

/** An interface for packing cells.
 * CellLayout is an interface to be implemented by all objects which want to provide a TreeView::Column-like API
 * for packing cells, setting attributes and data funcs.
 */

class CellLayout : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef CellLayout CppObjectType;
  typedef CellLayout_Class CppClassType;
  typedef GtkCellLayout BaseObjectType;
  typedef GtkCellLayoutIface BaseClassType;

private:
  friend class CellLayout_Class;
  static CppClassType celllayout_class_;

  // noncopyable
  CellLayout(const CellLayout&);
  CellLayout& operator=(const CellLayout&);

protected:
  CellLayout(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit CellLayout(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit CellLayout(GtkCellLayout* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~CellLayout();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkCellLayout*       gobj()       { return reinterpret_cast<GtkCellLayout*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkCellLayout* gobj() const { return reinterpret_cast<GtkCellLayout*>(gobject_); }

private:


public:

  template <class ColumnType> inline
  void pack_start(const TreeModelColumn<ColumnType>& model_column, bool expand = true);
  

  /** Packs the @a cell into the beginning of @a cell_layout. If @a expand is <tt>false</tt>,
   * then the @a cell is allocated no more space than it needs. Any unused space
   * is divided evenly between cells for which @a expand is <tt>true</tt>.
   * 
   * Note that reusing the same cell renderer is not supported. 
   * 
   * @newin{2,4}
   * @param cell A Gtk::CellRenderer.
   * @param expand <tt>true</tt> if @a cell is to be given extra space allocated to @a cell_layout.
   */
  void pack_start(CellRenderer& cell, bool expand =  true);
  
  /** Adds the @a cell to the end of @a cell_layout. If @a expand is <tt>false</tt>, then the
   *  @a cell is allocated no more space than it needs. Any unused space is
   * divided evenly between cells for which @a expand is <tt>true</tt>.
   * 
   * Note that reusing the same cell renderer is not supported. 
   * 
   * @newin{2,4}
   * @param cell A Gtk::CellRenderer.
   * @param expand <tt>true</tt> if @a cell is to be given extra space allocated to @a cell_layout.
   */
  void pack_end(CellRenderer& cell, bool expand =  true);

   
  /** Return value: a list of cell renderers.
   * @return A list of cell renderers.
   * 
   * @newin{2,12}.
   */
  Glib::ListHandle<CellRenderer*> get_cells();
  
  /** Return value: a list of cell renderers.
   * @return A list of cell renderers.
   * 
   * @newin{2,12}.
   */
  Glib::ListHandle<const CellRenderer*> get_cells() const;

  
  /** Unsets all the mappings on all renderers on @a cell_layout and
   * removes all renderers from @a cell_layout.
   * 
   * @newin{2,4}
   */
  void clear();

   //I think this is just a convenience method, equivalent to clear() and multiple add_attribute()s. murrayc.

  
  /** Adds an attribute mapping to the list in @a cell_layout. The @a column is the
   * column of the model to get a value from, and the @a attribute is the
   * parameter on @a cell to be set from the value. So for example if column 2
   * of the model contains strings, you could have the "text" attribute of a
   * Gtk::CellRendererText get its values from column 2.
   * 
   * @newin{2,4}
   * @param cell A Gtk::CellRenderer.
   * @param attribute An attribute on the renderer.
   * @param column The column position on the model to get the attribute from.
   */
  void add_attribute(CellRenderer& cell, const Glib::ustring& attribute, int column);

  void add_attribute(const Glib::PropertyProxy_Base& property, const TreeModelColumnBase& column);

  void add_attribute(CellRenderer& cell, const Glib::ustring& attribute, const TreeModelColumnBase& column);

  //For instance, void on_cell_data(const TreeModel::const_iterator& iter)
  typedef sigc::slot<void, const TreeModel::const_iterator&> SlotCellData;

  void set_cell_data_func(CellRenderer& cell, const SlotCellData& slot);
  

  /** Clears all existing attributes previously set with
   * set_attributes().
   * 
   * @newin{2,4}
   * @param cell A Gtk::CellRenderer to clear the attribute mapping on.
   */
  void clear_attributes(CellRenderer& cell);

  
  /** Re-inserts @a cell at @a position. Note that @a cell has already to be packed
   * into @a cell_layout for this to function properly.
   * 
   * @newin{2,4}
   * @param cell A Gtk::CellRenderer to reorder.
   * @param position New position to insert @a cell at.
   */
  void reorder(CellRenderer& cell, int position);

protected:
    virtual void pack_start_vfunc(CellRenderer* cell, bool expand);

    virtual void pack_end_vfunc(CellRenderer* cell, bool expand);

    virtual void clear_vfunc();


    virtual void add_attribute_vfunc(CellRenderer* cell, const Glib::ustring& attribute, int column);


//TODO (added in GTK+ 2.4):  _WRAP_VFUNC(void set_cell_data_func(CellRenderer* cell, GtkCellLayoutDataFunc func, gpointer func_data, GDestroyNotify destroy), gtk_cell_layout_set_cell_data_func)
    virtual void clear_attributes_vfunc(CellRenderer* cell);

    virtual void reorder_vfunc(CellRenderer* cell, int position);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

template<class T_ModelColumnType>
void CellLayout::pack_start(const TreeModelColumn<T_ModelColumnType>& column, bool expand)
{
  //Generate appropriate Renderer for the column:
  CellRenderer* pCellRenderer = manage( CellRenderer_Generation::generate_cellrenderer<T_ModelColumnType>() );

  //Use the renderer:
  pack_start(*pCellRenderer, expand);

  //Make the renderer render the column:
  add_attribute(pCellRenderer->_property_renderable(), column);
}

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CellLayout
   */
  Glib::RefPtr<Gtk::CellLayout> wrap(GtkCellLayout* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_CELLLAYOUT_H */


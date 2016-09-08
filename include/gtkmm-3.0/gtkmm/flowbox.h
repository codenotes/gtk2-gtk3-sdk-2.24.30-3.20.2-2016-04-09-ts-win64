// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_FLOWBOX_H
#define _GTKMM_FLOWBOX_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm/container.h>
#include <gtkmm/orientable.h>
#include <gtkmm/flowboxchild.h>
#include <vector>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkFlowBox GtkFlowBox;
typedef struct _GtkFlowBoxClass GtkFlowBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class FlowBox_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A container that allows reflowing its children.
 *
 * A FlowBox positions child widgets in sequence according to its
 * orientation.
 *
 * For instance, with the horizontal orientation, the widgets will be
 * arranged from left to right, starting a new row under the previous
 * row when necessary. Reducing the width in this case will require more
 * rows, so a larger height will be requested.
 *
 * Likewise, with the vertical orientation, the widgets will be arranged
 * from top to bottom, starting a new column to the right when necessary.
 * Reducing the height will require more columns, so a larger width will
 * be requested.
 *
 * The children of a FlowBox can be dynamically sorted and filtered.
 *
 * Although a FlowBox must have only FlowBoxChild children,
 * you can add any kind of widget to it via Container::add(), and
 * a FlowBoxChild widget will automatically be inserted between
 * the box and the widget.
 *
 * Also see ListBox.
 *
 * @ingroup Widgets
 * @ingroup Containers
 *
 * @newin{3,12}
 */

class FlowBox
  : public Container,
    public Orientable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef FlowBox CppObjectType;
  typedef FlowBox_Class CppClassType;
  typedef GtkFlowBox BaseObjectType;
  typedef GtkFlowBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  FlowBox(FlowBox&& src) noexcept;
  FlowBox& operator=(FlowBox&& src) noexcept;

  // noncopyable
  FlowBox(const FlowBox&) = delete;
  FlowBox& operator=(const FlowBox&) = delete;

  ~FlowBox() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class FlowBox_Class;
  static CppClassType flowbox_class_;

protected:
  explicit FlowBox(const Glib::ConstructParams& construct_params);
  explicit FlowBox(GtkFlowBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkFlowBox*       gobj()       { return reinterpret_cast<GtkFlowBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkFlowBox* gobj() const { return reinterpret_cast<GtkFlowBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_child_activated().
  virtual void on_child_activated(FlowBoxChild* child);
  /// This is a default handler for the signal signal_selected_children_changed().
  virtual void on_selected_children_changed();


private:

  
public:

  /** Creates a FlowBox.
   */
  FlowBox();

  /** For instance: void foreach_child(FlowBox* box, FlowBoxChild* child);
   *
   * A function used by FlowBox::selected_foreach().
   * It will be called on every selected child of the @a box.
   *
   * @param box FlowBox containing the selected children
   * @param child Each selected FlowBoxChild
   *
   * @newin{3,12}
   */
  typedef sigc::slot<void, FlowBox*, FlowBoxChild*> SlotSelectedForeach;

  /** For instance: bool on_filter(FlowBoxChild* child);
   *
   * Will be called for each child after a call to FlowBox::set_filter_func(),
   * and it will continue to be called each time a child changes (via
   * FlowBoxChild::changed()) or when FlowBox::invalidate_filter()
   * is called.
   *
   * @param child A FlowBoxChild that may be filtered
   * @returns <tt>true</tt> if the child should be visible, <tt>false</tt> otherwise
   *
   * @newin{3,12}
   */
  typedef sigc::slot<bool, FlowBoxChild*> SlotFilter;

  /** For instance: int on_sort(FlowBoxChild* child1, FlowBoxChild* child2)
   *
   * Will be called for each child after a call to FlowBox::set_sort_func(),
   * and will continue to be called each time a child changes (via
   * FlowBoxChild::changed()) and when FlowBox::invalidate_sort()
   * is called.
   *
   * @param child1 The first child.
   * @param child2 The second child.
   * @returns < 0 if @a child1 should be before @a child2, 0 if
   * they are equal, and > 0 otherwise
   *
   * @newin{3,12}
   */
  typedef sigc::slot<int, FlowBoxChild*, FlowBoxChild*> SlotSort;

  
  /** Sets the Gtk::FlowBox::property_homogeneous() property of @a box, controlling
   * whether or not all children of @a box are given equal space
   * in the box.
   * 
   * @newin{3,12}
   * 
   * @param homogeneous <tt>true</tt> to create equal allotments,
   * <tt>false</tt> for variable allotments.
   */
  void set_homogeneous(bool homogeneous =  true);
  
  /** Returns whether the box is homogeneous (all children are the
   * same size). See Gtk::Box::set_homogeneous().
   * 
   * @newin{3,12}
   * 
   * @return <tt>true</tt> if the box is homogeneous.
   */
  bool get_homogeneous() const;

  
  /** Sets the vertical space to add between children.
   * See the Gtk::FlowBox::property_row_spacing() property.
   * 
   * @newin{3,12}
   * 
   * @param spacing The spacing to use.
   */
  void set_row_spacing(guint spacing);
  
  /** Gets the vertical spacing.
   * 
   * @newin{3,12}
   * 
   * @return The vertical spacing.
   */
  guint get_row_spacing() const;

  
  /** Sets the horizontal space to add between children.
   * See the Gtk::FlowBox::property_column_spacing() property.
   * 
   * @newin{3,12}
   * 
   * @param spacing The spacing to use.
   */
  void set_column_spacing(guint spacing);
  
  /** Gets the horizontal spacing.
   * 
   * @newin{3,12}
   * 
   * @return The horizontal spacing.
   */
  guint get_column_spacing() const;

  
  /** Sets the minimum number of children to line up
   * in @a box’s orientation before flowing.
   * 
   * @newin{3,12}
   * 
   * @param n_children The minimum number of children per line.
   */
  void set_min_children_per_line(guint n_children);
  
  /** Gets the minimum number of children per line.
   * 
   * @newin{3,12}
   * 
   * @return The minimum number of children per line.
   */
  guint get_min_children_per_line() const;

  
  /** Sets the maximum number of children to request and
   * allocate space for in @a box’s orientation.
   * 
   * Setting the maximum number of children per line
   * limits the overall natural size request to be no more
   * than @a n_children children long in the given orientation.
   * 
   * @newin{3,12}
   * 
   * @param n_children The maximum number of children per line.
   */
  void set_max_children_per_line(guint n_children);
  
  /** Gets the maximum number of children per line.
   * 
   * @newin{3,12}
   * 
   * @return The maximum number of children per line.
   */
  guint get_max_children_per_line() const;

  
  /** If @a single is <tt>true</tt>, children will be activated when you click
   * on them, otherwise you need to double-click.
   * 
   * @newin{3,12}
   * 
   * @param single <tt>true</tt> to emit child-activated on a single click.
   */
  void set_activate_on_single_click(bool single =  true);
  
  /** Returns whether children activate on single clicks.
   * 
   * @newin{3,12}
   * 
   * @return <tt>true</tt> if children are activated on single click,
   * <tt>false</tt> otherwise.
   */
  bool get_activate_on_single_click() const;

  
  /** Inserts the @a widget into @a box at @a position.
   * 
   * If a sort function is set, the widget will actually be inserted
   * at the calculated position and this function has the same effect
   * as Gtk::Container::add().
   * 
   * If @a position is -1, or larger than the total number of children
   * in the @a box, then the @a widget will be appended to the end.
   * 
   * @newin{3,12}
   * 
   * @param widget The Gtk::Widget to add.
   * @param position The position to insert @a child in.
   */
  void insert(Widget& widget, int position);

  
  /** Gets the nth child in the @a box.
   * 
   * @newin{3,12}
   * 
   * @param idx The position of the child.
   * @return The child widget, which will
   * always be a Gtk::FlowBoxChild or <tt>nullptr</tt> in case no child widget
   * with the given index exists.
   */
  FlowBoxChild* get_child_at_index(int idx);
  
  /** Gets the nth child in the @a box.
   * 
   * @newin{3,12}
   * 
   * @param idx The position of the child.
   * @return The child widget, which will
   * always be a Gtk::FlowBoxChild or <tt>nullptr</tt> in case no child widget
   * with the given index exists.
   */
  const FlowBoxChild* get_child_at_index(int idx) const;

  /** Calls a function for each selected child.
   *
   * Note that the selection cannot be modified from within
   * this function.
   *
   * @param slot The function to call for each selected child
   *
   * @newin{3,12}
   */
  void selected_foreach(const SlotSelectedForeach& slot);
  

  // transfer container
 

  /** Creates a list of all selected children.
   * 
   * @newin{3,12}
   * 
   * @return A List containing the Gtk::Widget for each selected child.
   * Free with Glib::list_free() when done.
   */
  std::vector< Gtk::FlowBoxChild*> get_selected_children();
 

  /** Creates a list of all selected children.
   * 
   * @newin{3,12}
   * 
   * @return A List containing the Gtk::Widget for each selected child.
   * Free with Glib::list_free() when done.
   */
  std::vector< const Gtk::FlowBoxChild*> get_selected_children() const;

  
  /** Selects a single child of @a box, if the selection
   * mode allows it.
   * 
   * @newin{3,12}
   * 
   * @param child A child of @a box.
   */
  void select_child(FlowBoxChild& child);
  
  /** Unselects a single child of @a box, if the selection
   * mode allows it.
   * 
   * @newin{3,12}
   * 
   * @param child A child of @a box.
   */
  void unselect_child(FlowBoxChild& child);

  
  /** Select all children of @a box, if the selection
   * mode allows it.
   * 
   * @newin{3,12}
   */
  void select_all();
  
  /** Unselect all children of @a box, if the selection
   * mode allows it.
   * 
   * @newin{3,12}
   */
  void unselect_all();

  
  /** Sets how selection works in @a box.
   * See Gtk::SelectionMode for details.
   * 
   * @newin{3,12}
   * 
   * @param mode The new selection mode.
   */
  void set_selection_mode(SelectionMode mode =  SELECTION_NONE);
  
  /** Gets the selection mode of @a box.
   * 
   * @newin{3,12}
   * 
   * @return The Gtk::SelectionMode.
   */
  SelectionMode get_selection_mode() const;

  
  /** Hooks up an adjustment to focus handling in @a box.
   * The adjustment is also used for autoscrolling during
   * rubberband selection. See Gtk::ScrolledWindow::get_hadjustment()
   * for a typical way of obtaining the adjustment, and
   * set_vadjustment()for setting the vertical
   * adjustment.
   * 
   * The adjustments have to be in pixel units and in the same
   * coordinate system as the allocation for immediate children
   * of the box.
   * 
   * @newin{3,12}
   * 
   * @param adjustment An adjustment which should be adjusted
   * when the focus is moved among the descendents of @a container.
   */
  void set_hadjustment(const Glib::RefPtr<Adjustment>& adjustment);
  
  /** Hooks up an adjustment to focus handling in @a box.
   * The adjustment is also used for autoscrolling during
   * rubberband selection. See Gtk::ScrolledWindow::get_vadjustment()
   * for a typical way of obtaining the adjustment, and
   * set_hadjustment()for setting the horizontal
   * adjustment.
   * 
   * The adjustments have to be in pixel units and in the same
   * coordinate system as the allocation for immediate children
   * of the box.
   * 
   * @newin{3,12}
   * 
   * @param adjustment An adjustment which should be adjusted
   * when the focus is moved among the descendents of @a container.
   */
  void set_vadjustment(const Glib::RefPtr<Adjustment>& adjustment);

  /** Sets a filter function.
   *
   * By setting a filter function on the FlowBox one can decide dynamically
   * which of the children to show. For instance, to implement a search
   * function that only shows the children matching the search terms.
   *
   * The @a slot will be called for each child after the call, and
   * it will continue to be called each time a child changes (via
   * FlowBoxChild::changed()) or when FlowBox::invalidate_filter()
   * is called.
   *
   * @param slot Callback that lets you filter which children to show
   *
   * @newin{3,12}
   */
  void set_filter_func(const SlotFilter& slot);
  

  /** Removes the filter function, if any.
   *
   * @newin{3,12}
   */
  void unset_filter_func();

  
  /** Updates the filtering for all children.
   * 
   * Call this function when the result of the filter
   * function on the @a box is changed due ot an external
   * factor. For instance, this would be used if the
   * filter function just looked for a specific search
   * term, and the entry with the string has changed.
   * 
   * @newin{3,12}
   */
  void invalidate_filter();

  /** Sets a sort function.
   *
   * By setting a sort function on the FlowBox, one can dynamically
   * reorder the children of the box, based on the contents of
   * the children.
   *
   * The @a slot will be called for each child after the call,
   * and will continue to be called each time a child changes (via
   * FlowBoxChild::changed()) and when FlowBox::invalidate_sort()
   * is called.
   *
   * @param slot The sort function
   *
   * @newin{3,12}
   */
  void set_sort_func(const SlotSort& slot);
  

  /** Removes the sort function, if any.
   *
   * @newin{3,12}
   */
  void unset_sort_func();

  
  /** Updates the sorting for all children.
   * 
   * Call this when the result of the sort function on
   *  @a box is changed due to an external factor.
   * 
   * @newin{3,12}
   */
  void invalidate_sort();


  /** The selection mode used by the flow  box.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SelectionMode > property_selection_mode() ;

/** The selection mode used by the flow  box.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SelectionMode > property_selection_mode() const;

  /** Determines whether children can be activated with a single
   * click, or require a double-click.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_activate_on_single_click() ;

/** Determines whether children can be activated with a single
   * click, or require a double-click.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_activate_on_single_click() const;

  /** Determines whether all children should be allocated the
   * same size.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_homogeneous() ;

/** Determines whether all children should be allocated the
   * same size.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_homogeneous() const;

  /** The minimum number of children to allocate consecutively
   * in the given orientation.
   * 
   * Setting the minimum children per line ensures
   * that a reasonably small height will be requested
   * for the overall minimum width of the box.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_min_children_per_line() ;

/** The minimum number of children to allocate consecutively
   * in the given orientation.
   * 
   * Setting the minimum children per line ensures
   * that a reasonably small height will be requested
   * for the overall minimum width of the box.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_min_children_per_line() const;

  /** The maximum amount of children to request space for consecutively
   * in the given orientation.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_max_children_per_line() ;

/** The maximum amount of children to request space for consecutively
   * in the given orientation.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_max_children_per_line() const;

  /** The amount of vertical space between two children.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_row_spacing() ;

/** The amount of vertical space between two children.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_row_spacing() const;

  /** The amount of horizontal space between two children.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_column_spacing() ;

/** The amount of horizontal space between two children.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_column_spacing() const;


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%child_activated(FlowBoxChild* child)</tt>
   *
   * The signal_child_activated() signal is emitted when a child has been
   * activated by the user.
   * 
   * @param child The child that is activated.
   */

  Glib::SignalProxy< void,FlowBoxChild* > signal_child_activated();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%selected_children_changed()</tt>
   *
   * The signal_selected_children_changed() signal is emitted when the
   * set of selected children changes.
   * 
   * Use Gtk::FlowBox::selected_foreach() or
   * Gtk::FlowBox::get_selected_children() to obtain the
   * selected children.
   */

  Glib::SignalProxy< void > signal_selected_children_changed();

   // Action signals


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
   * @relates Gtk::FlowBox
   */
  Gtk::FlowBox* wrap(GtkFlowBox* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_FLOWBOX_H */


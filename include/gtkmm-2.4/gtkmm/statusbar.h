// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_STATUSBAR_H
#define _GTKMM_STATUSBAR_H


#include <glibmm.h>

/* $Id: statusbar.hg,v 1.2 2003/10/12 09:38:11 murrayc Exp $ */

/* statusbar.h
 *
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/box.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkStatusbar GtkStatusbar;
typedef struct _GtkStatusbarClass GtkStatusbarClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Statusbar_Class; } // namespace Gtk
namespace Gtk
{

/** Text status indicator
 * This widget is used to display status information.
 * Messages are pushed and poped onto a message stack.
 * When text is pushed it replaces the old contents.
 * The old text is restored when popped.
 *
 * It derives from Gtk::HBox so that additional information can be added
 * easily.
 *
 * The Statusbar widget looks like this:
 * @image html statusbar1.png
 *
 * @ingroup Widgets
 */

class Statusbar : public HBox
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Statusbar CppObjectType;
  typedef Statusbar_Class CppClassType;
  typedef GtkStatusbar BaseObjectType;
  typedef GtkStatusbarClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Statusbar();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Statusbar_Class;
  static CppClassType statusbar_class_;

  // noncopyable
  Statusbar(const Statusbar&);
  Statusbar& operator=(const Statusbar&);

protected:
  explicit Statusbar(const Glib::ConstructParams& construct_params);
  explicit Statusbar(GtkStatusbar* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkStatusbar*       gobj()       { return reinterpret_cast<GtkStatusbar*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkStatusbar* gobj() const { return reinterpret_cast<GtkStatusbar*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_text_pushed(guint context_id, const Glib::ustring& text);
  virtual void on_text_popped(guint context_id, const Glib::ustring& text);


private:

  
public:
  Statusbar();

  
  /** Returns a new context identifier, given a description 
   * of the actual context. Note that the description is 
   * <em>not</em> shown in the UI.
   * @param context_description Textual description of what context 
   * the new message is being used in.
   * @return An integer id.
   */
  guint get_context_id(const Glib::ustring& context_description);

  //TODO: Remove the default 0 context_id values in all these methods?

  /** Pushes a new message onto a statusbar's stack.
   * @param text The message to add to the statusbar.
   * @param context_id The message's context id, as returned by get_context_id()
   */
  guint push(const Glib::ustring& text, guint context_id = 0);

  
  /** Removes the first message in the Gtk::StatusBar's stack
   * with the given context id. 
   * 
   * Note that this may not change the displayed message, if 
   * the message at the top of the stack has a different 
   * context id.
   * @param context_id A context identifier.
   */
  void pop(guint context_id =  0);

  /** Forces the removal of a message from a statusbar's stack. 
   * The exact context_id and message_id must be specified.
   * @param message_id A message identifier, as returned by push().
   * @param context_id A context identifier.
   */
  void remove_message(guint message_id, guint context_id = 0);
  

  /** Forces the removal of all messages from a statusbar's
   * stack with the exact @a context_id.
   * 
   * @newin{2,22}
   * @param context_id A context identifier.
   */
  void remove_all_messages(guint context_id =  0);

  
  /** Sets whether the statusbar has a resize grip. 
   * <tt>true</tt> by default.
   * @param setting <tt>true</tt> to have a resize grip.
   */
  void set_has_resize_grip(bool setting =  true);
  
  /** Returns whether the statusbar has a resize grip.
   * @return <tt>true</tt> if the statusbar has a resize grip.
   */
  bool get_has_resize_grip() const;

  //This actually returns a GtkFrame, though the documentation describes it as "box".
  //I'm not generally happy about API that returns an unknown type. murrayc.
  
  /** Retrieves the box containing the label widget.
   * 
   * @newin{2,20}
   * @return A Gtk::Box.
   */
  Gtk::Widget* get_message_area();
  
  /** Retrieves the box containing the label widget.
   * 
   * @newin{2,20}
   * @return A Gtk::Box.
   */
  const Gtk::Widget* get_message_area() const;

 
  /**
   * @par Prototype:
   * <tt>void on_my_%text_pushed(guint context_id, const Glib::ustring& text)</tt>
   */

  Glib::SignalProxy2< void,guint,const Glib::ustring& > signal_text_pushed();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%text_popped(guint context_id, const Glib::ustring& text)</tt>
   */

  Glib::SignalProxy2< void,guint,const Glib::ustring& > signal_text_popped();


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the statusbar has a grip for resizing the toplevel.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_has_resize_grip() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the statusbar has a grip for resizing the toplevel.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_has_resize_grip() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Statusbar
   */
  Gtk::Statusbar* wrap(GtkStatusbar* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_STATUSBAR_H */


// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GDKMM_DISPLAY_H
#define _GDKMM_DISPLAY_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <vector>

#include <gdkmm/screen.h>
#include <gdkmm/applaunchcontext.h>
#include <gdkmm/types.h> //For ModifierType


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GdkDisplay GdkDisplay;
typedef struct _GdkDisplayClass GdkDisplayClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class Display_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{


class Device;
class DeviceManager;
class Seat;

 /** Gdk::Display object's purpose is two fold:
 *   To grab/ungrab keyboard focus and mouse pointer
 *   To manage and provide information about the Gdk::Screen(s) available for this Gdk::Display
 *
 * Gdk::Display objects are the GDK representation of the X Display which can be described as a workstation consisting
 * of a keyboard a pointing device (such as a mouse) and one or more screens. It is used to open and keep track of
 * various Gdk::Screen objects currently instantiated by the application. It is also used to grab and release the keyboard
 * and the mouse pointer.
 */

class Display : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Display CppObjectType;
  typedef Display_Class CppClassType;
  typedef GdkDisplay BaseObjectType;
  typedef GdkDisplayClass BaseClassType;

  // noncopyable
  Display(const Display&) = delete;
  Display& operator=(const Display&) = delete;

private:  friend class Display_Class;
  static CppClassType display_class_;

protected:
  explicit Display(const Glib::ConstructParams& construct_params);
  explicit Display(GdkDisplay* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Display(Display&& src) noexcept;
  Display& operator=(Display&& src) noexcept;

  ~Display() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkDisplay*       gobj()       { return reinterpret_cast<GdkDisplay*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkDisplay* gobj() const { return reinterpret_cast<GdkDisplay*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkDisplay* gobj_copy();

private:

protected:
  Display();

public:
  
  /** Opens a display.
   * 
   * @newin{2,2}
   * 
   * @param display_name The name of the display to open.
   * @return A Gdk::Display, or <tt>nullptr</tt> if the
   * display could not be opened.
   */
  static Glib::RefPtr<Display> open(const Glib::ustring& display_name);

  
  /** Gets the name of the display.
   * 
   * @newin{2,2}
   * 
   * @return A string representing the display name. This string is owned
   * by GDK and should not be modified or freed.
   */
  Glib::ustring get_name() const;

  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Gets the number of screen managed by the @a display.
   * 
   * @newin{2,2}
   * 
   * Deprecated: 3.10: The number of screens is always 1.
   * 
   * @deprecated The number of screens is always 1.
   * 
   * @return Number of screens.
   */
  int get_n_screens() const;
#endif // GDKMM_DISABLE_DEPRECATED


  /** Returns a screen object for one of the screens of the display.
   * 
   * @newin{2,2}
   * Deprecated: 3.20: There is only one screen; use get_default_screen() to get it.
   * 
   * @param screen_num The screen number.
   * @return The Gdk::Screen object.
   */
  Glib::RefPtr<Screen> get_screen(int screen_num =  0);
  
  /** Returns a screen object for one of the screens of the display.
   * 
   * @newin{2,2}
   * Deprecated: 3.20: There is only one screen; use get_default_screen() to get it.
   * 
   * @param screen_num The screen number.
   * @return The Gdk::Screen object.
   */
  Glib::RefPtr<const Screen> get_screen(int screen_num =  0) const;

  
  /** Get the default Gdk::Screen for @a display.
   * 
   * @newin{2,2}
   * 
   * @return The default Gdk::Screen object for @a display.
   */
  Glib::RefPtr<Screen> get_default_screen();
  
  /** Get the default Gdk::Screen for @a display.
   * 
   * @newin{2,2}
   * 
   * @return The default Gdk::Screen object for @a display.
   */
  Glib::RefPtr<const Screen> get_default_screen() const;

   //deprecated

  
  /** Returns <tt>true</tt> if there is an ongoing grab on @a device for @a display.
   * 
   * @param device A Gdk::Device.
   * @return <tt>true</tt> if there is a grab in effect for @a device.
   */
  bool device_is_grabbed(const Glib::RefPtr<const Gdk::Device>& device) const;
  
  /** Emits a short beep on @a display
   * 
   * @newin{2,2}
   */
  void beep();
  
  /** Flushes any requests queued for the windowing system and waits until all
   * requests have been handled. This is often used for making sure that the
   * display is synchronized with the current state of the program. Calling
   * sync() before gdk_error_trap_pop() makes sure that any errors
   * generated from earlier requests are handled before the error trap is
   * removed.
   * 
   * This is most useful for X11. On windowing systems where requests are
   * handled synchronously, this function will do nothing.
   * 
   * @newin{2,2}
   */
  void sync();
  
  /** Closes the connection to the windowing system for the given display,
   * and cleans up associated resources.
   * 
   * @newin{2,2}
   */
  void close();
  
  /** Finds out if the display has been closed.
   * 
   * @newin{2,22}
   * 
   * @return <tt>true</tt> if the display is closed.
   */
  bool is_closed() const;


   //deprecated

  //TODO: Use C++ Gdk::Event:
  //TODO: get_event() removes the next event, if there is one - then there should not be a const version:
  
  /** Gets the next Gdk::Event to be processed for @a display, fetching events from the
   * windowing system if necessary.
   * 
   * @newin{2,2}
   * 
   * @return The next Gdk::Event to be processed, or <tt>nullptr</tt>
   * if no events are pending. The returned Gdk::Event should be freed
   * with Gdk::Event::free().
   */
  GdkEvent* get_event();
  
  /** Gets the next Gdk::Event to be processed for @a display, fetching events from the
   * windowing system if necessary.
   * 
   * @newin{2,2}
   * 
   * @return The next Gdk::Event to be processed, or <tt>nullptr</tt>
   * if no events are pending. The returned Gdk::Event should be freed
   * with Gdk::Event::free().
   */
  const GdkEvent* get_event() const;

  
  /** Gets a copy of the first Gdk::Event in the @a display’s event queue, without
   * removing the event from the queue.  (Note that this function will
   * not get more events from the windowing system.  It only checks the events
   * that have already been moved to the GDK event queue.)
   * 
   * @newin{2,2}
   * 
   * @return A copy of the first Gdk::Event on the event
   * queue, or <tt>nullptr</tt> if no events are in the queue. The returned
   * Gdk::Event should be freed with Gdk::Event::free().
   */
  GdkEvent* peek_event();
  
  /** Gets a copy of the first Gdk::Event in the @a display’s event queue, without
   * removing the event from the queue.  (Note that this function will
   * not get more events from the windowing system.  It only checks the events
   * that have already been moved to the GDK event queue.)
   * 
   * @newin{2,2}
   * 
   * @return A copy of the first Gdk::Event on the event
   * queue, or <tt>nullptr</tt> if no events are in the queue. The returned
   * Gdk::Event should be freed with Gdk::Event::free().
   */
  GdkEvent* peek_event() const;
  
  /** Appends a copy of the given event onto the front of the event
   * queue for @a display.
   * 
   * @newin{2,2}
   * 
   * @param event A Gdk::Event.
   */
  void put_event(GdkEvent* event);
  
  /** Returns whether the display has events that are waiting
   * to be processed.
   * 
   * @newin{3,0}
   * 
   * @return <tt>true</tt> if there are events ready to be processed.
   */
  bool has_pending() const;

  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Sets the double click time (two clicks within this time interval
   * count as a double click and result in a Gdk::2BUTTON_PRESS event).
   * Applications should not set this, it is a global 
   * user-configured setting.
   * 
   * @newin{2,2}
   * 
   * @deprecated No replacement method. Applications should not set this.
   * 
   * @param msec Double click time in milliseconds (thousandths of a second).
   */
  void set_double_click_time(guint msec);
#endif // GDKMM_DISABLE_DEPRECATED


#ifndef GDKMM_DISABLE_DEPRECATED

  /** Sets the double click distance (two clicks within this distance
   * count as a double click and result in a Gdk::2BUTTON_PRESS event).
   * See also set_double_click_time().
   * Applications should not set this, it is a global 
   * user-configured setting.
   * 
   * @newin{2,4}
   * 
   * @deprecated No replacement method. Applications should not set this.
   * 
   * @param distance Distance in pixels.
   */
  void set_double_click_distance(guint distance);
#endif // GDKMM_DISABLE_DEPRECATED


  /** Gets the default Gdk::Display. This is a convenience
   * function for:
   * `gdk_display_manager_get_default_display (Gdk::DisplayManager::get())`.
   * 
   * @newin{2,2}
   * 
   * @return A Gdk::Display, or <tt>nullptr</tt> if
   * there is no default display.
   */
  static Glib::RefPtr<Display> get_default();


   //deprecated

  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Opens the default display specified by command line arguments or
   * environment variables, sets it as the default display, and returns
   * it. gdk_parse_args() must have been called first. If the default
   * display has previously been set, simply returns that. An internal
   * function that should not be used by applications.
   * 
   * Deprecated: 3.16: This symbol was never meant to be used outside
   * of GTK+
   * 
   * @deprecated This method was never meant to be used outside of GTK+.
   * 
   * @return The default display, if it
   * could be opened, otherwise <tt>nullptr</tt>.
   */
  static Glib::RefPtr<Display> open_default_libgtk_only();
#endif // GDKMM_DISABLE_DEPRECATED


  /** Returns the Gdk::Keymap attached to @a display.
   * 
   * @newin{2,2}
   * 
   * @return The Gdk::Keymap attached to @a display.
   */
  GdkKeymap* get_keymap();
  
  /** Returns the Gdk::Keymap attached to @a display.
   * 
   * @newin{2,2}
   * 
   * @return The Gdk::Keymap attached to @a display.
   */
  const GdkKeymap* get_keymap() const;

  bool set_selection_owner(const Glib::RefPtr<Window>& owner, Glib::ustring& selection, guint32 time_, bool send_event);
  Glib::RefPtr<Window> get_selection_owner(const Glib::ustring& selection);

  /** Send a response to SelectionRequest event.
   *
   * @newin{2,2}
   *
   * @param requestor Window to which to deliver response.
   * @param selection Selection that was requested.
   * @param target Target that was selected.
   * @param property Property in which the selection owner stored the data,
   * or "None" to indicate that the request was rejected.
   * @param time_ Timestamp.
   */
  void selection_send_notify(const Glib::RefPtr<Window>& requestor, Glib::ustring& selection, Glib::ustring& target, Glib::ustring& property, guint32 time_);

  
  /** Flushes any requests queued for the windowing system; this happens automatically
   * when the main loop blocks waiting for new events, but if your application
   * is drawing without returning control to the main loop, you may need
   * to call this function explicitly. A common case where this function
   * needs to be called is when an application is executing drawing commands
   * from a thread other than the thread where the main loop is running.
   * 
   * This is most useful for X11. On windowing systems where requests are
   * handled synchronously, this function will do nothing.
   * 
   * @newin{2,4}
   */
  void flush();
  
  /** Returns <tt>true</tt> if cursors can use an 8bit alpha channel
   * on @a display. Otherwise, cursors are restricted to bilevel
   * alpha (i.e. a mask).
   * 
   * @newin{2,4}
   * 
   * @return Whether cursors can have alpha channels.
   */
  bool supports_cursor_alpha() const;
  
  /** Returns <tt>true</tt> if multicolored cursors are supported
   * on @a display. Otherwise, cursors have only a forground
   * and a background color.
   * 
   * @newin{2,4}
   * 
   * @return Whether cursors can have multiple colors.
   */
  bool supports_cursor_color() const;
  
  /** Returns the default size to use for cursors on @a display.
   * 
   * @newin{2,4}
   * 
   * @return The default cursor size.
   */
  guint get_default_cursor_size() const;
  
  /** Gets the maximal size to use for cursors on @a display.
   * 
   * @newin{2,4}
   * 
   * @param width The return location for the maximal cursor width.
   * @param height The return location for the maximal cursor height.
   */
  void get_maximal_cursor_size(guint& width, guint& height);

  
  /** Returns the default group leader window for all toplevel windows
   * on @a display. This window is implicitly created by GDK.
   * See Gdk::Window::set_group().
   * 
   * @newin{2,4}
   * 
   * @return The default group leader window
   * for @a display.
   */
  Glib::RefPtr<Window> get_default_group();
  
  /** Returns the default group leader window for all toplevel windows
   * on @a display. This window is implicitly created by GDK.
   * See Gdk::Window::set_group().
   * 
   * @newin{2,4}
   * 
   * @return The default group leader window
   * for @a display.
   */
  Glib::RefPtr<const Window> get_default_group() const;

  
  /** Returns whether Gdk::EventOwnerChange events will be
   * sent when the owner of a selection changes.
   * 
   * @newin{2,6}
   * 
   * @return Whether Gdk::EventOwnerChange events will
   * be sent.
   */
  bool supports_selection_notification() const;
  
  /** Request Gdk::EventOwnerChange events for ownership changes
   * of the selection named by the given atom.
   * 
   * @newin{2,6}
   * 
   * @param selection The Gdk::Atom naming the selection for which
   * ownership change notification is requested.
   * @return Whether Gdk::EventOwnerChange events will
   * be sent.
   */
  bool request_selection_notification(const Glib::ustring& selection);

  
  /** Returns whether the speicifed display supports clipboard
   * persistance; i.e.\ if it’s possible to store the clipboard data after an
   * application has quit. On X11 this checks if a clipboard daemon is
   * running.
   * 
   * @newin{2,6}
   * 
   * @return <tt>true</tt> if the display supports clipboard persistance.
   */
  bool supports_clipboard_persistence() const;

  /** Issues a request to the clipboard manager to store the clipboard data,
   * saving all available targets.
   * On X11, this is a special program that works according to the freedesktop clipboard specification,
   * available at http://www.freedesktop.org/Standards/clipboard-manager-spec.
   * @newin{2,6}
   *
   * @param clipboard_window A Gdk::Window belonging to the clipboard owner.
   * @param time_ A timestamp.
   */
  void store_clipboard(const Glib::RefPtr<Gdk::Window>& clipboard_window, guint32 time_);

  void store_clipboard(const Glib::RefPtr<Gdk::Window>& clipboard_window, guint32 time_, const std::vector<Glib::ustring>& targets);
  

  /** Returns <tt>true</tt> if gdk_window_shape_combine_mask() can
   * be used to create shaped windows on @a display.
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if shaped windows are supported.
   */
  bool supports_shapes() const;
  
  /** Returns <tt>true</tt> if gdk_window_input_shape_combine_mask() can
   * be used to modify the input shape of windows on @a display.
   * 
   * @newin{2,10}
   * 
   * @return <tt>true</tt> if windows with modified input shape are supported.
   */
  bool supports_input_shapes() const;
  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Returns <tt>true</tt> if Gdk::Window::set_composited() can be used
   * to redirect drawing on the window using compositing.
   * 
   * Currently this only works on X11 with XComposite and
   * XDamage extensions available.
   * 
   * @newin{2,12}
   * 
   * Deprecated: 3.16: Compositing is an outdated technology that
   * only ever worked on X11.
   * 
   * @deprecated Compositing is an outdated technology that only ever worked on X11.
   * 
   * @return <tt>true</tt> if windows may be composited.
   */
  bool supports_composite() const;
#endif // GDKMM_DISABLE_DEPRECATED


  /** Indicates to the GUI environment that the application has
   * finished loading, using a given identifier.
   * 
   * GTK+ will call this function automatically for Gtk::Window
   * with custom startup-notification identifier unless
   * gtk_window_set_auto_startup_notification() is called to
   * disable that feature.
   * 
   * @newin{3,0}
   * 
   * @param startup_id A startup-notification identifier, for which
   * notification process should be completed.
   */
  void notify_startup_complete(const Glib::ustring& startup_id);

  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Returns the Gdk::DeviceManager associated to @a display.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.20. Use get_default_seat() and Gdk::Seat operations.
   * 
   * @deprecated Use get_default_seat() and Gdk::Seat operations.
   * 
   * @return A Gdk::DeviceManager, or
   * <tt>nullptr</tt>. This memory is owned by GDK and must not be freed
   * or unreferenced.
   */
  Glib::RefPtr<DeviceManager> get_device_manager();
#endif // GDKMM_DISABLE_DEPRECATED


#ifndef GDKMM_DISABLE_DEPRECATED

  /** Returns the Gdk::DeviceManager associated to @a display.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.20. Use get_default_seat() and Gdk::Seat operations.
   * 
   * @deprecated Use get_default_seat() and Gdk::Seat operations.
   * 
   * @return A Gdk::DeviceManager, or
   * <tt>nullptr</tt>. This memory is owned by GDK and must not be freed
   * or unreferenced.
   */
  Glib::RefPtr<const DeviceManager> get_device_manager() const;
#endif // GDKMM_DISABLE_DEPRECATED


  /** Returns a Gdk::AppLaunchContext suitable for launching
   * applications on the given display.
   * 
   * @newin{3,0}
   * 
   * @return A new Gdk::AppLaunchContext for @a display.
   * Free with Glib::object_unref() when done.
   */
  Glib::RefPtr<AppLaunchContext> get_app_launch_context();
  
  /** Returns a Gdk::AppLaunchContext suitable for launching
   * applications on the given display.
   * 
   * @newin{3,0}
   * 
   * @return A new Gdk::AppLaunchContext for @a display.
   * Free with Glib::object_unref() when done.
   */
  Glib::RefPtr<const AppLaunchContext> get_app_launch_context() const;

  
  /** Returns the default Gdk::Seat for this display.
   * 
   * @newin{3,20}
   * 
   * @return The default seat.
   */
  Glib::RefPtr<Seat> get_default_seat();
  
  /** Returns the default Gdk::Seat for this display.
   * 
   * @newin{3,20}
   * 
   * @return The default seat.
   */
  Glib::RefPtr<const Seat> get_default_seat() const;

 
  /** Returns the list of seats known to @a display.
   * 
   * @newin{3,20}
   * 
   * @return The
   * list of seats known to the Gdk::Display.
   */
  std::vector<Glib::RefPtr<Seat>> list_seats();
 

  /** Returns the list of seats known to @a display.
   * 
   * @newin{3,20}
   * 
   * @return The
   * list of seats known to the Gdk::Display.
   */
  std::vector<Glib::RefPtr<const Seat>> list_seats() const;

  //We use no_default_handler because GdkDisplayClass is private.

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%closed(bool is_error)</tt>
   *
   * The signal_closed() signal is emitted when the connection to the windowing
   * system for @a display is closed.
   * 
   * @newin{2,2}
   * 
   * @param is_error <tt>true</tt> if the display was closed due to an error.
   */

  Glib::SignalProxy< void,bool > signal_closed();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%opened()</tt>
   *
   * The signal_opened() signal is emitted when the connection to the windowing
   * system for @a display is opened.
   */

  Glib::SignalProxy< void > signal_opened();


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%seat_added(const Glib::RefPtr<Seat>& seat)</tt>
   *
   * The signal_seat_added() signal is emitted whenever a new seat is made
   * known to the windowing system.
   * 
   * @newin{3,20}
   * 
   * @param seat The seat that was just added.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Seat>& > signal_seat_added();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%seat_removed(const Glib::RefPtr<Seat>& seat)</tt>
   *
   * The signal_seat_removed() signal is emitted whenever a seat is removed
   * by the windowing system.
   * 
   * @newin{3,20}
   * 
   * @param seat The seat that was just removed.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Seat>& > signal_seat_removed();


  // There are no properties.
  // We don't wrap the vfuncs because GdkDisplayClass is private.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::Display
   */
  Glib::RefPtr<Gdk::Display> wrap(GdkDisplay* object, bool take_copy = false);
}


#endif /* _GDKMM_DISPLAY_H */


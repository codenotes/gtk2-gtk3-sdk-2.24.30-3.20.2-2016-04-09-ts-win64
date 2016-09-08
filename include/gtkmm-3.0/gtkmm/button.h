// Generated by gmmproc 2.48.0 -- DO NOT MODIFY!
#ifndef _GTKMM_BUTTON_H
#define _GTKMM_BUTTON_H


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

#include <gtkmm/bin.h>
#include <gtkmm/activatable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkButton GtkButton;
typedef struct _GtkButtonClass GtkButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Button_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

class StockID; //deprecated

//TODO: Derive from (and implement) Actionable when we can break ABI.

/** A widget that creates a signal when clicked on.
 *
 * This widget is generally used with a signal handler that is called when the button is pressed.
 * It can hold any valid child widget.  The most commonly used child is the Gtk::Label.
 *
 * The Button widget looks like this:
 * @image html button2.png
 *
 * @ingroup Widgets
 */

class Button
  : public Bin,
    public Activatable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Button CppObjectType;
  typedef Button_Class CppClassType;
  typedef GtkButton BaseObjectType;
  typedef GtkButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Button(Button&& src) noexcept;
  Button& operator=(Button&& src) noexcept;

  // noncopyable
  Button(const Button&) = delete;
  Button& operator=(const Button&) = delete;

  ~Button() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Button_Class;
  static CppClassType button_class_;

protected:
  explicit Button(const Glib::ConstructParams& construct_params);
  explicit Button(GtkButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkButton*       gobj()       { return reinterpret_cast<GtkButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkButton* gobj() const { return reinterpret_cast<GtkButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_pressed().
  virtual void on_pressed();
  /// This is a default handler for the signal signal_released().
  virtual void on_released();
  /// This is a default handler for the signal signal_clicked().
  virtual void on_clicked();
  /// This is a default handler for the signal signal_enter().
  virtual void on_enter();
  /// This is a default handler for the signal signal_leave().
  virtual void on_leave();
  /// This is a default handler for the signal signal_activate().
  virtual void on_activate();


private:

  
public:

  /** Create an empty button.
   * With an empty button, you can Gtk::Button::add() a widget
   * such as a Gtk::Image or Gtk::Box.
   *
   * If you just wish to add a Gtk::Label,
   * you may want to
   * use the Gtk::Button(const Glib::ustring& label) ctor
   * directly instead.
   */
  Button();


  /** Simple Push Button with label.
   * Create a button with the given label inside. You won't be able
   * to add a widget in this button since it already has a Gtk::Label
   * in it
   */
  explicit Button(const Glib::ustring& label, bool mnemonic = false);

  //We don't wrap gtk_button_new_from_icon_name() to avoid a clash with the label constructor.
  //But set_image_from_icon_name() is a replacement.
  

#ifndef GTKMM_DISABLE_DEPRECATED
  /** Creates a new Button containing the image and text from a stock item.
   * Stock ids have identifiers like Gtk::Stock::OK and Gtk::Stock::APPLY.
   * @param stock_id The stock item.
   * @deprecated Use the constructor that takes a Glib::ustring label or set_image_from_icon_name() instead, because stock IDs are now deprecated.
   */
  explicit Button(const StockID& stock_id);
#endif //GTKMM_DISABLE_DEPRECATED

  
  /** Emits a Gtk::Button::signal_clicked() signal to the given Gtk::Button.
   */
  void clicked();
   //deprecated

  
  /** Sets the relief style of the edges of the given Gtk::Button widget.
   * Two styles exist, Gtk::RELIEF_NORMAL and Gtk::RELIEF_NONE.
   * The default style is, as one can guess, Gtk::RELIEF_NORMAL.
   * The deprecated value Gtk::RELIEF_HALF behaves the same as
   * Gtk::RELIEF_NORMAL.
   * 
   * @param relief The GtkReliefStyle as described above.
   */
  void set_relief(ReliefStyle relief);
  
  /** Returns the current relief style of the given Gtk::Button.
   * 
   * @return The current Gtk::ReliefStyle.
   */
  ReliefStyle get_relief() const;

  
  /** Sets the text of the label of the button to @a str. This text is
   * also used to select the stock item if set_use_stock()
   * is used.
   * 
   * This will also clear any previously set labels.
   * 
   * @param label A string.
   */
  void set_label(const Glib::ustring& label);
  
  /** Fetches the text from the label of the button, as set by
   * set_label(). If the label text has not 
   * been set the return value will be <tt>nullptr</tt>. This will be the 
   * case if you create an empty button with new() to 
   * use as a container.
   * 
   * @return The text of the label widget. This string is owned
   * by the widget and must not be modified or freed.
   */
  Glib::ustring get_label() const;
  
  /** If true, an underline in the text of the button label indicates
   * the next character should be used for the mnemonic accelerator key.
   * 
   * @param use_underline <tt>true</tt> if underlines in the text indicate mnemonics.
   */
  void set_use_underline(bool use_underline =  true);
  
  /** Returns whether an embedded underline in the button label indicates a
   * mnemonic. See set_use_underline().
   * 
   * @return <tt>true</tt> if an embedded underline in the button label
   * indicates the mnemonic accelerator keys.
   */
  bool get_use_underline() const;
  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** If <tt>true</tt>, the label set on the button is used as a
   * stock id to select the stock item for the button.
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   * 
   * @param use_stock <tt>true</tt> if the button should use a stock item.
   */
  void set_use_stock(bool use_stock =  true);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns whether the button label is a stock item.
   * 
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   * 
   * @return <tt>true</tt> if the button label is used to
   * select a stock item instead of being
   * used directly as the label text.
   */
  bool get_use_stock() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets whether the button will grab focus when it is clicked with the mouse.
   * Making mouse clicks not grab focus is useful in places like toolbars where
   * you don’t want the keyboard focus removed from the main area of the
   * application.
   * 
   * @newin{2,4}
   * 
   * @deprecated Use Widget::set_focus_on_click() instead.
   * 
   * @param focus_on_click Whether the button grabs focus when clicked with the mouse.
   */
  void set_focus_on_click(bool focus_on_click =  true);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns whether the button grabs focus when it is clicked with the mouse.
   * See set_focus_on_click().
   * 
   * @newin{2,4}
   * 
   * @deprecated Use Widget::get_focus_on_click() instead.
   * 
   * @return <tt>true</tt> if the button grabs focus when it is clicked with
   * the mouse.
   */
  bool get_focus_on_click() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the alignment of the child. This property has no effect unless 
   * the child is a Gtk::Misc or a Gtk::Alignment.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.14: Access the child widget directly if you need to control
   * its alignment.
   * 
   * @deprecated Access the child widget directly if you need to control its alignment.
   * 
   * @param xalign The horizontal position of the child, 0.0 is left aligned, 
   * 1.0 is right aligned.
   * @param yalign The vertical position of the child, 0.0 is top aligned, 
   * 1.0 is bottom aligned.
   */
  void set_alignment(float xalign, float yalign);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the alignment of the child in the button.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.14: Access the child widget directly if you need to control
   * its alignment.
   * 
   * @deprecated Access the child widget directly if you need to control its alignment.
   * 
   * @param xalign Return location for horizontal alignment.
   * @param yalign Return location for vertical alignment.
   */
  void get_alignment(float& xalign, float& yalign);
#endif // GTKMM_DISABLE_DEPRECATED


  //TODO: When we can break ABI, combine the two set_image_from_icon_name() to
  // void set_image_from_icon_name(const Glib::ustring& icon_name, IconSize size = ICON_SIZE_BUTTON, bool use_fallback = false);
  /** Sets the image to an icon from the current icon theme.
   * If the icon name isn't known, a "broken image" icon will be
   * displayed instead. If the current icon theme is changed, the icon
   * will be updated appropriately.
   * The icon will be displayed if there is no label text or if
   * Gtk::Button::property_always_show_image() is <tt>true</tt>.
   *
   * This is a convenience wrapper around Gtk::Image::set_from_icon_name() and
   * Gtk::Button:set_image().
   *
   * @param icon_name An icon name.
   * @param size An icon size. Can be either an IconSize or a BuiltinIconSize.
   *
   * @newin{3,10}
   */
  void set_image_from_icon_name(const Glib::ustring& icon_name, IconSize size = ICON_SIZE_BUTTON);

  /** Sets the image to an icon from the current icon theme.
   * If the icon name isn't known, a "broken image" icon will be
   * displayed instead. If the current icon theme is changed, the icon
   * will be updated appropriately.
   * The icon will be displayed if there is no label text or if
   * Gtk::Button::property_always_show_image() is <tt>true</tt>.
   *
   * This is a convenience wrapper around Gtk::Image::set_from_icon_name() and
   * Gtk::Button:set_image().
   *
   * @param icon_name An icon name.
   * @param size An icon size. Can be either an IconSize or a BuiltinIconSize.
   * @param use_fallback Whether the icon displayed in the Gtk::Image will use
   * standard icon names fallback. See also Gtk::ICON_LOOKUP_GENERIC_FALLBACK.
   *
   * @newin{3,12}
   */
  void set_image_from_icon_name(const Glib::ustring& icon_name, IconSize size, bool use_fallback);

  
  /** Set the image of @a button to the given widget. The image will be
   * displayed if the label text is <tt>nullptr</tt> or if
   * Gtk::Button::property_always_show_image() is <tt>true</tt>. You don’t have to call
   * Gtk::Widget::show() on @a image yourself.
   * 
   * @newin{2,6}
   * 
   * @param image A widget to set as the image for the button.
   */
  void set_image(Widget& image);
  
  /** Gets the widget that is currenty set as the image of @a button.
   *     This may have been explicitly set by set_image()
   *     or specified as a stock item to the constructor.
   * 
   *     @newin{2,6}
   */
  Widget* get_image();
  
  /** Gets the widget that is currenty set as the image of @a button.
   *     This may have been explicitly set by set_image()
   *     or specified as a stock item to the constructor.
   * 
   *     @newin{2,6}
   */
  const Widget* get_image() const;

  
  /** Sets the position of the image relative to the text 
   * inside the button.
   * 
   * @newin{2,10}
   * 
   * @param position The position.
   */
  void set_image_position(PositionType position);
  
  /** Gets the position of the image relative to the text 
   * inside the button.
   * 
   * @newin{2,10}
   * 
   * @return The position.
   */
  PositionType get_image_position() const;

  
  /** If <tt>true</tt>, the button will ignore the Gtk::Settings::property_gtk_button_images()
   * setting and always show the image, if available.
   * 
   * Use this property if the button  would be useless or hard to use
   * without the image.
   * 
   * @newin{3,6}
   * 
   * @param always_show <tt>true</tt> if the menuitem should always show the image.
   */
  void set_always_show_image(bool always_show =  true);
  
  /** Returns whether the button will ignore the Gtk::Settings::property_gtk_button_images()
   * setting and always show the image, if available.
   * 
   * @newin{3,6}
   * 
   * @return <tt>true</tt> if the button will always show the image.
   */
  bool get_always_show_image();

  
  /** Returns the button’s event window if it is realized, <tt>nullptr</tt> otherwise.
   * This function should be rarely needed.
   * 
   * @newin{2,22}
   * 
   * @return  @a button’s event window.
   */
  Glib::RefPtr<Gdk::Window> get_event_window();
  
  /** Returns the button’s event window if it is realized, <tt>nullptr</tt> otherwise.
   * This function should be rarely needed.
   * 
   * @newin{2,22}
   * 
   * @return  @a button’s event window.
   */
  Glib::RefPtr<const Gdk::Window> get_event_window() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%pressed()</tt>
   *
   * Emitted when the button is pressed.
   * 
   * Deprecated: 2.8: Use the Gtk::Widget::signal_button_press_event() signal.
   * 
   * @deprecated Use Widget::signal_button_press_event() instead.
   */

  Glib::SignalProxy< void > signal_pressed();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%released()</tt>
   *
   * Emitted when the button is released.
   * 
   * Deprecated: 2.8: Use the Gtk::Widget::signal_button_release_event() signal.
   * 
   * @deprecated Use Widget::signal_button_release_event() instead.
   */

  Glib::SignalProxy< void > signal_released();
#endif // GTKMM_DISABLE_DEPRECATED


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%clicked()</tt>
   *
   * Emitted when the button has been activated (pressed and released).
   */

  Glib::SignalProxy< void > signal_clicked();

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%enter()</tt>
   *
   * Emitted when the pointer enters the button.
   * 
   * Deprecated: 2.8: Use the Gtk::Widget::signal_enter_notify_event() signal.
   * 
   * @deprecated Use Widget::signal_enter_notify_event() instead.
   */

  Glib::SignalProxy< void > signal_enter();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%leave()</tt>
   *
   * Emitted when the pointer leaves the button.
   * 
   * Deprecated: 2.8: Use the Gtk::Widget::signal_leave_notify_event() signal.
   * 
   * @deprecated Use Widget::signal_leave_notify_event() instead.
   */

  Glib::SignalProxy< void > signal_leave();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /**
   * @par Slot Prototype:
   * <tt>void on_my_%activate()</tt>
   *
   * The signal_activate() signal on GtkButton is an action signal and
   * emitting it causes the button to animate press then release. 
   * Applications should never connect to this signal, but use the
   * Gtk::Button::signal_clicked() signal.
   * 
   * @deprecated Use signal_clicked() instead.
   */

  Glib::SignalProxy< void > signal_activate();
#endif // GTKMM_DISABLE_DEPRECATED


  /** Text of the label widget inside the button, if the button contains a label widget.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_label() ;

/** Text of the label widget inside the button, if the button contains a label widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_label() const;

  /** The border relief style.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ReliefStyle > property_relief() ;

/** The border relief style.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ReliefStyle > property_relief() const;

  /** If set, an underline in the text indicates the next character should be used for the mnemonic accelerator key.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_underline() ;

/** If set, an underline in the text indicates the next character should be used for the mnemonic accelerator key.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_underline() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** If set, the label is used to pick a stock item instead of being displayed.
   *
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_stock() ;

/** If set, the label is used to pick a stock item instead of being displayed.
   *
   * Deprecated: 3.10
   * 
   * @deprecated No replacement available.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_stock() const;

#endif // GTKMM_DISABLE_DEPRECATED


  // GtkButton:focus-on-click has been removed from gtk+.
  // TODO: At ABI-break, remove it from gtkmm.
#ifndef GTKMM_DISABLE_DEPRECATED
  /** Whether the button grabs focus when it is clicked with the mouse.
   * @deprecated Use Widget::property_focus_on_click() instead.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_focus_on_click() ;

  /** Whether the button grabs focus when it is clicked with the mouse.
   * @deprecated Use Widget::property_focus_on_click() instead.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_focus_on_click() const;
#endif // GTKMM_DISABLE_DEPRECATED
  //_WRAP_PROPERTY("focus-on-click", bool, deprecated "Use Widget::property_focus_on_click() instead.")

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** If the child of the button is a Gtk::Misc or Gtk::Alignment, this property 
   * can be used to control its horizontal alignment. 0.0 is left aligned, 
   * 1.0 is right aligned.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.14: Access the child widget directly if you need to control
   * its alignment.
   * 
   * @deprecated Access the child widget directly if you need to control its alignment.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< float > property_xalign() ;

/** If the child of the button is a Gtk::Misc or Gtk::Alignment, this property 
   * can be used to control its horizontal alignment. 0.0 is left aligned, 
   * 1.0 is right aligned.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.14: Access the child widget directly if you need to control
   * its alignment.
   * 
   * @deprecated Access the child widget directly if you need to control its alignment.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< float > property_xalign() const;

#endif // GTKMM_DISABLE_DEPRECATED

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** If the child of the button is a Gtk::Misc or Gtk::Alignment, this property 
   * can be used to control its vertical alignment. 0.0 is top aligned, 
   * 1.0 is bottom aligned.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.14: Access the child widget directly if you need to control
   * its alignment.
   * 
   * @deprecated Access the child widget directly if you need to control its alignment.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< float > property_yalign() ;

/** If the child of the button is a Gtk::Misc or Gtk::Alignment, this property 
   * can be used to control its vertical alignment. 0.0 is top aligned, 
   * 1.0 is bottom aligned.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.14: Access the child widget directly if you need to control
   * its alignment.
   * 
   * @deprecated Access the child widget directly if you need to control its alignment.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< float > property_yalign() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** The child widget to appear next to the button text.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gtk::Widget* > property_image() ;

/** The child widget to appear next to the button text.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gtk::Widget* > property_image() const;

  /** The position of the image relative to the text inside the button.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PositionType > property_image_position() ;

/** The position of the image relative to the text inside the button.
   * 
   * @newin{2,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PositionType > property_image_position() const;

  /** If <tt>true</tt>, the button will ignore the Gtk::Settings::property_gtk_button_images()
   * setting and always show the image, if available.
   * 
   * Use this property if the button would be useless or hard to use
   * without the image.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_always_show_image() ;

/** If <tt>true</tt>, the button will ignore the Gtk::Settings::property_gtk_button_images()
   * setting and always show the image, if available.
   * 
   * Use this property if the button would be useless or hard to use
   * without the image.
   * 
   * @newin{3,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_always_show_image() const;


};

/*! A Gtk::Button example.
 * Example 1: @link book/buttons/button/buttons.h @endlink
 * Example 2: @link book/buttons/button/buttons.cc @endlink
 * Example 3: @link book/buttons/button/main.cc @endlink
 */

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Button
   */
  Gtk::Button* wrap(GtkButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_BUTTON_H */


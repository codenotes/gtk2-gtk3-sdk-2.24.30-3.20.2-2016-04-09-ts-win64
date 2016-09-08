// Generated by gmmproc 2.48.1 -- DO NOT MODIFY!
#ifndef _GIOMM_FILEINPUTSTREAM_H
#define _GIOMM_FILEINPUTSTREAM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2007 The gtkmm Development Team
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

#include <giomm/fileinfo.h>
#include <giomm/inputstream.h>
#include <giomm/seekable.h>
#include <glibmm/iochannel.h>
#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GFileInputStream = struct _GFileInputStream;
using GFileInputStreamClass = struct _GFileInputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class FileInputStream_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** FileInputStream provides input streams that take their content from a file.
 *
 * FileInputStream implements Seekable, which allows the input stream to jump to arbitrary positions in the file,
 * provided the file system of the file allows it.
 * Use the methods of the Seekable base class for seeking and positioning.
 *
 * @ingroup Streams
 *
 * @newin{2,16}
 */

class FileInputStream
: public Gio::InputStream,
  public Seekable
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FileInputStream;
  using CppClassType = FileInputStream_Class;
  using BaseObjectType = GFileInputStream;
  using BaseClassType = GFileInputStreamClass;

  // noncopyable
  FileInputStream(const FileInputStream&) = delete;
  FileInputStream& operator=(const FileInputStream&) = delete;

private:  friend class FileInputStream_Class;
  static CppClassType fileinputstream_class_;

protected:
  explicit FileInputStream(const Glib::ConstructParams& construct_params);
  explicit FileInputStream(GFileInputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FileInputStream(FileInputStream&& src) noexcept;
  FileInputStream& operator=(FileInputStream&& src) noexcept;

  ~FileInputStream() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GFileInputStream*       gobj()       { return reinterpret_cast<GFileInputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GFileInputStream* gobj() const { return reinterpret_cast<GFileInputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GFileInputStream* gobj_copy();

private:

  
public:

  /** Queries a file input stream the given @a attributes. This function blocks
   * while querying the stream. For the asynchronous (non-blocking) version
   * of this function, see query_info_async(). While the
   * stream is blocked, the stream will set the pending flag internally, and
   * any other operations on the stream will throw a Gio::Error with PENDING.
   *
   * @param attributes A file attribute query string.
   * @param cancellable A Cancellable object.
   * @return A FileInfo, or an empty RefPtr on error.
   */
  Glib::RefPtr<FileInfo> query_info(const Glib::RefPtr<Cancellable>& cancellable, const std::string& attributes = "*");

  /** Queries a file input stream the given @a attributes. This function blocks
   * while querying the stream. For the asynchronous (non-blocking) version
   * of this function, see query_info_async(). While the
   * stream is blocked, the stream will set the pending flag internally, and
   * any other operations on the stream will throw a Gio::Error with PENDING.
   *
   * @param attributes A file attribute query string.
   * @return A FileInfo, or an empty RefPtr on error.
   */
  Glib::RefPtr<FileInfo> query_info(const std::string& attributes = "*");
  

  /** Queries the stream information asynchronously. For the synchronous version of this function, see query_info().
   *
   * The operation can be cancelled by triggering the cancellable object from another thread. If the operation was cancelled,
   * a Gio::Error with CANCELLED will be thrown.
   *
   * When the operation is finished, @a slot will be called. You can then call query_info_finish() to get the result of the operation.
   *
   * @param slot A callback slot which will be called when the request is satisfied.
   * @param cancellable A Cancellable object which can be used to cancel the operation.
   * @param attributes A file attribute query string.
   * @param io_priority The I/O priority of the request.
   */
  void query_info_async(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, const std::string& attributes = "*", int io_priority = Glib::PRIORITY_DEFAULT);

  /** Queries the stream information asynchronously. For the synchronous version of this function, see query_info().
   *
   * When the operation is finished, @a slot will be called. You can then call query_info_finish() to get the result of the operation.
   *
   * @param slot A callback slot which will be called when the request is satisfied.
   * @param attributes A file attribute query string.
   * @param io_priority The I/O priority of the request.
   */
  void query_info_async(const SlotAsyncReady& slot, const std::string& attributes = "*", int io_priority = Glib::PRIORITY_DEFAULT);

  
  /** Finishes an asynchronous info query operation.
   * 
   * @param result A AsyncResult.
   * @return FileInfo.
   */
  Glib::RefPtr<FileInfo> query_info_finish(const Glib::RefPtr<AsyncResult>& result);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::FileInputStream
   */
  Glib::RefPtr<Gio::FileInputStream> wrap(GFileInputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_FILEINPUTSTREAM_H */


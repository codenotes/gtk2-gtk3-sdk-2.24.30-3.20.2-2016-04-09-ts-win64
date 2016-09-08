// Generated by gmmproc 2.48.1 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSERROR_H
#define _GIOMM_DBUSERROR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <glibmm/error.h>


namespace Gio
{

namespace DBus
{

//The GMMPROC_EXTRA_NAMESPACE() macro is a hint to generate_wrap_init.pl to put it in the DBus sub-namespace


class Error : public Glib::Error
{
public:
  /**  @var Code FAILED
   * A generic error; "something went wrong" - see the error message for
   * more.
   * 
   *  @var Code NO_MEMORY
   * There was not enough memory to complete an operation.
   * 
   *  @var Code SERVICE_UNKNOWN
   * The bus doesn't know how to launch a service to supply the bus name
   * you wanted.
   * 
   *  @var Code NAME_HAS_NO_OWNER
   * The bus name you referenced doesn't exist (i.e. no application owns
   * it).
   * 
   *  @var Code NO_REPLY
   * No reply to a message expecting one, usually means a timeout occurred.
   * 
   *  @var Code IO_ERROR
   * Something went wrong reading or writing to a socket, for example.
   * 
   *  @var Code BAD_ADDRESS
   * A D-Bus bus address was malformed.
   * 
   *  @var Code NOT_SUPPORTED
   * Requested operation isn't supported (like ENOSYS on UNIX).
   * 
   *  @var Code LIMITS_EXCEEDED
   * Some limited resource is exhausted.
   * 
   *  @var Code ACCESS_DENIED
   * Security restrictions don't allow doing what you're trying to do.
   * 
   *  @var Code AUTH_FAILED
   * Authentication didn't work.
   * 
   *  @var Code NO_SERVER
   * Unable to connect to server (probably caused by ECONNREFUSED on a
   * socket).
   * 
   *  @var Code TIMEOUT
   * Certain timeout errors, possibly ETIMEDOUT on a socket.  Note that
   * DBUS_ERROR_NO_REPLY is used for message reply timeouts. Warning:
   * this is confusingly-named given that DBUS_ERROR_TIMED_OUT also
   * exists. We can't fix it for compatibility reasons so just be
   * careful.
   * 
   *  @var Code NO_NETWORK
   * No network access (probably ENETUNREACH on a socket).
   * 
   *  @var Code ADDRESS_IN_USE
   * Can't bind a socket since its address is in use (i.e. EADDRINUSE).
   * 
   *  @var Code DISCONNECTED
   * The connection is disconnected and you're trying to use it.
   * 
   *  @var Code INVALID_ARGS
   * Invalid arguments passed to a method call.
   * 
   *  @var Code FILE_NOT_FOUND
   * Missing file.
   * 
   *  @var Code FILE_EXISTS
   * Existing file and the operation you're using does not silently overwrite.
   * 
   *  @var Code UNKNOWN_METHOD
   * Method name you invoked isn't known by the object you invoked it on.
   * 
   *  @var Code UNKNOWN_OBJECT
   * Object you invoked a method on isn't known. @newin{2,42}
   * 
   *  @var Code UNKNOWN_INTERFACE
   * Interface you invoked a method on isn't known by the object. @newin{2,42}
   * 
   *  @var Code UNKNOWN_PROPERTY
   * Property you tried to access isn't known by the object. @newin{2,42}
   * 
   *  @var Code PROPERTY_READ_ONLY
   * Property you tried to set is read-only. @newin{2,42}
   * 
   *  @var Code TIMED_OUT
   * Certain timeout errors, e.g. while starting a service. Warning: this is
   * confusingly-named given that DBUS_ERROR_TIMEOUT also exists. We
   * can't fix it for compatibility reasons so just be careful.
   * 
   *  @var Code MATCH_RULE_NOT_FOUND
   * Tried to remove or modify a match rule that didn't exist.
   * 
   *  @var Code MATCH_RULE_INVALID
   * The match rule isn't syntactically valid.
   * 
   *  @var Code SPAWN_EXEC_FAILED
   * While starting a new process, the exec() call failed.
   * 
   *  @var Code SPAWN_FORK_FAILED
   * While starting a new process, the fork() call failed.
   * 
   *  @var Code SPAWN_CHILD_EXITED
   * While starting a new process, the child exited with a status code.
   * 
   *  @var Code SPAWN_CHILD_SIGNALED
   * While starting a new process, the child exited on a signal.
   * 
   *  @var Code SPAWN_FAILED
   * While starting a new process, something went wrong.
   * 
   *  @var Code SPAWN_SETUP_FAILED
   * We failed to setup the environment correctly.
   * 
   *  @var Code SPAWN_CONFIG_INVALID
   * We failed to setup the config parser correctly.
   * 
   *  @var Code SPAWN_SERVICE_INVALID
   * Bus name was not valid.
   * 
   *  @var Code SPAWN_SERVICE_NOT_FOUND
   * Service file not found in system-services directory.
   * 
   *  @var Code SPAWN_PERMISSIONS_INVALID
   * Permissions are incorrect on the setuid helper.
   * 
   *  @var Code SPAWN_FILE_INVALID
   * Service file invalid (Name, User or Exec missing).
   * 
   *  @var Code SPAWN_NO_MEMORY
   * Tried to get a UNIX process ID and it wasn't available.
   * 
   *  @var Code UNIX_PROCESS_ID_UNKNOWN
   * Tried to get a UNIX process ID and it wasn't available.
   * 
   *  @var Code INVALID_SIGNATURE
   * A type signature is not valid.
   * 
   *  @var Code INVALID_FILE_CONTENT
   * A file contains invalid syntax or is otherwise broken.
   * 
   *  @var Code SELINUX_SECURITY_CONTEXT_UNKNOWN
   * Asked for SELinux security context and it wasn't available.
   * 
   *  @var Code ADT_AUDIT_DATA_UNKNOWN
   * Asked for ADT audit data and it wasn't available.
   * 
   *  @var Code OBJECT_PATH_IN_USE
   * There's already an object with the requested object path.
   * 
   *  @enum Code
   * 
   * %Error codes for the DBUS_ERROR error domain.
   * 
   * @newin{2,26}
   */
  enum Code
  {
    FAILED,
    NO_MEMORY,
    SERVICE_UNKNOWN,
    NAME_HAS_NO_OWNER,
    NO_REPLY,
    IO_ERROR,
    BAD_ADDRESS,
    NOT_SUPPORTED,
    LIMITS_EXCEEDED,
    ACCESS_DENIED,
    AUTH_FAILED,
    NO_SERVER,
    TIMEOUT,
    NO_NETWORK,
    ADDRESS_IN_USE,
    DISCONNECTED,
    INVALID_ARGS,
    FILE_NOT_FOUND,
    FILE_EXISTS,
    UNKNOWN_METHOD,
    TIMED_OUT,
    MATCH_RULE_NOT_FOUND,
    MATCH_RULE_INVALID,
    SPAWN_EXEC_FAILED,
    SPAWN_FORK_FAILED,
    SPAWN_CHILD_EXITED,
    SPAWN_CHILD_SIGNALED,
    SPAWN_FAILED,
    SPAWN_SETUP_FAILED,
    SPAWN_CONFIG_INVALID,
    SPAWN_SERVICE_INVALID,
    SPAWN_SERVICE_NOT_FOUND,
    SPAWN_PERMISSIONS_INVALID,
    SPAWN_FILE_INVALID,
    SPAWN_NO_MEMORY,
    UNIX_PROCESS_ID_UNKNOWN,
    INVALID_SIGNATURE,
    INVALID_FILE_CONTENT,
    SELINUX_SECURITY_CONTEXT_UNKNOWN,
    ADT_AUDIT_DATA_UNKNOWN,
    OBJECT_PATH_IN_USE,
    UNKNOWN_OBJECT,
    UNKNOWN_INTERFACE,
    UNKNOWN_PROPERTY,
    PROPERTY_READ_ONLY
  };

  Error(Code error_code, const Glib::ustring& error_message);
  explicit Error(GError* gobject);
  Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  static void throw_func(GError* gobject);

  friend void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};


} //namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSERROR_H */


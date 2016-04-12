#pragma once

#include <vic/base/predef.h>

#include <stdbool.h>
#include <stddef.h>
#include <sys/types.h>
#ifdef _VIC_WINDOWS_
#include <windows.h>
#else
#include <errno.h>
#endif

#include <vic/base/chartype.h>
#include <vic/base/floattype.h>
#include <vic/base/inttype.h>

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
#   if	__cplusplus < 201103L
#       define nil NULL
#   else
#       define nil nullptr
#   endif
#else
#   define nil NULL
#endif

typedef size_t vic_size_t;
#ifdef _VIC_WINDOWS_
#   ifdef _VIC_IS_64_BITS_
        typedef long vic_ssize_t;
#   elif defined(_VIC_IS_32_BITS_)
        typedef int vic_ssize_t;
#   endif
#else
typedef ssize_t vic_ssize_t;
#endif
typedef ptrdiff_t vic_ptrdiff_t;
typedef off_t vic_off_t;
typedef time_t vic_time_t;

typedef uint32_t vic_line_t;
typedef uint8_t vic_byte_t;
typedef size_t vic_iov_len_t;
typedef int32_t vic_file_t;
#define vic_invalid_file ((vic_file_t)-1)

typedef vic_file_t vic_socket_t;
#define vic_invalid_socket vic_invalid_file

#ifdef _VIC_WINDOWS_
    typedef uint32_t vic_pid_t;
    typedef uint32_t vic_tid_t;
#else
    typedef pid_t vic_pid_t; // Process ID
    typedef pid_t vic_tid_t; // Thread ID
#endif

//typedef size_t vic_fls_key_t;

#ifdef _VIC_WINDOWS_
    typedef DWORD vic_error_t;
#else
    typedef int32_t vic_error_t;
#endif

#ifdef	__cplusplus
}
#endif

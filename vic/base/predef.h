#pragma once

#include <stddef.h> // offsetof(type, member-desginator) 获得字段在结构体中的偏移量

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef _WIN32
#   define _VIC_WINDOWS_
#else
#   define _VIC_POSIX_
#endif

#ifdef __CYGWIN__
#   define _VIC_WINDOWS_
#   define _VIC_CYGWIN_
#endif

#if defined(linux) || defined(__linux__)
#   define _VIC_LINUX_
#endif

#ifdef __APPLE__
#   define _VIC_OSX_
#   ifndef _VIC_BSD_
#       define _VIC_BSD_
#   endif
#endif

#ifdef __FreeBSD__
#   define _VIC_FREEBSD_
#   define _VIC_BSD_
#endif

#ifdef _VIC_WINDOWS_
#define _VIC_NATIVE_(windows, posix) windows
#else
#define _VIC_NATIVE_(windows, posix) posix
#endif

#ifdef _MSC_VER
#   define _VIC_MSVC_
#   ifdef _M_X64
#       define _VIC_AMD64_
#       define _VIC_IS_64_BITS_
#   elif defined(_M_IX86)
#       define _VIC_I386_
#       define _VIC_IS_32_BITS_
#   endif
#endif

#ifdef __GNUC__
#   define _VIC_GCC_
#   ifdef __x86_64
#       define _VIC_AMD64_
#       define _VIC_IS_64_BITS_
#   elif defined(__i386__)
#       define _VIC_I386_
#       define _VIC_IS_32_BITS_
#   elif defined(__arm64__)
#       define _VIC_ARM64_
#       define _VIC_IS_64_BITS_
#   elif defined(__arm__)
#       define _VIC_ARM_
#       define _VIC_IS_32_BITS_
#   elif defined(__ppc64__)
#       define _VIC_PPC64_
#       define _VIC_IS_64_BITS_
#   elif defined(__ppc__)
#       define _VIC_PPC_
#       define _VIC_IS_32_BITS_
#   endif
#endif

#ifdef __clang__
#   define _VIC_CLANG_
// TODO:
#endif

#ifdef NDEBUG
#   define _VIC_NDEBUG_
#endif

#ifdef _VIC_MSVC_
#   ifndef _DEBUG
#       ifndef _VIC_NDEBUG_
#           define _VIC_NDEBUG_
#       endif
#   endif
#endif

#ifdef _VIC_LINUX_
#   include <sys/sysmacros.h>
#   ifdef major
#       undef major
#   endif
#   ifdef minor
#       undef minor
#   endif
#endif

#define _VIC_INLINE_ inline

#define _VIC_FILE_ __FILE__
#define _VIC_LINE_ __LINE__
#define _VIC_FUNC_ __func__
#define _VIC_DATE_ __DATE__
#define _VIC_TIME_ __TIME__

#if defined(__GNUC__) && ((__GNUC__ * 100 + __GNUC_MINOR__) >= 303)
#   define vic_likely(x)   __builtin_expect((x), 1)
#   define vic_unlikely(x) __builtin_expect((x), 0)
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x550)
#   define vic_likely(x)   (x)
#   define vic_unlikely(x) (x)
#else /* not gcc >= 3.3 and not Sun Studio >= 8 */
#   define vic_likely(x)   (x)
#   define vic_unlikely(x) (x)
#endif

#define _VIC_STRING_(val) #val
#define _VIC_JOIN_(X, Y) X##Y

#ifdef	__cplusplus
}
#endif

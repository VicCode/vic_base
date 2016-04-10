#pragma once

#include <vic/base/predef.h>

#include <assert.h>
#include <stdlib.h>

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef _VIC_NDEBUG_

#define vic_assert(expr) ((void)0)
#define vic_verify(expr) ((void)(expr))
#define vic_notreached() abort()

#else

#define vic_assert(expr) assert(expr)
#define vic_verify(expr) assert(expr)
#define vic_notreached() abort()

#endif

#ifdef	__cplusplus
}
#endif


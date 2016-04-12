#pragma once

#include <inttypes.h>
#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif

/* Exact integral types */
// Signed
typedef int8_t vic_int8_t;
typedef int16_t vic_int16_t;
typedef int32_t vic_int32_t;
typedef int64_t vic_int64_t;

// Unsigned
typedef uint8_t vic_uint8_t;
typedef uint16_t vic_uint16_t;
typedef uint32_t vic_uint32_t;
typedef uint64_t vic_uint64_t;

/* Small types */
// Signed
typedef int_least8_t vic_int_least8_t;
typedef int_least16_t vic_int_least16_t;
typedef int_least32_t vic_int_least32_t;
typedef int_least64_t vic_int_least64_t;

// Unsigned
typedef uint_least8_t vic_uint_least8_t;
typedef uint_least16_t vic_uint_least16_t;
typedef uint_least32_t vic_uint_least32_t;
typedef uint_least64_t vic_uint_least64_t;

/* Fast types */
// Signed
typedef int_fast8_t vic_int_fast8_t;
typedef int_fast16_t vic_int_fast16_t;
typedef int_fast32_t vic_int_fast32_t;
typedef int_fast64_t vic_int_fast64_t;

// Unsigned
typedef uint_fast8_t vic_uint_fast8_t;
typedef uint_fast16_t vic_uint_fast16_t;
typedef uint_fast32_t vic_uint_fast32_t;
typedef uint_fast64_t vic_uint_fast64_t;

/* Types for `void *' pointers */
typedef intptr_t vic_intptr_t;
typedef uintptr_t vic_uintptr_t;

/* Largest integral types */
typedef intmax_t vic_intmax_t;
typedef uintmax_t vic_uintmax_t;

#ifdef	__cplusplus
}
#endif

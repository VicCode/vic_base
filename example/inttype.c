#include <stdio.h>

#include <vic/base/inttype.h>

#define _PRINT_TYPE_(type) printf(#type ": %" PRIuPTR "\n", sizeof(type))

int main(int argc, char *argv[]) {
    _PRINT_TYPE_(vic_int8_t);
    _PRINT_TYPE_(vic_int16_t);
    _PRINT_TYPE_(vic_int32_t);
    _PRINT_TYPE_(vic_int64_t);
    printf("\n");

    _PRINT_TYPE_(vic_uint8_t);
    _PRINT_TYPE_(vic_uint16_t);
    _PRINT_TYPE_(vic_uint32_t);
    _PRINT_TYPE_(vic_uint64_t);
    printf("\n");

    _PRINT_TYPE_(vic_int_least8_t);
    _PRINT_TYPE_(vic_int_least16_t);
    _PRINT_TYPE_(vic_int_least32_t);
    _PRINT_TYPE_(vic_int_least64_t);
    printf("\n");

    _PRINT_TYPE_(vic_uint_least8_t);
    _PRINT_TYPE_(vic_uint_least16_t);
    _PRINT_TYPE_(vic_uint_least32_t);
    _PRINT_TYPE_(vic_uint_least64_t);
    printf("\n");

    _PRINT_TYPE_(vic_int_fast8_t);
    _PRINT_TYPE_(vic_int_fast16_t);
    _PRINT_TYPE_(vic_int_fast32_t);
    _PRINT_TYPE_(vic_int_fast64_t);
    printf("\n");

    _PRINT_TYPE_(vic_uint_fast8_t);
    _PRINT_TYPE_(vic_uint_fast16_t);
    _PRINT_TYPE_(vic_uint_fast32_t);
    _PRINT_TYPE_(vic_uint_fast64_t);
    printf("\n");

    _PRINT_TYPE_(vic_intptr_t);
    _PRINT_TYPE_(vic_uintptr_t);
    printf("\n");

    _PRINT_TYPE_(vic_intmax_t);
    _PRINT_TYPE_(vic_uintmax_t);
    printf("\n");

    return 0;
}


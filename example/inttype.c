#include <stdio.h>

#include <vic/base/inttype.h>

#define _PRINT_TYPE_(type) printf(#type ": %" PRIuPTR "\n", sizeof(type))

int main(int argc, char *argv[]) {
    _PRINT_TYPE_(int8_t);
    _PRINT_TYPE_(int16_t);
    _PRINT_TYPE_(int32_t);
    _PRINT_TYPE_(int64_t);
    printf("\n");

    _PRINT_TYPE_(uint8_t);
    _PRINT_TYPE_(uint16_t);
    _PRINT_TYPE_(uint32_t);
    _PRINT_TYPE_(uint64_t);
    printf("\n");

    _PRINT_TYPE_(int_least8_t);
    _PRINT_TYPE_(int_least16_t);
    _PRINT_TYPE_(int_least32_t);
    _PRINT_TYPE_(int_least64_t);
    printf("\n");

    _PRINT_TYPE_(uint_least8_t);
    _PRINT_TYPE_(uint_least16_t);
    _PRINT_TYPE_(uint_least32_t);
    _PRINT_TYPE_(uint_least64_t);
    printf("\n");

    _PRINT_TYPE_(int_fast8_t);
    _PRINT_TYPE_(int_fast16_t);
    _PRINT_TYPE_(int_fast32_t);
    _PRINT_TYPE_(int_fast64_t);
    printf("\n");

    _PRINT_TYPE_(uint_fast8_t);
    _PRINT_TYPE_(uint_fast16_t);
    _PRINT_TYPE_(uint_fast32_t);
    _PRINT_TYPE_(uint_fast64_t);
    printf("\n");

    _PRINT_TYPE_(intptr_t);
    _PRINT_TYPE_(uintptr_t);
    printf("\n");

    _PRINT_TYPE_(intmax_t);
    _PRINT_TYPE_(uintmax_t);
    printf("\n");

    return 0;
}


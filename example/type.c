#include <stdio.h>

#include <vic/base/type.h>

#define _PRINT_TYPE_(type) printf(#type ": %" PRIuPTR "\n", sizeof(type))

int main(int argc, char *argv[]) {
    _PRINT_TYPE_(char_ptr);
    _PRINT_TYPE_(const_char_ptr);
    _PRINT_TYPE_(float32_t);
    _PRINT_TYPE_(float64_t);
    //_PRINT_TYPE_(float96_t);
    _PRINT_TYPE_(floatmax_t);
    _PRINT_TYPE_(size_t);
    _PRINT_TYPE_(ssize_t);
    _PRINT_TYPE_(ptrdiff_t);
    _PRINT_TYPE_(off_t);
    _PRINT_TYPE_(time_t);
    _PRINT_TYPE_(line_t);
    _PRINT_TYPE_(byte_t);
    _PRINT_TYPE_(iov_len_t);
    _PRINT_TYPE_(fd_t);
    _PRINT_TYPE_(socket_t);
    _PRINT_TYPE_(pid_t);
    _PRINT_TYPE_(tid_t);
    _PRINT_TYPE_(error_t);
    return 0;
}


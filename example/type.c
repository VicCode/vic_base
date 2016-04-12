#include <stdio.h>

#include <vic/base/type.h>

#define _PRINT_TYPE_(type) printf(#type ": %" PRIuPTR "\n", sizeof(type))

int main(int argc, char *argv[]) {
    //_PRINT_TYPE_(vic_char_ptr);
    //_PRINT_TYPE_(vic_const_char_ptr);
    _PRINT_TYPE_(vic_float32_t);
    _PRINT_TYPE_(vic_float64_t);
    //_PRINT_TYPE_(vic_float96_t);
    _PRINT_TYPE_(vic_floatmax_t);
    _PRINT_TYPE_(vic_size_t);
    _PRINT_TYPE_(vic_ssize_t);
    _PRINT_TYPE_(vic_ptrdiff_t);
    _PRINT_TYPE_(vic_off_t);
    _PRINT_TYPE_(vic_time_t);
    _PRINT_TYPE_(vic_line_t);
    _PRINT_TYPE_(vic_byte_t);
    _PRINT_TYPE_(vic_iov_len_t);
    _PRINT_TYPE_(vic_file_t);
    _PRINT_TYPE_(vic_socket_t);
    _PRINT_TYPE_(vic_pid_t);
    _PRINT_TYPE_(vic_tid_t);
    _PRINT_TYPE_(vic_error_t);
    return 0;
}


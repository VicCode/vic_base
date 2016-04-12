#include <vic/base/error.h>

#ifdef _VIC_WINDOWS_
vic_error_t vic_last_error() {
    return ::GetLastError();
}

void vic_set_last_error(vic_error_t e) {
    SetLastError(e);
}
#else
vic_error_t vic_last_error() {
    return errno;
}

void vic_set_last_error(vic_error_t e) {
    errno = e;
}
#endif


#include <vic/base/error.h>

#ifdef _VIC_WINDOWS_
error_t vic_last_error() {
    return ::GetLastError();
}

void vic_set_last_error(error_t e) {
    SetLastError(e);
}
#else
error_t vic_last_error() {
    return errno;
}

void vic_set_last_error(error_t e) {
    errno = e;
}
#endif


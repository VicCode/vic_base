#pragma once

#include <vic/base/predef.h>

#ifdef _VIC_WINDOWS_
#include <windows.h>
#else
#include <errno.h>
#endif

#include <vic/base/type.h>

#ifdef	__cplusplus
extern "C" {
#endif

vic_error_t vic_last_error();

void vic_set_last_error(vic_error_t e);

#ifdef	__cplusplus
}
#endif


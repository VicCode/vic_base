#pragma once

#include <vic/base/predef.h>

#ifdef _VIC_WINDOWS_
#include <windows.h>
#else
#include <errno.h>
#endif

#include <vic/base/type.h>

error_t vic_last_error();

void vic_set_last_error(error_t e);


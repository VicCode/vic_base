#include <stdio.h>

#include <vic/base/predef.h>

int main(int argc, char *argv[]) {
#ifdef _VIC_WINDOWS_
    printf("_VIC_WINDOWS_\n");
#endif
#ifdef _VIC_POSIX_
    printf("_VIC_POSIX_\n");
#endif
#ifdef _VIC_LINUX_
    printf("_VIC_LINUX_\n");
#endif
#ifdef _VIC_CYGWIN_
    printf("_VIC_CYGWIN_\n");
#endif
#ifdef _VIC_OSX_
    printf("_VIC_OSX_\n");
#endif
#ifdef _VIC_BSD_
    printf("_VIC_BSD_\n");
#endif
#ifdef _VIC_FREEBSD_
    printf("_VIC_FREEBSD_\n");
#endif
#ifdef _VIC_MSVC_
    printf("_VIC_MSVC_\n");
#endif
#ifdef _VIC_GCC_
    printf("_VIC_GCC_\n");
#endif
#ifdef _VIC_CLANG_
    printf("_VIC_CLANG_\n");
#endif
#ifdef _VIC_IS_64_BITS_
    printf("_VIC_IS_64_BITS_\n");
#endif
#ifdef _VIC_IS_32_BITS_
    printf("_VIC_IS_32_BITS_\n");
#endif
#ifdef _VIC_AMD64_
    printf("_VIC_AMD64_\n");
#endif
#ifdef _VIC_I386_
    printf("_VIC_I386_\n");
#endif
#ifdef _VIC_ARM_
    printf("_VIC_ARM_\n");
#endif
#ifdef _VIC_ARM64_
    printf("_VIC_ARM64_\n");
#endif
#ifdef _VIC_PPC_
    printf("_VIC_PPC_\n");
#endif
#ifdef _VIC_PPC64_
    printf("_VIC_PPC64_\n");
#endif
#ifdef _VIC_NDEBUG_
    printf("_VIC_NDEBUG_\n");
#endif
#ifdef _VIC_INLINE_
    printf("_VIC_INLINE_\n");
#endif
#ifdef _VIC_FILE_
    printf("_VIC_FILE_\n");
#endif
#ifdef _VIC_LINE_
    printf("_VIC_LINE_\n");
#endif
#ifdef _VIC_FUNC_
    printf("_VIC_FUNC_\n");
#endif
#ifdef _VIC_DATE_
    printf("_VIC_DATE_\n");
#endif
#ifdef _VIC_TIME_
    printf("_VIC_TIME_\n");
#endif
    return 0;
}


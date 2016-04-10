#include <stdio.h>

#include <vic/base/assert.h>

int main(int argc, char *argv[]) {
    vic_assert(1 > 0);
    vic_verify(1 > 0);
    vic_notreached();
    return 0;
}


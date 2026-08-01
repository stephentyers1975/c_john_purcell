#include <stdio.h>

// #define POLITE
// You can specify when compiling with -DPOLITE

int main() {
    #ifdef POLITE
    printf("Please leave me alone.\n");
    #elif RUDE
    printf("go!!\n");
    #else
    printf("Get lost!\n");
    #endif

    return 0;
}

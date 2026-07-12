#include <stdio.h>

int main() {

    char value = 0;
    printf("Value: %d\n", value);

    unsigned long size = sizeof(char);
    printf("Size of Char: %lu\n", size);

    // 1 byte = 8 bits
    //  2**7 -1 Min: -2**7
    value = 127;
    printf("Value: %d\n", value);

    value = -128;
    printf("Value: %d\n", value);
    /*
    Multi 
    */

    return 0;
}

#include <stdio.h>
#include <stdint.h>

typedef union {
    float f;
    uint32_t u;
} FloatBits;

int main() {

    // Usage: View a float's IEEE 754 bit representation
    FloatBits fb;
    fb.f = 3.14159f;
    printf("Hex representation: 0x%08X\n", fb.u);
    fb.u = 15;
    printf("Hex representation: 0x%08X\n", fb.u);
}

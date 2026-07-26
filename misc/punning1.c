#include <stdio.h>
#include <stdint.h>

typedef union {
    uint32_t color_value;
    // carve up pack color_value into individual 8bits below
    struct {
        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a;
    } channels;
} Pixel;

int main() {
    Pixel p;
    
    // Set individual channels
    p.channels.r = 255;
    p.channels.g = 128;
    p.channels.b = 0;
    p.channels.a = 255;

    // View the entire pixel as a single 32-bit integer for hardware upload
    printf("Packed Hex Color: 0x%08X\n", p.color_value);

    Pixel test;

    test.color_value = 0xFF0080FF;
    // output of hex is in stored in memory in reverse(little endian) compared to above strut definition
    printf("Packed Hex Color: 0x%08X\n", test.color_value);
    printf("R Hex Color: 0x%08X\n", test.channels.r);
    printf("G Hex Color: 0x%08X\n", test.channels.g);
    printf("B Hex Color: 0x%08X\n", test.channels.b);
    printf("A Hex Color: 0x%08X\n", test.channels.a);

    printf("R int Color: %d\n", test.channels.r);
    printf("G int Color: %d\n", test.channels.g);
    printf("B int Color: %d\n", test.channels.b);
    printf("A int Color: %d\n", test.channels.a);

    
    return 0;
}

#include <stdio.h>
#include <stdint.h>

#define RED(color)   ((color >> 24) & 0xFF)
#define GREEN(color) ((color >> 16) & 0xFF)
#define BLUE(color)  ((color >> 8) & 0xFF)
#define OPACITY(color)  (color & 0xFF)
#define RGBA(r, g, b, a) ((r << 24) | (g << 16) | (b << 8) | a)


int main(void) {
    // Pack vibrant purple: Red=128, Green=0, Blue=128
    uint32_t purple = RGBA(128, 0, 128, 15);
    
    printf("Packed color integer: %u\n", purple); // 2147516431
    printf("Hex representation:   0x%X\n", purple); //0x8000800F

    // Unpack it back out
    printf("Red:   %d\n", RED(purple));   // 128
    printf("Green: %d\n", GREEN(purple)); // 0
    printf("Blue:  %d\n", BLUE(purple));  // 128
    printf("Opacity:  %d\n", OPACITY(purple));  // 128

    return 0;
}

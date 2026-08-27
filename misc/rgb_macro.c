#include <stdio.h>

#define RED(color)   ((color >> 16) & 0xFF)
#define GREEN(color) ((color >> 8) & 0xFF)
#define BLUE(color)  (color & 0xFF)
#define RGB(r, g, b) ((r << 16) | (g << 8) | b)


int main(void) {
    // Pack vibrant purple: Red=128, Green=0, Blue=128
    int purple = RGB(128, 0, 128);
    
    printf("Packed color integer: %d\n", purple); // 8388736

    // Unpack it back out
    printf("Red:   %d\n", RED(purple));   // 128
    printf("Green: %d\n", GREEN(purple)); // 0
    printf("Blue:  %d\n", BLUE(purple));  // 128

    return 0;
}

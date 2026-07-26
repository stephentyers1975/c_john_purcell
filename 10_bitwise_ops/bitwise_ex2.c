/*
UNION Solution

Create two functions

The first function accepts a 32-bit int and three pointers to char values,
named red, green and blue. It sets the values of the chars equal to the 
respective values of the three least significant bytes in the int value.

It sets the value of the blue char from the least significant byte of
the int, green from the second least significant, and red from the third.

For example, an input of 0x00123456 gives us chars with values:
red: 0x12, green: 0x34, blue: 0x56.

The second function does the reverse; three red, green and blue values
and returns a 32-bit int made by combining those values.

Use bitshift operators to do this

Bonus implement the functions again using unions, not bitshifting

*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// type punning

typedef union 
{
    uint32_t pattern;

    struct {
        uint8_t b;
        uint8_t g;
        uint8_t r;
    } pixel;

} rgb_pixel;


int main() {

    rgb_pixel colour = {.pattern = 0x00123456};
    printf("0x%08x\n", colour.pattern);

    // print individual colours
    printf("Red: 0x%x Green: 0x%x Blue: 0x%x\n", colour.pixel.r, colour.pixel.g, colour.pixel.b);

    colour.pixel.r = 0x45;
    colour.pixel.g = 0xff;
    colour.pixel.b = 0xA5;

    printf("Hex Value: 0x%08x\n", colour.pattern);

    return 0;
}


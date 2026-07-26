/*
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

// Function prototypes
void unpack_int(uint32_t colour, char *red, char *green, char *blue);
uint32_t pack_int(char *red, char *green, char *blue);

int main() {

    uint32_t colour = 0x00123456;
    // uint32_t colour = 0x005A2C12; 
    // printf("0x%08X\n", colour);
    
    char red = 0;
    char green = 0; 
    char blue = 0; 

    unpack_int(colour, &red, &green, &blue);
    printf("red: 0x%X, green: 0x%X, blue: 0x%X.\n", red, green, blue);

    uint32_t new_colour = pack_int(&red, &green, &blue);
    printf("Hex Value: 0x%08X\n", new_colour);

    return 0;
}

void unpack_int(uint32_t colour, char *red, char *green, char *blue) {
    *red = (colour >> 16) & 0x000000FF;
    *green = (colour >> 8) & 0x000000FF;
    *blue = colour & 0x000000FF;
}

uint32_t pack_int(char *red, char *green, char *blue) {
     uint32_t new_value = *red << 16;
     new_value |= *green << 8;
     new_value |= *blue;
     return new_value;
}

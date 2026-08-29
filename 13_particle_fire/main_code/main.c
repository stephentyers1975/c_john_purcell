#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "include/graphics.h"
#include "include/swarm.h"
/*
 * Note: in graphics.h, I've added macros RGB, R, G and B for converting
 * between separate RGB values and a combined RGB value.
 * 
 * E.g. if color = 0x123456, RED(color) is 0x12
 * and RGB(12,34,56) is 0x123456
 * 
 * Complete the function hslrgb in hslrgb.c to convert
 * hue, saturation and lightness values to an RGB color value.
 * 
 * The tests run below by hsl_test() should then pass and a rainbow
 * will be displayed.
 * 
 */

int main(int argc, char** argv)
{
    // Call the hsl_to_rgb test function.
    // hsl_test();

    const int width = 800;
    const int height = 600;
    const int nparticles = 1000;

    gs_graphics *g = gs_init_graphics("Particle Fire", width, height);
    particle_t *swarm = swarm_create(nparticles);

    while(gs_poll_events(g)){
        swarm_draw(swarm, g , nparticles);
        gs_draw(g);
    }

    gs_dispose_graphics(g);
    swarm_dispose(swarm);
    return 0;
}

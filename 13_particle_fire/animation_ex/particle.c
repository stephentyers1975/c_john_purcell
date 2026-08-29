#include <stdlib.h>
#include "include/particle.h"
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void particle_init(particle_t *p){
    // particle is confined to box with centre 0,0
    // and sides of 1 unit
    // p->x = (double)rand()/RAND_MAX - 0.5;
    // p->y = (double)rand()/RAND_MAX - 0.5;
   

/* Initialise the particles so that they start at the centre of the screen and have random
 speed, angular speed and direction.
*/
    p->x = 0;
    p->y = 0;
    // my settings
    // p->speed = 0.01 + ((double)rand() / RAND_MAX) * 0.09;
    // p->angular_speed = -0.2 + ((double)rand() / RAND_MAX) * 0.4;
    // p->direction = ((double)rand() / RAND_MAX) * (2.0 * M_PI);
    //  John's settings
    p->speed = 0.0005 * rand() / RAND_MAX;
    p->angular_speed = 0.005 * rand() / RAND_MAX;
    p->direction = 2 * M_PI * rand() / RAND_MAX;
}

/* Add a particle_update function that updates the particle's position based on its speed, 
angular speed and direction. Direction should range from 0 to 2 x PI. Use trig functions to calculate x and y speed
 * based on these values -- or alternatively, scrap that and just try to do something that
 * looks interesting. */

void particle_update(particle_t *p){
    p->direction += p->angular_speed;
    p->x += p->speed * cos(p->direction);
    p->y += p->speed * sin(p->direction);
}

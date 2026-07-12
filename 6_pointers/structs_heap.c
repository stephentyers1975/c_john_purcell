#include <stdio.h>
#include <stdlib.h>
#include "structs_heap.h"

int main() {

    const int NPIXELS = 1280 * 720;
    int nbytes = NPIXELS * sizeof(pixel_t);

    printf("float size: %lu bytes\n", sizeof(float));
    printf("pixel_ size: %lu bytes\n", sizeof(pixel_t));
    printf("need %d bytes\n", nbytes);

    pixel_t * const pixels = (pixel_t *)malloc(nbytes);

    if (!pixels) {
        printf("Allocation failed\n");
        return 1;
    }

    free(pixels);
    return 0;
}

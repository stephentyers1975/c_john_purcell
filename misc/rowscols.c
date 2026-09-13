#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 4;

    for (int r = 0; r < x; r++) {
        for (int c = 0; c < y; c++) {
            int index = (r * y) + c;
            printf("%d ", index);
            
            // Access your value using the 1D index
            // e.g., process(array[index]);
        }
        printf("\n");
    }

    printf("\n");

    // y print

    for (int c = 0; c < y; c++) {
        for (int r = 0; r < x; r++) {
            int index = (r * y) + c;
            printf("%d ", index);
            // Access your value using the 1D index
            // e.g., process(array[index]);
        }
        printf("\n");
    }
    return 0;
}

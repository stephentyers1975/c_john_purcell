#include <stdio.h>

// #define SIZE 4

int main() {
    char filename[] = "test.bin";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "rb");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    int value = 0;
    const int SIZE = 4;
    double values[SIZE] = {};

    int n_objects = (int)fread(&value, sizeof(int), 1, fh);
    printf("Read %d objects.\n", n_objects);
    n_objects = (int)fread(values, sizeof(values[0]), SIZE, fh);
    printf("Read %d objects.\n", n_objects);

    printf("Value: %d\n", value);

    for(int i=0; i<SIZE; ++i){
        printf("%.2f ", values[i]);
    }
    printf("\n");

    fclose(fh);

    return 0;
}

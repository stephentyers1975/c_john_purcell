#include <stdio.h>

#define SIZE 4

int main() {
    char filename[] = "test.bin";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "wb");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    int value = 1234;

    // const int SIZE = 4;
    double values[SIZE] = {6.1, 7.2, 8.3, 9.4};

    fwrite(&value, sizeof(int), 1, fh);
    fwrite(values, sizeof(values[0]), SIZE, fh);

    fclose(fh);

    return 0;
}

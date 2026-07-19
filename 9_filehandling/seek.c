#include <stdio.h>



int main() {
    char filename[] = "test.bin";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "rb");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    fseek(fh, (long)sizeof(int), SEEK_SET);
    fseek(fh, 3L * sizeof(double), SEEK_CUR);

    double value = 0;
    fread(&value, sizeof(double), 1, fh);


    fclose(fh);

    printf("Value: %.2f\n", value);
    return 0;
}

#include <stdio.h>
#include "writing_structs.h"

int main() {
    char filename[] = "test.bin";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "rb");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    data_t data;
    int nread = fread(&data, sizeof(data), 1, fh);
    print_struct(&data);

    fclose(fh);

    printf(nread ? "Read %s\n": "Error reading %s\n", filename);

    return 0;
}

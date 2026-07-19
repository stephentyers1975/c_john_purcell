#include <stdio.h>
#include "writing_structs.h"

int main() {
    char filename[] = "test.bin";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "wb");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    data_t data;
    fill_struct(&data);
    print_struct(&data);
    int nwritten = fwrite(&data, sizeof(data), 1, fh);

    fclose(fh);

    printf(nwritten ? "Written %s\n": "Error writing %s\n", filename);

    return 0;
}

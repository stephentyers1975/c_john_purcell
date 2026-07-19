#include <stdio.h>

int main() {
    char filename[] = "text.txt";

    // FILE is a struct in the stdio
    FILE *fh = fopen(filename, "r");

    if(fh == NULL) {
        printf("Unable to create file %s.", filename);
        return 1;
    }

    const unsigned int LINESIZE = 128;
    char text[LINESIZE];

    while (fgets(text, LINESIZE, fh)){
        printf("%s", text);
    }

    fclose(fh);

    return 0;
}

#include <stdio.h>

int main() {
    fprintf(stdout, "Hello\n");
    fprintf(stderr, "This is an error\n");

    char buffer[50];
    printf("Enter some text: ");
    fscanf(stdin, "%s", buffer);

    printf("Read: %s\n", buffer);
    return 0;
}

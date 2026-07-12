#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "hello";

    printf("sizeof: %d\n", (int)sizeof(text));
    printf("strlen: %d\n", (int)strlen(text));
}

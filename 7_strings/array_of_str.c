#include <stdio.h>
#include <string.h>

int main() {
    char *texts[] = {"Hello", "to", "you"};

    printf("%s\n", texts[0]);
    printf("%s\n", texts[1]);
    printf("%s\n", texts[2]);

    printf("%lu\n", sizeof(texts));

    //  loop through with double pointer and pointer arithmetic
    char *texts2[] = {"Hello", "to", "you", NULL};
    for (char **text = texts2; *text != NULL; ++text) {
        printf("%s\n", *text);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {

    char text[20] = "";
    char text1[] = "good";
    char text2[] = "morning";

    printf("text1 %c\n", *text1);
    printf("text1 %s\n", text1);

    for (char *i = text1; *i != '\0'; ++i ) {
        printf("%c", *i);
    }

    printf("\n");

    strcat(text, text1);
    strcat(text, " ");
    strcat(text, text2);

    printf("%s\n", text);

    return 0;
}

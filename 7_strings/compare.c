#include <stdio.h>
#include <string.h>

int main() {

    char text1[] = "useful";
    char text2[] = "useful";
    char text3[] = "useless";

    printf("%s.%s,strcmp: %d\n", text1, text2, strcmp(text1, text2));
    printf("%s.%s,strcmp: %d\n", text1, text2, strcmp(text1, text3));
    printf("%s.%s,strbcmp(4): %d\n", text1, text2, strncmp(text1, text3, 4));
    printf("%s.%s,strbcmp(4): %d\n", text1, text2, strncmp(text1, text3, 3));

}

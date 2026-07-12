#include <stdio.h>

int main() {

    int value = 3;

    switch ((value))
    {
    case 1:
        printf("Got one\n");
        break;
    case 2:
        printf("Got two\n");
        break;
    case 3:
        printf("Got three\n");
        break;
    default:
        printf("Something else\n");
        break;
    }
    
    return 0;
}

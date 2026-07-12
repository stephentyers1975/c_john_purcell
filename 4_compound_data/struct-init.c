#include <stdio.h>

int main() {

    struct Values
    {
        int id;
        int value;
    } v1={2, 3}, v2={4, 5};

    v2 = (struct Values){.id=23, .value=48}; //c99
    

    printf("v1: %d, %d\n", v1.id, v1.value);
    printf("v1: %d, %d\n", v2.id, v2.value);
    

    return 0;
}

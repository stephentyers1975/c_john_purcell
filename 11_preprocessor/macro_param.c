#include <stdio.h>
#include "macro_param.h"

int main() {
    int value1 = 1;
    int value2 = 2;

    printf("%d,%d\n", value1, value2);
    SWAP_INT(value1, value2)
    printf("%d,%d\n", value1, value2);
    return 0;

}

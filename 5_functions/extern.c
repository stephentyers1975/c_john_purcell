#include <stdio.h>
#include "includes/data2.h"

int main() {

    printf("count 1: %d\n", count);
    inc_count();
    printf("count 2: %d\n", count);
    inc_count();
    printf("count 3: %d\n", count);
    return 0;
}

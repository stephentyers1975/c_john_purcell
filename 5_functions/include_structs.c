#include <stdio.h>
#include "includes/data.h"

int main() {

    struct Item item1 = {2, {2, 3}};
    printf("Item1: %d, {%d, %d}\n", item1.id, item1.v[0], item1.v[1]);

    struct Item item2 = item1;
    item1.v[0] = 100;
    printf("Item2: %d, {%d, %d}\n", item2.id, item2.v[0], item2.v[1]);
    printf("Item1: %d, {%d, %d}\n", item1.id, item1.v[0], item1.v[1]);
    

}

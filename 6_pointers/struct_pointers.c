#include <stdio.h>

int main() {

    struct Item {

        int id;
        int count;
    } item1;

    struct Item *pitem = &item1;

    // combersome notation
    (*pitem).id = 123;
    // better way
    pitem->count = 456;

    printf("Item1: %d, %d\n", item1.id, item1.count);
   
}

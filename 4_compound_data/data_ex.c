#include <stdio.h>

int main(){

    const int SIZE = 10;

    struct data_ex
    {
        int val1;
        int val2;
    } val_array[SIZE];


    // struct data_ex val_array[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        val_array[i].val1 = i;
        val_array[i].val2 = SIZE - i;
        printf("%d-%d\n", val_array[i].val1, val_array[i].val2);
    }

    
}

#include <stdio.h>


void fib_func(int numbers[], int array_size) {
    
    // int t1 = 0, t2 = 1;
    // my attempt works but could be improved 
    // for (int i = 0; i <= array_size; ++i) {
    //     numbers[i] = t1;
    //     numbers[i+1] = t1 + t2;
    //     t1 = t2;
    //     t2 = numbers[i+1];
    // }

    if (array_size < 1) {
        return;
    }

    numbers[0] = 0;

    if (array_size > 1) {
        numbers[1] = 1;
    }

    for (int i =2; i < array_size; ++i) {
        numbers[i] = numbers[i-1] + numbers[i-2];
    }

    
    for (int j = 0; j < array_size; ++j) {
        printf("%d ", numbers[j]);
    }
    printf("\n");
}

#include <stdio.h>
#include "includes/fib.h"

int main() {

    const int SIZE = 10;
    int numbers[SIZE];
    
    fib_func(numbers, SIZE);

    // printing works here without return value of proceeding function because arrays are passed by pointer ref
    for (int j = 0; j < SIZE; ++j) {
        printf("%d ", numbers[j]);
    }

    printf("\n");
    return 0;
}

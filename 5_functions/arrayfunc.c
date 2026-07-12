#include <stdio.h>

// Arrays pass by reference(pointer) to function, not copy

int sum(int values[], int size) {
    int result = 0;

    for (int i=0; i<size; ++i) {
        result += values[i];
    }

    return result;
}

int main() {

    int numbers[] = {10, 20, 30};
    int result = sum(numbers, sizeof(numbers)/sizeof(int));
    printf("Result: %d\n", result);
}


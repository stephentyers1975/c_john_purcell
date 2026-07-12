#include <stdio.h>
#include <memory.h>

#define SIZE 3

int main() {

    int values1[SIZE];

    memset(values1, 0, sizeof(values1)); // not portable

    for(int i=0; i < SIZE; ++i){
        printf("%d ", values1[i]);
    }

    printf("\n");

    int values2[SIZE] = {0};
    int values3[SIZE] = {7, 8};

    for(int j=0; j < SIZE; ++j){
        printf("%d ", values3[j]);
    }

    printf("\n");

    int values4[SIZE] = {[0]=10, [2]=30};

    for(int k=0; k < SIZE; ++k){
        printf("%d ", values4[k]);
    }

    printf("\n");

    // C23
    int values5[SIZE] = {};

    for(int l=0; l < SIZE; ++l){
        printf("%d ", values5[l]);
    }

    printf("\n");

    return 0;
}

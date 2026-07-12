#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/*
char, short int, int, long int, long long int
*/


int main() {

    float value1 = 0.123;
    printf("%f: %lu\n", value1, sizeof(value1));

    double value2 = 0.123;
    printf("%lf: %lu\n", value2, sizeof(value2));

    long double value3 = 0.123;
    printf("%Lf: %lu\n", value3, sizeof(value3));


    value1 = 0.123456789012345678901234567890f;
    printf("%.30f: %lu\n", value1, sizeof(value1));

    value2 = 0.123456789012345678901234567890;
    printf("%.30lf: %lu\n", value2, sizeof(value2));

    value3 = 0.123456789012345678901234567890L;
    printf("%.30Lf: %lu\n", value3, sizeof(value3));

    bool flag = true;
    
    int8_t value4 = 123;
    int32_t value5 = 123;

    unsigned int value6 = 83;
}

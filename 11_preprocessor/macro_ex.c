/*
Write a macro SUM_PRINT that accepts two variables and prints
[first variable name] + [second variable name] = [sum]

for example, if:
    int value1 = 7
and
    int value2 = 8

Then SUM_PRINT(value1, value2)

prints:

    value1 + value2 =15


*/
#include <stdio.h>

#define SUM_PRINT(X, Y) printf("%s + %s = %d\n", #X, #Y, X + Y);


int main() {
    int value12 = 12;
    int value22 = 22;

    SUM_PRINT(value12, value22)

    return 0;
}

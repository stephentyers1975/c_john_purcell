#include <stdio.h>
#include "funcs.h"
#include "funcs.h" // #ifndef in header file stops this being defined twice

int main() {
    greet();
    struct Value test_struct;
    test_struct.id = 5;
    printf("%d\n", test_struct.id);
    return 0;
}

#include <stdio.h>

// replace __VA_ARGS__ with values inside PRINT() separated by comma's
#define PRINT(...) printf(__VA_ARGS__);

int main(){
    PRINT("%s: %d\n", "value", 7);
    return 0;
}

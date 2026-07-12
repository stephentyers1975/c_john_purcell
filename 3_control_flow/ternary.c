#include <stdio.h>

int main() {

    int temperature = 2;

    int cooling = temperature > 3 ? 1: 0;
    printf("Cooling %d\n", cooling);

    printf("Cooling is %s\n", cooling ? "ON":"OFF");
    return 0;
}

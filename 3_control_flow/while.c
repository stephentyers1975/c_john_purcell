#include <stdio.h>

int main() {

    int counter = 0;

    while (counter < 5) {
        counter++;
        printf("%d \n", counter);
    }

    counter = 0;
    do {
        counter++;
        printf("%d \n", counter);
    } while(counter < 5);

    return 0;
}

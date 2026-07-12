#include <stdio.h>

int main() {

    enum Fruit {
        APPLE,
        BANANA,
        ORANGE,
        CHERRY
    };

    enum Cars {
        FORD = 10,
        NISSAN,
        PORSCHE = 40,
        MASERATI
    };

    enum Fruit fruit = APPLE;
    printf("Fruit: %d\n", fruit);
    enum Fruit fruit2 = CHERRY;
    printf("Fruit2: %d\n", fruit2);
    enum Cars car = FORD;
    printf("car: %d\n", car);

    printf("Enum: %d, %d, %d, %d\n", APPLE, BANANA, ORANGE, CHERRY);
    printf("Enum: %d, %d, %d, %d\n", FORD, NISSAN, PORSCHE, MASERATI);

    return 0;
}

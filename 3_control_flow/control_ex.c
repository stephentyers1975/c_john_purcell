#include <stdio.h>

int main() {

    printf("Enter a number betweeen 0-9: ");
    int input = getchar();
    int number = input - '0';

    if (number < 0 || number > 9) {
        printf("Invalid input\n");
        return 0;
    }

    for (int i = 1; i <= number; i++){
        for (int j = 1; j <= number; j++){
            printf("%3d ", i * j);
        }
        printf("\n");
    }


    return 0;
}

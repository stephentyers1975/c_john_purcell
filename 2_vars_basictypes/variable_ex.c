#include <stdio.h>

int main() {

    // printf("%d\n", 'd');
    // printf("%.2f\n", 1.2345);

    
    printf("Enter a number 0-9: ");
    
    int input = getchar();
    int miles = input - '0';

    double km = miles * 1.6;

    printf("%d miles is %.1f km.\n", miles, km);

    return 0;
}

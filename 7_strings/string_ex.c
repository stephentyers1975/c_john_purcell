#include <stdio.h>
#include <string.h>

int main() {

    char expression[] = "five six cat three two nine zero eight bird";
    char expression_cpy[strlen(expression) + 1];
    strcpy(expression_cpy,expression);
    
    char *numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char num_len = sizeof(numbers)/sizeof(numbers[0]);
    
    char *copy_token = strtok(expression_cpy, " ");
    
    int sum, counter, found = 0;

    while (copy_token) {
        found = 0;
        for (int i=0; i<num_len; ++i){
            if (strcmp(copy_token,numbers[i]) == 0){
                found = 1;
            }
        }
        if (found == 0){
            printf("Invalid token: %s\n", copy_token);
        }
        copy_token = strtok(NULL, " ");
        counter++;
       
    }
    
    counter = 0;
    char *token = strtok(expression, " ");

    while (token) {
        
        for (int i=0; i<num_len; ++i){
            if (strcmp(token,numbers[i]) == 0){
                sum += i;
                if (counter != 0)
                    printf(" + ");
                printf("%d", i);
            }
        }
    
        token = strtok(NULL, " ");
        counter++;
    }
    
    printf(" = %d\n", sum);
    

    return 0;
}

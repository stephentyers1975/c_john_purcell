#include <stdio.h>
#include <string.h>

int main() {

    char expression[] = "five six cat three two nine zero eight bird four one steve";
    
    char *numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char num_len = sizeof(numbers)/sizeof(numbers[0]);
    char buffer[10];
    char result[150];
    
    int sum, token_counter, found = 0;

    char *token = strtok(expression, " ");

    while (token) {
        
        for (int i=0; i<num_len; ++i){
            if (strcmp(token,numbers[i]) == 0){
                sum += i;
                if (token_counter != 0) {
                    sprintf(buffer," + ");
                    strcat(result,buffer);
                }
                sprintf(buffer,"%d", i);
                strcat(result,buffer);
                found = 1;
            }
        }

        if (found == 0){
            printf("Invalid token: %s\n", token);
        }
    
        token = strtok(NULL, " ");
        token_counter++;
        found = 0;
    }
    
    sprintf(buffer," = %d", sum);
    strcat(result,buffer);
    printf("%s\n", result);
    

    return 0;
}

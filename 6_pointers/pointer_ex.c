#include <stdio.h>

int main() {

    char word[] = "The fence is not made of sausages.";

    char *pvalues = word;

    printf("size of pvalues: %lu\n", sizeof(pvalues));
    printf("size of values without division: %lu\n", sizeof(word));
    printf("length of array include the null terminator: %lu\n", (sizeof(word)/sizeof(char)));
    printf("length of word: %lu\n", (sizeof(word)/sizeof(char)) -1);

    int length_word = (sizeof(word)/sizeof(char)) -1;
     
    // 2. Advance the pointer to the last valid character index
    // 'T' is at ptr + 0, last character '.' is at ptr + (length of word - 1)
    char *last_ptr = pvalues + length_word - 1;
    
    // 3. Dereference the pointer to print the character
    printf("The last character is: %c\n", *last_ptr);

    for (int i = 0; i < length_word / 2; ++i){
        char temp = *pvalues;
        *pvalues = *last_ptr;
        *last_ptr = temp;
        ++pvalues;
        --last_ptr;
    }

    printf("%s\n", word);
    
    return 0;

    // printf("\n%lu\n", pvalues - word);

}

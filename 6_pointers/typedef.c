#include <stdio.h>

int main() {

    char text[] = "Hello!";
    const char *ptext1 = text;
    printf("%s\n", ptext1);

    typedef const char *textpte_t;
    textpte_t ptext2 = text;
    printf("%s\n", ptext2);

    typedef struct Value
    {
        int id;
    } value_t;

    // or.
    typedef struct Value vtype_t;
    
    value_t v1 = {7};
    printf("%d\n", v1.id);

    vtype_t v2 = {9};
    printf("%d\n", v2.id);
    

    return 0;
}

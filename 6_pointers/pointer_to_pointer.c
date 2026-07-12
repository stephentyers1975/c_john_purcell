#include <stdio.h>

const int N1 = 1;
const int N2 = 2;

void modify_pointer(const int **p) {
    *p = &N2;
}

int main() {
    const int *p = &N1;
    printf("%d\n", *p);
    modify_pointer(&p);
    printf("%d\n", *p);

    // my own tests

    int val = 42;
    int *ptr = &val;    // Single pointer pointing to val
    int **dptr = &ptr;  // Double pointer pointing to ptr

    printf("Contents of Val: %d\n", val);
    printf("Address of Val: %p\n", ptr);
    printf("Address of dptr: %p\n", dptr);
    printf("Contents of dptr with single dereference is the contents of ptr -> the address of val: %p\n", *dptr);
    printf("Contents of val by double de-referencing dptr: %d\n", **dptr);

}

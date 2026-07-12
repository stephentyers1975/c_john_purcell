#include <stdio.h>

double multiply(int n, double d) {
    return n * d;
}

int main () {
    // function point
    //return type -> (Pointer type -> function name) -> (function parameters) = addressof function you're referring too
    double (*pfunc)(int, double) = &multiply; // & not strictly required
    //              dereference pointer to function -> pass parameters to function
    double result = (*pfunc)(5, 2.0);

    printf("result: %.2f\n", result);
    return 0;
}

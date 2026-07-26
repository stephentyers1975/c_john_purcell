#include <stdio.h>

typedef enum {
    VAL_INT,
    VAL_FLOAT,
    VAL_STRING
} ValueType;

typedef struct {
    ValueType type;
    union {
        int i;
        float f;
        char *s;
    } data;
} Value;


int main() {
    // Usage
    Value v;
    v.type = VAL_INT;
    v.data.i = 42;

    // demonstrate automatic value assignment in ENUMS if not defined
    printf("%d\n", v.type);

    // Safe handling based on the tag
    if (v.type == VAL_INT) {
        printf("Integer: %d\n", v.data.i);
    }
}

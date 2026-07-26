#include <stdio.h>
#include <stdint.h>

typedef union {
    uint32_t all_flags;
    struct {
        uint32_t enable : 1;
        uint32_t error  : 1;
        uint32_t mode   : 3;
        uint32_t reserved : 27;
    } bits;
} StatusRegister;


int main() {
    
    // Usage
    StatusRegister reg;
    reg.all_flags = 0x00;       // Clear everything at once
    reg.bits.enable = 1;        // Modify a specific bit field cleanly
    
    printf("%d\n", reg.bits.enable);
    return 0;
}

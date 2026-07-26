#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {
    float original = 42.0f;
    uint32_t bits;

    // Type punning via memcpy (fully compliant with C strict aliasing)
    memcpy(&bits, &original, sizeof(bits));

    printf("Float 42.0 as raw bits: 0x%08X\n", bits);

    // Pun back to float
    float reconstructed;
    memcpy(&reconstructed, &bits, sizeof(reconstructed));
    printf("Reconstructed float: %f\n", reconstructed);

    return 0;
}

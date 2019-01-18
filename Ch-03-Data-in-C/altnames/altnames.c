/* Programs that demonstrates how to use the extended int types 
available in the C language to express numbers using a specific number 
of bytes. */
#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int16_t me16;       // me16 is a 16-bit signed integer

    me16 = 4593;
    printf("First, assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h\n");
    printf("me16 = %" PRId16 "\n", me16);

    return 0;
}
#include <stdio.h>
#include  <inttypes.h> 

uint32_t v[4];

int main(void)
{
    printf("V     = 0x%08lX\n", (uintptr_t)v);
    printf("&V    = 0x%08lX\n", (uintptr_t)&v);
    printf("&V[0] = 0x%08lX\n", (uintptr_t)&v[0]);
    printf("&V[1] = 0x%08lX\n", (uintptr_t)&v[1]);
    printf("&V[2] = 0x%08lX\n", (uintptr_t)(v + 2));
    printf("&V[2] = 0x%08lX\n", (uintptr_t)(v + 3));
    return 0;
}
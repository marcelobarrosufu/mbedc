#include <stdint.h>
#include <stdio.h>

void add(uint32_t *pv)
{
    *pv = *pv + 1;
}

int main(void)
{
    uint32_t var = 10;
    uint32_t *pvar = &var;
    
    add(pvar);
    printf("%u\r\n",var);
    add(&var);
    printf("%u\r\n",var);    
}
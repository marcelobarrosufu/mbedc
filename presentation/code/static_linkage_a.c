// file2.c
#include <stdint.h>
#include <stdio.h>

// not recommended!
extern uint32_t var;
extern uint32_t var_get(void);

int main(void)
{
	printf("Val is %u\r\n",var);
	printf("Val is %u\r\n",var_get());	
	return 0;
}
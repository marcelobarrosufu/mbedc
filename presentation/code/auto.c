#include <stdint.h>
#include <stdio.h>

int main(void)
{
	/* auto */ uint32_t val = 0;
	printf("Val is %u\r\n",val);
	
	{ // creating a new scope
		/* auto */ uint32_t val = 10;
		printf("Val is %u\r\n",val);
	}
	
	val++;
	printf("Val is %u\r\n",val);
	
	return 0;
}
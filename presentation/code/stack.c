#include <stdint.h>
#include <stdio.h>

uint32_t global_sum = 0;

uint32_t sum(uint32_t *values, 
			 uint32_t size)
{
	uint32_t sum = 0;
	
	for(size_t n = 0; n < size; n++)
		sum += values[n];
	
	return sum;
}

int main(void)
{
	uint32_t data[] = { 1, 2, 3 };
	global_sum = sum(data,3);
	printf("Sum is %u\r\n",global_sum);
	return 0;
}
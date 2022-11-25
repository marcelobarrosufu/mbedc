#include <stdint.h>
#include <stdbool.h>

#define DATA_SIZE 128

int drv_init(void)
{
	static bool initialized = false;
	static uint32_t data[DATA_SIZE];
	
	if(!initialized)
	{
		for(size_t n = 0 ; n < DATA_SIZE; n++)
			data[n] = n;
			
		initialized = true;
	}
}
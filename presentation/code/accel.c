#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "demo.h"

static bool started = false;

static void accel_init_drv(void)
{
}

void accel_read(accel_data_t *data)
{
}

void accel_init(void)
{
	if(!started)
	{
		accel_init_drv();
		started = true;
	}
}
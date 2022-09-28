#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "demo.h"

static bool started = false;

static void accel_drv_init(void)
{
}

void accel_read(accel_data_t *data)
{
}

void accel_init(void)
{
	if(!started)
	{
		accel_drv_init();
		started = true;
	}
}
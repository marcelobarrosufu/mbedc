// file2.c
#include <stdint.h>
#include <stdio.h>
#include "file1.h"

int main(void)
{
	printf("Val is %u\r\n",var_get());	
	return 0;
}
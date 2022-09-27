#include <stdint.h>
#include <stdio.h>

typedef enum obj_type_e
{
    OBJ_TYPE_RECT = 0,
    OBJ_TYPE_CIRCLE,
} obj_type_t;

typedef struct coord_s
{
	uint32_t x;
	uint32_t y;
} coord_t;

typedef struct rect_s
{
    coord_t c1;
    coord_t c2;
} rect_t;
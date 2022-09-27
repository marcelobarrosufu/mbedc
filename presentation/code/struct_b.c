typedef struct circle_s
{
    coord_t c;
    uint32_t radius;
} circle_t;

typedef union objs_u
{
    circle_t circle;
    rect_t rect;
} objs_t;

typedef struct obj_s
{
    obj_type_t type;
    objs_t elem;
} obj_t;


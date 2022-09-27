int main(void)
{
  obj_t obj1 = 
    { .type = OBJ_TYPE_RECT, 
      .elem.rect.c1 = { 0, 0},
      .elem.rect.c2 = {10,10}};

  obj_t obj2 = 
    { .type = OBJ_TYPE_CIRCLE, 
      .elem.circle.c = { 0,0 },
      .elem.circle.radius = 10};  
      
  obj_print(&obj1);
  obj_print(&obj2);
  
  return 0;
}
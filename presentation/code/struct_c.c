void obj_print(obj_t *obj)
{
  if(obj->type == OBJ_TYPE_RECT)
  {
    printf("RECT: %u,%u,%u,%u\n",
      obj->elem.rect.c1.x,
      obj->elem.rect.c1.y,
      obj->elem.rect.c2.x,
      obj->elem.rect.c2.y);
  }
  else if(obj->type == OBJ_TYPE_CIRCLE)
  {
    printf("CIRCLE: %u,%u,%u\n",
      obj->elem.circle.c.x,
      obj->elem.circle.c.y,
      obj->elem.circle.radius);
  }
}
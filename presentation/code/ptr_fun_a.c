#include <stdio.h>
#include <inttypes.h>

int64_t sum(int32_t a, int32_t b)
{
    return a + b;
}

int main (void)
{
  printf("%lu\n",sum(10,20)); // 30
  int64_t (*pfun)(int32_t a, int32_t b) = sum;
  printf("%lu\n",pfun(30,40)); // 70
  uintptr_t pf = (uintptr_t) sum;
  int64_t r = ((int64_t (*)(int32_t a, int32_t b))pf)(50,60);
  printf("%lu\n",r); // 100
  return 0;
}
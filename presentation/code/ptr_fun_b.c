#include <stdio.h>
#include <inttypes.h>

typedef int64_t (*sum_t)(int32_t a, int32_t b);

int64_t sum(int32_t a, int32_t b)
{
    return a + b;
}
int main (void)
{
  printf("%lu\n",sum(10,20)); // 30
  sum_t pfun = sum;
  printf("%lu\n",pfun(30,40)); // 70
  uintptr_t pf = (uintptr_t) sum;
  int64_t r = ((sum_t)pf)(50,60);
  printf("%lu\n",r); // 100
  return 0;
}
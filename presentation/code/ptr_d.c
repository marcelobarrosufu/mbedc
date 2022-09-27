#include <stdio.h>
#include  <inttypes.h> 
typedef struct trans_s
{
  uint32_t ID;
  float value;
} trans_t;
int main(void)
{
  trans_t trans[4] = { 0 } ;
  trans_t *ptrans = trans;
  printf("SIZE    = %lu\n", sizeof(trans_t));
  printf("TRANS   = 0x%08lX\n", (uintptr_t)trans);
  printf("PTRANS  = 0x%08lX\n", (uintptr_t)ptrans);
  printf("&PTRANS = 0x%08lX\n", (uintptr_t)&ptrans);
  printf("TRAN[0] = 0x%08lX\n", (uintptr_t)&trans[0]);
  printf("TRAN[1] = 0x%08lX\n", (uintptr_t)(ptrans + 1));
  return 0;
}
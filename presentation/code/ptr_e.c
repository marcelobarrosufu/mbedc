#include <stdio.h>
#include <inttypes.h>
#include <string.h>
int main (void)
{
  uint8_t str1[] = { 'a', 'b', '\0' };
  uint8_t *str2 = "ab";
  uint8_t *str3[] = { "ab", "12" };
  printf("STR1 = 0x%08lX\n", (uintptr_t) str1);
  printf("STR2 = 0x%08lX\n", (uintptr_t) str2);
  printf("STR3 = 0x%08lX\n", (uintptr_t) str3);
  printf("STR1    %s,%lu\n",str1,strlen(str1));
  printf("STR2    %s,%lu\n",str2,strlen(str2));
  printf("STR3[0] %s,%lu\n",str3[0],strlen(str3[0]));
  printf("STR3[1] %s,%lu\n",str3[1],strlen(str3[1]));
  return 0;
}
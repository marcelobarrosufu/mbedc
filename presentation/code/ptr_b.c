#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct frame_s
{
  uint8_t size;
  uint8_t cmd;
  uint8_t payload[32];
} frame_t;

void frame_print(frame_t *cmd)
{
  printf("C:%u S:%u P:%s\r\n",
    cmd->cmd,cmd->size,(char *)cmd->payload);
}

int main(void)
{
  frame_t frame = { 0 };   
  frame.cmd = 1;
  frame.size = 6;
  strcpy((char *)frame.payload,"teste");
  frame_print(&frame);
  return 0;
}
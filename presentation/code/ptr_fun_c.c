#include <stdio.h>
#include <stdint.h>

void spi_dev1_write(uint8_t *buf, uint16_t size){ /* driver here */ }
void spi_dev1_read(uint8_t *buf, uint16_t size){ /* driver here */ }
void spi_dev2_write(uint8_t *buf, uint16_t size){ /* driver here */ }
void spi_dev2_read(uint8_t *buf, uint16_t size){ /* driver here */ }

typedef void (*write_t)(uint8_t *buf, uint16_t size);
typedef void (*read_t)(uint8_t *buf, uint16_t size);

typedef struct drv_s
{
  write_t write;
  read_t read;
} drv_t;

int main(void)
{
  uint8_t data[] = {10,11,12,13,14};
  drv_t drv = { .write = spi_dev1_write, .read = spi_dev1_read };
  drv.write(data,5); // write on dev1
  
  drv.write = spi_dev2_write; 
  drv.read = spi_dev2_read;
  drv.write(data,5); // write on dev2
  return 0;
}
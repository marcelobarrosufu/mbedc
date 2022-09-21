#ifndef __ACCEL_H__
#define __ACCEL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define ACCEL_NUM_AXIS 3

typedef struct accel_data_s
{
	float axis[ACCEL_NUM_AXIS];
} accel_data_t;

void accel_read(accel_data_t *data);
void accel_init(void);

#ifdef __cplusplus
}
#endif

#endif /* __ACCEL_H__ */
typedef struct accel_s {
	float x;
	float y;
	float z;		
} accel_t;

uint32_t rand_perc(void)
{
	uint32_t val = rand() % 100;
	return val;
}
accel_t accel_axis_get1(void)
{
	accel_t accel = { 0 };
	accel_read(&accel_t);
	return accel;
}
accel_t accel_axis_get2(void)
{
	accel_t *accel = calloc(1,sizeof(accel_t));
	accel_read(accel_t);
	return *accel;
}




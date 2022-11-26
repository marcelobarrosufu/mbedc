typedef struct accel_s {
	float x;
	float y;
	float z;		
} accel_t;

accel_t *accel_axis_get3(void)
{
	accel_t *accel = calloc(1,sizeof(accel_t));
	accel_read(accel);
	return accel;
}
accel_t *accel_axis_get4(void)
{
	/* auto */ accel_t accel = { 0 };
	accel_read(&accel);
	return &accel;
}
accel_t *accel_axis_get5(void)
{
	static accel_t accel = { 0 };
	accel_read(&accel);
	return &accel;
}


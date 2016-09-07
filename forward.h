#include <khepera/khepera.h>
#include <signal.h>
forward()
{
	kh4_SetMode(kh4RegSpeed,dsPic);
	kh4_set_speed(200,200,dsPic);
	usleep(5000000);
}

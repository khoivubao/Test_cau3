#include <stdio.h>
#include <string.h>

char ret[] = "HTTP1.1 200 OK {“light”: “on”,“fan”: “off”,“motor”: “off”}";

struct smartHome {
	char light;
	char fan;
	char motor
};

struct smartHome trangthai;
void xuly()
{
	char* klight = "light";
	char* kfan = "fan";
	char* kmotor = "motor";

	char ttlight[32] = { 0 };
	char ttfan[32] = { 0 };
	char ttmotor[32] = { 0 };

	char* x = strstr(ret, klight);
	char* y = strstr(ret, kfan);
	char* z = strstr(ret, kmotor);
	int ind = 0;
	while (x[ind + 9] != '\"')
	{
		ttlight[ind] = x[ind + 10];
		ind++;
	}
	trangthai.light = ttlight;

	while (y[ind + 6] != '\"')
	{
		int ind = 0;
		ttfan[ind] = y[ind + 6];
		ind++;
	}
	trangthai.fan = ttfan;

	while (z[ind + 8] != '\"')
	{
		int ind = 0;
		ttmotor[ind] = z[ind + 8];
		ind++;
	}
	trangthai.motor = ttmotor;
}
void main()
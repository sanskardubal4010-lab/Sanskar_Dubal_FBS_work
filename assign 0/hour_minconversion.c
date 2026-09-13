#include<stdio.h>
int main()
{
	int min=80,hours,remain_min;
	hours=min/60;
	remain_min=min%60;
	printf("conversion of %d minutes to hour and remainig time is %d hour and %d min",min,hours,remain_min);
	return 0;
}
#include<stdio.h>
int main()
{
	double time,avg_speed,distance;
	double liter;
	scanf("%lf",&time);
	scanf("%lf",&avg_speed);
	distance=time*avg_speed;
	liter=distance/12;
	printf("%.3lf\n",liter);
	return 0;
}
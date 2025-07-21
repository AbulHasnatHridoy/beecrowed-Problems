#include<stdio.h>
//#define pi=3.14159;
int main()
{
	
  double R,pi;
  scanf("%lf",&R);
  double sVolume=(4.0/3)*3.14159*(R*R*R);
  printf("VOLUME = %.3lf\n",sVolume);
  return 0;
}
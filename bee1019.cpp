#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);


	int hours=n/3600; //geting the hours
	int remaining=n%3600;  //remaining seconds after calculating hours
	int minutes=remaining/60;//geting the minutes
	
	int seconds=remaining%60;//geting the seconds
	printf("%d:%d:%d\n",hours,minutes,seconds);

  return 0;

}
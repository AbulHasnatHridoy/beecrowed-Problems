#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int hours=n/3600;
	int remaing=n%3600;
	int minutes=remaing/60;
	int second=remaing%60;
	printf("%d :%d:%d\n",hours,minutes,second);
	return 0;
}
#include<stdio.h>
int main()
{
	char name;
	double salary,totalSold;
	scanf("%s",&name);
	scanf("%lf",&salary);
	scanf("%lf",&totalSold);
	double total=salary+(totalSold*0.15);
	printf("TOTAL = R$ %.2lf\n",total);
	return 0;

}
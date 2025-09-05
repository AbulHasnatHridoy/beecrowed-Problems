#include <stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	int year=age/365;
	int remaining_days=age%365;
	int month=remaining_days/30;
	int days=remaining_days%30;
	printf("%d ano(s)\n",year);
	printf("%d mes(es)\n",month);
	printf("%d dia(s)\n",days);
	return 0;

}
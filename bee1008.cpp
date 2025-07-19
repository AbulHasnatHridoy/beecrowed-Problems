#include<stdio.h>
int main()
{
	int employeeNumber,workedHours;
	double amountPerHour,salary;
	scanf("%d",&employeeNumber);
	scanf("%d",&workedHours);
	scanf("%lf",&amountPerHour);
	salary=workedHours*amountPerHour;
	printf("NUMBER = %d\n",employeeNumber);
	printf("SALARY = U$ %.2lf\n",salary);
	return 0;


}
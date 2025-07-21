#include<stdio.h>
int main()
{
	int proCode[2],proUnit[2];
	double price[2],total=0.0;
	for (int i=0; i<2;i++)
	{
		scanf("%d",&proCode[i]);
		scanf("%d",&proUnit[i]);
		scanf("%lf",&price[i]);

	}
	for (int i=0;i<2;i++)
	{
		total=total+(proUnit[i]*price[i]);

	}
	printf("VALOR A PAGAR: R$ %.2lf\n",total);
	return 0;
	
}
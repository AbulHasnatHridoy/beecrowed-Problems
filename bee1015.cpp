#include<stdio.h>
#include<math.h>
int main()
{
	double x1,y1,x2,y2,dis;
	scanf("%lf",&x1);
	scanf("%lf",&y1);
	scanf("%lf",&x2);
	scanf("%lf",&y2);
	
	
	dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%.4lf\n",dis);
	return 0;

}
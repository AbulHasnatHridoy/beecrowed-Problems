#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    //baskara's formula
	double delta= b*b-4*a*c;
    
    double R1= (-b+sqrt(delta))/(2*a);
    double R2= (-b-sqrt(delta))/(2*a);
    if(a!=0.0  && delta >=0.0)
    {
    printf("R1 = %.5lf\n",R1);
    printf("R2 = %.5lf\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
	return 0;
}
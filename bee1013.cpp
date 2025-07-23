#include<stdio.h>
int main()
{
	int a,b,s;
	int result,major;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&s);
	major=a;
	if(b>major && b>s)
	{
	  major=b;
	}
	 if(s>major && s>b)
	{
		major=s;
	}
	printf("%d eh o maior\n",major);
	return 0;
	
}
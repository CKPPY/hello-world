#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y,v,w;
	printf("Please input a:\n");
	scanf("%lf",&a);
	printf("Please input b:\n");
	scanf("%lf",&b);
	printf("Please input c:\n");
	scanf("%lf",&c);
	printf("Please input d:\n");
	scanf("%lf",&d);
	printf("Please input e:\n");
	scanf("%lf",&e);
	printf("Please input f:\n");
	scanf("%lf",&f);
	if (b*d==a*e)
	{
		if (c*d==a*f)
		{
			v=c/a;
			w=b/a;
			printf("y=m\n x=%lf-%lf*m",v,w);
		}
		else
		{
			printf("No real root");
		}	
	}
	else
	{
		x=(b*f-c*e)/(b*d-a*e);
		y=(c*d-a*f)/(b*d-a*e);
		printf("x=%lf\n y=%lf",x,y);
	}
 } 

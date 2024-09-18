#include <stdio.h>
#include <math.h>
int main()
{
	for(;;)
	{
	int i,n;
	float x,s=0,p,r,o,y;
	printf("enter the value of n\n");
	scanf(" %d",&n);
	printf("enter the value of x\n");
	scanf(" %f",&x);
	for (i=2;i<=n;i++)
	{
		y = (x-1)/(x);
		p = pow(y,i);
		r = p/2;
		s = s+r;
	}
	o = s+((x-1)/(x));
	printf("sum = %f\n",o);
    }
    return 0;
}
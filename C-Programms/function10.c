/*OUTPUT*/
#include<stdio.h>
float power(float,int);
int main()
{
	float pow,a;
	int b;
	printf("Enter any two numbers :");
	scanf("%f%d",&a,&b);
	pow=power(a,b);
	printf("The power %f raise to %d is %f",a,b,pow);
	return 0;
}
float power(float x,int y)
{
	float power=1;
	int i;
	for(i=1;i<=y;i++)
	{
		power=power*x;
	}
	return power;
}
/*Checking sine and cosine angles*/
#include<stdio.h>
#include<math.h>
int main()
{
	float radian,temp,angle,sum;
	printf("\nEnter the angle in degrees:");
	scanf("%f",&angle);
	radian=angle*3.14/180.0;
	sum=(pow(sin(radian),2)+pow(cos(radian),2));
	if (sum==1)
	{
		printf("\nSum of square of sin(%f) and cos(%f) is 1",angle,angle);
	}
	else
	{
		printf("\nSum of square of sin(%f) and cos(%f) is not 1",angle,angle);
	}
	return 0;
}
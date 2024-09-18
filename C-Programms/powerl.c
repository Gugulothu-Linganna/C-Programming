/*Compute value of one number raised to another*/
#include<stdio.h>
#include<math.h>
int main()
{
	int y,i;
	float x,power;
	printf("Enter two  number:");
	scanf("%f%d",&x,&y);
	power=i=1;
	while(i<=y)
	{
		power=power*x;
		i++;
	}
	printf("%f to the power %d is %f\n",x,y,power);
	return 0;
}
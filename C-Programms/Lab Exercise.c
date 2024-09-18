/*CALCULATION OF SIMPLE INTEREST*/
#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("\n enter the p,n,r values");
	scanf("%d %d %f",&p,&n,&r);
	si=(p*n*r/100);
	printf("\n the si=%f",si);
	return 0;
}
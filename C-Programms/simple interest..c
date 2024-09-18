/*Calculation of simple interest*/
#include<stdio.h>
int main()
{
	int p,n;
	float s,r;
	printf("Enter the p,n,r values:");
	scanf("%d%d%f",&p,&n,&r);
	s=(p*n*r)/100;
	printf("The simple interest=%f",s);
	return 0;
}
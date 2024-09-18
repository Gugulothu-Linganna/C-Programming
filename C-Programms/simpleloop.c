/*Calculation of simple interest by loop*/
#include<stdio.h>
int main()
{
	int p,n,count=1;
	float r,si;
	while(count<=3)
	{
		printf("\nEnter the p,n and r values:");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("\nSimple interest=Rs.%f",si);
		count=count+1;
	}
	return 0;
}
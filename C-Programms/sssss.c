/*SIMPLE INTEREST*/
#include<stdio.h>
int main()
{
	int d,p,n,i=1;
	float r,si;
	while(1)
	{
		printf("\n\nEnter the p,n,d and r values:");
		scanf("%d%d%d%f",&p,&n,&d,&r);
		si=(p*n*r/100)+(p*r*d/3000);
		printf("\nSimple interest=Rs.%f\nTotal=%f\n",si,si+p);
		
	}
	return 0;
}
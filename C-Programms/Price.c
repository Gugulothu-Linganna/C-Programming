/*Calculation of profit and loss*/
#include<stdio.h>
int main()
{
	float cp,sp,p,l;
	printf("\nEnter the selling price and cost price:");
	scanf("%f%f",&sp,&cp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
	printf("\nThe seller made a profit of Rs.%f\n",p);
	if(l>0)
	printf("\nThe seller incurred loss of Rs.%f\n",l);
	if(p==0)
	printf("There is no loss, no profit\n");
	return 0;
}
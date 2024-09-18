/*Determine overtime pay of 10 employees*/
#include<stdio.h>
int main()
{
	int i=1,hour;
	float ovtpa;
	while(i<=10)
	{
		printf("\nEnter the no. of hours worked:");
		scanf("%d",&hour);
		if(hour>=40)
		ovtpa=(hour-40)*12;
		else
		ovtpa=0;
		printf("Hour=%d and overtime pay=Rs.%f\n",hour,ovtpa);
		i++;
	}
	return 0;
}
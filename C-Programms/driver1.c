/*Determine wether a driver should be insured or not*/
#include<stdio.h>
int main()
{
	int age;
	char ms,sex;
	printf("\nEnter the marital, sex and age status:");
	scanf("%c%c%d",&ms,&sex,&age);
	if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
	printf("\nDriver should be Insured");
	else
	printf("\nDriver should not be insured");
	return 0;
}
/*Determine wether a driver should be insured or not*/
#include<stdio.h>
int main()
{
	int age;
	char ms,sex;
	printf("\nEnter the age, sex and marital status:");
	scanf("%d %c %c",&age,&sex,&ms);
	if((ms=='m')||(ms=='u'&&sex=='m'&&age>30)||(ms=='u'&&sex=='f'&&age>25))
	printf("\nThe Driver should be insured");
	else
	printf("\nThe Driver should not be insured");
	return 0;
}
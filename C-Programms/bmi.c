/*Categorisation of BMI*/
#include<stdio.h>
int main()
{
	float bmi,ht,wt;
	printf("\nEnter the Height(in mts) and Weight(in kgs):");
	scanf("\n%f%f",&ht,&wt);
	bmi=(wt/(ht*ht));
	if(bmi<15)
	printf("\nStarvation of %f bmi",bmi);
	else if(bmi>=15.1&&bmi<=17.5)
	printf("\nAnorexic of %f bmi",bmi);
	else if(bmi>=17.6&&bmi<=18.5)
	printf("\nUnderweight of %f bmi",bmi);
	else if(bmi>=18.6&&bmi<=24.9)
	printf("\nIdeal of %f bmi",bmi);
	else if(bmi>=25&&bmi<=25.9)
	printf("\nOverweight of %f bmi",bmi);
	else if(bmi>=30&&bmi<=30.9)
	printf("\nObese of %f bmi",bmi);
	else if(bmi>=40)
	printf("\nMorbidly Obese of %f bmi",bmi);
	return 0;
}
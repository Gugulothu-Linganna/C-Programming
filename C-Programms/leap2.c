/*Check wether a year leap or not*/
#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter year:");
	scanf("%d",&year);
	if(year%400==0||year%100!=0&&year%4==0)
	printf("\nLeap year");
	else
	printf("Not a Leap year");
	return 0;
}
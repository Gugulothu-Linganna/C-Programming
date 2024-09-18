/*LEAP YEAR*/
#include<stdio.h>
int year(int );
int main()
{
	int yr,year;
	printf("Enter any year :");
	scanf("%d",&yr);
	leap_or_not(yr);
	return 0;
}
int leap_or_not(int yr)
{
	if(yr%100==0)
	{
		if(yr%400==0)
		printf("LEAP YEAR\n");
	    else
	    printf("NOT A LEAP YEAR\n");
	}
	else
	{
		if(yr%4==0)
		printf("LEAP YEAR\n");
		else
		printf("NOT A LEAP YEAR\n");
		return;
	}
}
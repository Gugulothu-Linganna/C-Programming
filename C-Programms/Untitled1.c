#include<stdio.h>
#include<math.h>
int main()
{
	int yr;
	printf("Enter any year :");
	scanf("%d",&yr);
	if(yr%400==0)
	printf("LEAP YEAR");
	else
	{
		if(yr%4==0)
		printf("LEAP YEAR");
		else
		printf("NOT LEAP YEAR");
	}
	return 0;
}

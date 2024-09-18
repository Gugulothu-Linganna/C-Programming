/*Calculation of gross salary of Ramesh*/
#include<stdio.h>
int main()
{
	int bp,grp,hra,da;
	printf("Enter the bp value:");
	scanf("%d",&bp);
	hra=bp/2;
	da=bp/5;
	grp=bp+hra+da;
	printf("The Ramesh basic salary =%d\nThe house rent =%d\nThe daily allowance =%d\nThe gross salary =%d",bp,hra,da,grp);
	return 0;
}
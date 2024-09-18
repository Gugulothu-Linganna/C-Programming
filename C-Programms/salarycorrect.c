/*Determine the position of employee by his salary*/
#include<stdio.h>
int main()
{
	float sal;
	printf("\nEnter the salary:");
	scanf("%f",&sal);
	if(sal>=25000&&sal<=40000)
	printf("Manager\n");
	if(sal>=15000&&sal<25000)
	printf("Accountant\n");
	if(sal<15000)
	printf("Clerk\n");
	return 0;
}
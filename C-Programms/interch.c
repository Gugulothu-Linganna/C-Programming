/*Interchanging of two numbers*/
#include<stdio.h>
int main()
{
	int t,c,d;
	printf("Enter the c,d values:");
	scanf("%d%d",&c,&d);
	t=c;
	c=d;
	d=t;
	printf("The c value=%d\nThe d value=%d\n",c,d);
	return 0;
}
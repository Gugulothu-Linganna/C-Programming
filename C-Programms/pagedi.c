/*Paper print calculation*/
#include<stdio.h>
int main()
{
	int A1,A2,A3,A4,A5,A6,A7,A0,A8,w,h;
	printf("\nEnter the dimensions of pages:");
	scanf("%d%d",&w,&h);
	printf("\nA0%d*%d",w,h);
	w=w/2;
	printf("\nA1%d*%d",h,w);
	h=h/2;
	printf("\nA2%d*%d",w,h);
	w=w/2;
	printf("\nA3%d*%d",h,w);
	h=h/2;
	printf("\nA4%d*%d",w,h);
	w=w/2;
	printf("\nA5%d*%d",h,w);
	h=h/2;
	printf("\nA6%d*%d",w,h);
	w=w/2;
	printf("\nA7%d*%d",h,w);
	h=h/2;
	printf("\nA8%d*%d",w,h);
	return 0;
}
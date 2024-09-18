/*Check wether a triangle is valid or not*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter the angles of triangle:");
	scanf("\n%d%d%d",&a,&b,&c);
	if((a+b+c)==180)
	printf("The Triangle is Valid ");
	else
	printf("The Triangle is Invalid");
	return 0;
}
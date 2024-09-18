/*Determine the type of triangle by its sides*/
#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("\nEnter the sides of triangle:");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1==s2)||(s2==s3)||(s1==s3))
	printf("\nThe Triangle is Isosceles triangle");
	if(s1==s2&&s2==s3)
	printf("\nThe Triangle is Equilateral triangle");
	if(s1!=s2&&s2!=s3&&s3!=s1)
	printf("\nThe Triangle is Scalene triangle");
	if((s1*s1+s2*s2==s3*s3)||(s2*s2+s3*s3==s1*s1)||(s1*s1+s3*s3==s2*s2))
	printf("\nThe Triangle is rightangled triangle");
	return 0;
}
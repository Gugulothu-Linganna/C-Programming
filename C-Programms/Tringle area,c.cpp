/*Program to find area of the triangle by its sides*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("\nenter the a,b,c values(side lengths of tringle):");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of tringle=%f",area);
	return 0;
	
}
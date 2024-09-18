#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter the a and b values:");
	scanf("%f%f",&a,&b);
	c=pow(a,b);
	printf("The result of c=%f",c);
	return 0;
}
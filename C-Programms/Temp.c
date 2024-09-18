/*Temperature conversion from Fahrenheit degrees to Centigrade*/
#include<stdio.h>
int main()
{
	int f;
	float c;
	printf("Enter the temperature in the city in Fahrenheit:");
	scanf("%d",&f);
	c=(f-32)/1.8;
	printf("The Tempurature in the city in centigrade=%f",c);
	return 0;
}

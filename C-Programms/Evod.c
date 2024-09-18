/*Check wether the number even or odd*/
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	if(n%2==0)
	printf("The number is Even\n");
	else
	printf("The number is Odd\n");
	return 0;
}
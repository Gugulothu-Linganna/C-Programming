/*output*/
#include<stdio.h>
int main()
{
	int i=0,n,num;
	printf("Enter a number:");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		n=n/10;
		++i;
	}
	printf("%d is number of digits in a number %d",i,num);
	return 0;
}
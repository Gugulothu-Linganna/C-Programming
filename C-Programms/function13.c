/*OUTPUT*/
#include<stdio.h>
int prime(int);
int main()
{
	int n;
	printf("Enter any number :");
	scanf("%d",&n);
	prime(n);
	}
	int prime(int x)
	{
		int i;
	for(i=2;i<=x;i++)
	{
		if(x%i==0)
		{
		printf("%d ",i);
		x=x/i;
		i--;
		}
	}
	return i;
}
/*output*/
#include<stdio.h>
int main()
{
	int i,n;
	while(1)
	{
	printf("Enter a number:\n");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			printf("NOT A PRIME NUMBER\n");
			break;
		}
		i++;
	}
	if(i==n)
	printf("A PRIME NUMBER\n");
	}
	i++;
	return 0;
}

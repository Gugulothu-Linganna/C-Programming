/*output*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("NOT A PRIME NUMBER\n");
			break;
		}
	}
	if(i==n)
	printf("A PRIME NUMBER\n");
	return 0;
}

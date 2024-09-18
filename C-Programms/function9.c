/*factorial value*/
#include<stdio.h>
int fact(int);
int main()
{
	int num,factorial;
	printf("Enter any number :");
	scanf("%d",&num);
	factorial=fact(num);
	printf("Factorial value of %d is %ld",num,factorial);
	return 0;
}
int fact(int num)
{
	int i,factorial=1;
	for(i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}


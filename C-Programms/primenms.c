/*prime numbers between 1 and 500*/
#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("Prime numbers between 1 and 500 are:\n\t1\t");
	while(i<=500)
	{
		n=2;
		while(n<i)
		{
			if(i%n==0)
			break;
			n++;
		}
		if(n==i)
		{
			printf("%d\t",i);
		}
		i++;
	}
	return 0;
}
/*#include<stdio.h>
int main()
{
	int i,n;
    printf("Prime numbers between 1 and 500 are:\n\t1\t");
	for(i=1;i<=500;i++)
	{
		for(n=2;n<i;n++)
		{
			if(i%n==0)
			break;
		}
		if(n==i)
		printf("%d\t",i);
	}
	return 0;
}*/

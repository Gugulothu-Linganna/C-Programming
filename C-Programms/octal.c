/*output*/
#include<stdio.h>
int main()
{
	int temp,i=0,j=1,k=0,n,num,t=1;
    while(t<=3)
    {
	printf("\nEnter a number:");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		temp=n%8;
		i=temp*j;
		n=n/8;
		j=j*10;
		k=k+i;
    }
	printf("\n%d is the octal equivalent value of %d",k,num);
    }
    return 0;
}
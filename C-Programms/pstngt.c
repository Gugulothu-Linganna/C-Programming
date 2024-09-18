/*output*/
#include<stdio.h>
int main()
{
	int n,a=0,c=0,b=0,num;
	printf("Enter user required number:");
	scanf("%d",&num);
	printf("Enter %d numbers:",num);
	while(num)
	{
	scanf("%d",&n);
	if(n>0)
	a++;
	else if(n<0)
	b++;
	else
	c++;
	num--;
    }
    printf("Positive numbers=%d\nNegative numbers=%d\nNumber of zeroes=%d",a,b,c);
    return 0;
}
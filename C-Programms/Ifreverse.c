/*Check wether a reversed number equal or not with given number*/
#include<stdio.h>
int main()
{
	int num,n,d1,d2,d3,d4,d5,rev;
	printf("\nEnter a number:");
	scanf("%d",&n);
	d5=n%10;
	d4=(n/10)%10;
	d3=(n/100)%10;
    d2=(n/1000)%10;
    d1=(n/10000)%10;
    rev=10000*d5+d4*1000+d3*100+d2*10+d1;
	printf("The reverse number=%d",rev);
	if(rev==n)
	printf("\nThe reverse of number %d is same as actual number",n);
	else
	printf("\nThe reverse of number %d is not same as actual number",n);
    return 0;
}
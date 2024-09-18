/*SUM OF FIVE DIGITS BY RECURSIONS*/
#include<stdio.h>
int resum(int);
int main()
{
    int n,sum;
    printf("Enter a number :");
    scanf("%d",&n);
    sum=resum(n);
    printf("The sum of digits of a number %d is %d ",n,sum);
    return 0;
}
int resum(int n)
{
    int s,r;
    if(n!=0)
    {
        r=n%10;
        s=r+resum(n/10);
        return s;
    }
    else
        return 0;
}

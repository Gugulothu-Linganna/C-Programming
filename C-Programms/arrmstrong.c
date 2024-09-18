/*Program to print armstrong number from 1 to 500*/
#include<stdio.h>
int main()
{
	int i=1,n,r,s;
	while(i<=500)
	{
		n=i;
		s=0;
		while(n!=0)
		{
			r=n%10;
			s=s+(r*r*r);
			n=n/10;
		}
		if(i==s)
		{
			printf("The armstrong number is %d:\n",i);
        }
		i++;
	}
	return 0;
}
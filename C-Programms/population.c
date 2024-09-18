/*output
#include<stdio.h>
int main()
{
	int t,p=100000,i;
	int r=0;
	for(i=1;i<=10;i++)
	{
		p=p-r;
		r=p*10/100;
		printf("For Year=%d\nThe total Population=%d\n",i,p);
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i,p=100000;
	for(i=10;i>=1;i--)
	{
		printf("Population at the end of %d year is %d\n",i,p);
		p=p-p*0.1;
	}
	return 0;
}

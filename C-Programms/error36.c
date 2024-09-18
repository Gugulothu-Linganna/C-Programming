/*ERRORS*/
#include<stdio.h>
int addmult(int,int)
int main()
{
	int i=3,j=4,k,l;
	k=addmult(i,j);
	l=addmult(i,j);
	printf("%d %d\n",k,l);
	return 0;
}
int addmult(int a,int b)
{
	int c,d;
	c=a+b;
	d=a*b;
	return (c,d);
}
/*calculation  of simple interest*/
#include<stdio.h>
int main()
{
	int i,p,a;
	float t,si;
	i=2,p=2000,a=2;
	si=p*a*i/100;
	t=p+si;
	printf("simple interest=%f\nT0tal =%f",si,t);
	return 0;
}

/*output*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float a,p,n,r,q,c;
	for(i=1;i<=10;i++)
	{
		printf("\nFor Set=%d\n",i);
		printf("Enter p,n,r,q values:");
		scanf("%f%f%f%f",&p,&n,&r,&q);
		a=p*pow((1+r/q),n*q);
		c=a-p;
		printf("The amount=%f\ncompund interest=%f\n",a,c);
	}
	return 0;
}
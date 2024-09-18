/*output
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float n,a,t=0.0,r,s;
	printf("Enter a number:");
	scanf("%f",&n);
	a=(n-1)/n;
	for(i=2;i<=7;i++)
	{
		r=pow(a,i);
		s=r/2;
		t=t+s;
	}
	t=a+t;
	printf("%f",t);
	return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
	while (1){
	
	int i,n;
	float r,p,a,x,s=0;
		printf("Enter limit of series n and value of x :");
		scanf("%d%f",&n,&x);
		p=(x-1)/(x);
		for (i=2;i<=n;i++)
		{
			r=(pow(p,i));
			a=r/2;
			s=s+a;
		}
		r=((x-1)/(x))+s;
		printf("sum of %d terms in a given series is %f\n\n",n,r);
	}
	return 0;
}
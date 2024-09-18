/*output*/
#include<stdio.h>
int main()
{
	int i=1,n,p;
	float r,si;
	while(1)
	{
		printf("Enter p,n,r values:");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("Simple interest=%f\n",si);
	}
    return 0;
}
/*output*/
#include<stdio.h>
int main()
{
	int i=1,n,p;
	float r,si;
	while(i<=2)
	{
		printf("Enter p,n,r values\n:");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("Simple interest=%d\n");
	}
    return 0;
}
/*pointers*/
#include<stdio.h>
void arper(int,float*,float*);
int main()
{
	int radius;
	float area,perm;
	printf("Enter any value :");
	scanf("%d",&radius);
	arper(radius,&area,&perm);
	printf("area=%f perimeter=%f",area,perm);
	return 0;
}
void arper(int r,float*area,float*perm)
{
	*area=3.14*r*r;
	*perm=2*3.14*r;
	return 0;
}
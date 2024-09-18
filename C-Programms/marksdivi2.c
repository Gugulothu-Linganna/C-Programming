/*Check the division obtained by student*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("\nEnter the marks in five subjects:");
	scanf("\n%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)*100/500;
	if(per>=60)
	printf("\nThe First division %d percent",per);
	if((per>=50)&&(per<60))
	printf("\nThe Second division of %d percent",per);
	if((per>=40)&&(per<50))
	printf("\nThe Third division of %d percent",per);
	if(per<40)
	printf("\nFail of %d percent",per);
	return 0;
}
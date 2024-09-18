/*Check the division obtained by the student*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("\nEnter the marks obtained in five subjects:");
	scanf("\n%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)*100/500;
	if(per>=60)
	printf("\nThe First division of %d percent",per);
	else
	{
		if(per>=50)
		printf("\nThe Second division of %d percent",per);
		else
		{
			if(per>40)
			printf("\nThe Third division of %d percent",per);
			else
			printf("\nFail of %d percent",per);
		}
	}
	return 0;
}
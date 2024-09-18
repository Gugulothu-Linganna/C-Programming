/*Calculation of aggregate & percentage marks*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,agr;
	float per;
	printf("Enter the marks in 5 subjects :");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	agr=(m1+m2+m3+m4+m5);
	per=(agr/5);
	printf("The aggregate marks in all subjects =%d\nThe percentage of marks in all subject =%f",agr,per);
	return 0;
}
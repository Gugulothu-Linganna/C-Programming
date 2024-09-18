/*FUNCTION THAT RETURNS AVERAGE AND PERCENTAGE*/
#include<stdio.h>
void avgper(float*,float*);
int main()
{
	float avg,per;
	avgper(&avg,&per); 
	printf("average=%f\npercentage=%f",avg,per);
	return 0;         
}
void avgper(float *avg,float *per)
{    
    int m1,m2,m3;
	printf("Enter marks in 3 subject :");
	scanf("%d%d%d",&m1,&m2,&m3);                                         
	*per=*avg=(m1+m2+m3)/3;
	return;                
}
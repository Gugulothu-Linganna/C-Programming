/*Determine the salary of gender with their qualification*/
#include<stdio.h>
int main()
{
	int sal=0,yos;
	char g,qual;
	printf("\nEnter Gender,Years of Service and Qualification(G=0,PG=1):");
	scanf("%c %d %c",&g,&yos,&qual);
	if(g=='M'&&yos>=10&&qual=='P')
	sal=15000;
	else if((g=='M'&&yos>=10&&qual=='G')||(g=='M'&&yos<10&&qual=='P'))
	sal=10000;
	else if(g=='M'&&yos<10&&qual=='G')
	sal=7000;
	else if(g=='F'&&yos>=10&&qual=='P')
	sal=12000;
	else if(g=='F'&&yos>=10&&qual=='G')
	sal=9000;
	else if(g=='F'&&yos<10&&qual=='P')
	sal=10000;
	else if(g=='F'&&yos<10&&qual=='G')
	sal=6000;
	printf("\nSalary of Employee=%d",sal);
	return 0;
}
/*Categorisation of steel grade*/
#include<stdio.h>
int main()
{
	float cc,ts,hd;
	printf("\nEnter the Hardness,Carbon content,Tensile strength:");
	scanf("\n%f%f%f",&hd,&cc,&ts);
	if(hd>50&&cc<0.7&&ts>5600)
	printf("\nSteel Grade is 10");
	else if(hd>50&&cc<0.7)
	printf("\nSteel Grade is 9");
	else if(cc<0.7&&ts>5600)
	printf("\nSteel Grade is 8");
	else if(hd>50&&ts>5600)
	printf("\nSteel Grade is 7");
	else if((hd>50)||(cc<0.7)||(ts>5600))
	printf("\nSteel Grade is 6");
	else
	printf("\nSteel Grade is 5");
	return 0;
}
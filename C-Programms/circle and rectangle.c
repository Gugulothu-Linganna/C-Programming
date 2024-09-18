/*Program to find area and perimeter of rectangle and circle*/
#include<stdio.h>
int main()
{
	int r,l,b,prm;
	float ar,crmf,ac;
	printf("Enter the r,l,b,values:");
	scanf("%d%d%d",&r,&l,&b);
	ar=l*b;
	prm=2*(l+b);
    crmf=2*3.14*r;
	ac=3.14*r*r;
	printf("The area of rectangle=%f\nThe perimeter of rectangle=%d\nThe area of circle=%f\nThe circumference of circle=%f",ar,prm,ac,crmf);
	return 0;	
}
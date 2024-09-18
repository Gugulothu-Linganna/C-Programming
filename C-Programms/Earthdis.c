/*Calculation of Earth dist by lat and long in nautical miles*/
#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,dis;
	printf("\nEnter the l1,l2,g1,g2 values:");
	scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
	l1=l1*(180/3.14);
	l2=l2*(180/3.14);
	g1=g1*(180/3.14);
	g2=g2*(180/3.14);
	dis=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("The distance between two places on the earth(in nautical miles)=%f\n",dis);
	return 0;
}

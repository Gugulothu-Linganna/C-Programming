/*Conversion of distance*/
#include<stdio.h>
int main()
{
	float km,m,cm,ft,inch;
	printf("Enter the distance in kilometers :");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	inch=2.54*cm;
	ft=inch/12;
	printf("The distance in km =%f\nThe distance in m =%f\nThe distance in cm =%f\nThe distance in inch =%f\nThe distance in feet =%f",km,m,cm,inch,ft);
	return 0;
}

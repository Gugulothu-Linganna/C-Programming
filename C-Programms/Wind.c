/*Calculation of wind chill factor*/
#include<stdio.h>
#include<math.h>
int main()
{
	float t,v,a,wcf;
    printf("Enter the temp and velocity values:");
    scanf("%f%f",&t,&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*a;
    a=pow(v,0.16);
    printf("The wind chill factor=%f\n",wcf);
    return 0;
}
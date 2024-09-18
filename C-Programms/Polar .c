/*Conversion of cartesian co-ordinates into polar co-ordinates*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	float r,theta,pi;
	printf("Enter the cartesian co-ordinates of x,y values:");
	scanf("%f%f",&x,&y);
	r=sqrt(x*x+y*y);
	pi=atan(y/x);
	theta=pi*(180/3.14);
	printf("The polar co-ordinates are:\nr=%f\ntheta=%f\n",r,theta);
	return 0;
}

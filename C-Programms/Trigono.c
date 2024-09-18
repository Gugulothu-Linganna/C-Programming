/*Program to print trigonometric ratios*/
#include<stdio.h>
#include<math.h>
int main()
{
	float radian,degree,pi=3.14;
	printf("Enter the value in degree:");
	scanf("%f",&degree);
	radian=degree*(pi/180.0);
	printf("sin(%f)=(%f)\n",degree,sin(radian));
	printf("cos(%f)=(%f)\n",degree,cos(radian));
	printf("tan(%f)=(%f)\n",degree,tan(radian));
	printf("1/sin(%f)=(%f)\n",degree,1/sin(radian));
	printf("1/cos(%f)=(%f)\n",degree,1/cos(radian));
	printf("1/tan(%f)=(%f)\n",degree,1/tan(radian));
	return 0;
}

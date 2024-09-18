/*Check wether the points on ,inside or outside the circle*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	float r;
	printf("Enter the r,x,y values:");
	scanf("%f%d%d",&r,&x,&y);
	if(r==sqrt(x*x+y*y))
	printf("\nThe points are lies on the circle");
	else
	{
	if(r<sqrt(x*x+y*y))
	printf("\nThe points are lies outside the circle");
	else
	printf("\nThe points are lies inside the circles");
    }
	return 0;
}
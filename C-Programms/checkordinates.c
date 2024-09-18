/*Check wether the point lies on the X-axis,Y-axis or on the origin*/
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the x,y values:");
	scanf("%d%d",&x,&y);
	if(x==0)
	{
	if(y==0)
	printf("The Point lies on the origin");
	else
	printf("The point lies on the y-axis");
    }
	else
	{
	if(y==0)
	printf("The point lies on the x-axis");
	else
	printf("The point lies on the x&y-axis");
    }
	return 0;
}

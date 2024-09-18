/*Check all the given points on one straight line*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	float m1,m2;
	printf("Enter the values of points:");
	scanf("%d%d\n%d%d\n%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y2)/(x3-x2);
	if(m1==m2)
	printf("The three points on the same line");
	else
	printf("The three points are not on the same line");
	return 0;
}
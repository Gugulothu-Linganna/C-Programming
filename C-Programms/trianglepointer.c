/*OUTPUT*/
#include<stdio.h>
#include<math.h>
void triarea(int,int,int);
int main()
{
	int a,c,b;
	printf("Enter side lengths of a triangle :");
	scanf("%d%d%d",&a,&b,&c);
	triarea(a,b,c);
	return 0;
}
void triarea(int x,int y,int z)
{
	float area,s=(x+y+z)/2;
	area=sqrt(s*(s-x)*(s-y)*(s-z));
	printf("Area of Triangle=%f",area);
	return;
}
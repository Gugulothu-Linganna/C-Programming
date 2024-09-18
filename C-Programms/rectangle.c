/*Check wether the area of the rectangle is greater than its perimeter*/
#include<stdio.h>
int main()
{
	int l,b;
	float perm,area;
	printf("Enter the length and breadth values:");
	scanf("%d%d",&l,&b);
	area=(l*b);
	perm=(2*(l+b));
	if(area>perm)
	printf("The area of triangle (%f) is greater than its perimeter (%f)",area,perm);
	else
	printf("The area of triangle (%f) is lesser than its perimeter (%f)",area,perm);
	return 0;
}
/*Finding greatest number in given numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\nThe greatest number = %d",a);
	if(b>a&&b>c)
	printf("\nThe greatest number = %d",b);
	if(c>a&&c>b)
	printf("\nThe greatest number = %d",c);
	return 0;
}
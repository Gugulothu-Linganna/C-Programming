/*Arranging of numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(b>c)
		printf("\nAscending order:%d<%d<%d\nDescending order:%d>%d>%d",c,b,a,a,b,c);
		else
		printf("\nAscending order:%d<%d<%d\nDescending order:%d>%d>%d",b,c,a,a,c,b);
	}
	else if(b>c&&b>a)
	{
		if(c>a)
		printf("\nAscending order:%d<%d<%d\nDescending order:%d>%d>%d",a,c,b,b,c,a);
		else
		printf("\nAscending order:%d<%d<%d\nDescending order:%d>%d>%d",c,a,b,b,a,c);
	}
	else 
	{
		if(c>b&&c>a)
		{
	    if(b>a)
	    printf("\nAscending order:%d<%d<%d\nDescending order:%d>%d>%d",a,b,c,c,b,a);
		else
		printf("\nAscending order:%d<%d<%d\nDescending order:%d>%d>%d",b,a,c,c,a,b);
	    }
	}
	return 0;
}
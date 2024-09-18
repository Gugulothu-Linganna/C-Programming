#include<stdio.h>
int main()
{
	int i,h,w,t;
	h=1189;
	w=841;
	for(i=1;i<9;i++)
	{
	printf("\nA%d%d*%d",i,h,w);
	t=h;
	h=w;
	w=t/2;	
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,w,h,t;
	w=841;
	h=1184;
	for(i=0;i<9;i++)
{
	printf("\nA%d%d*%d",i,h,w);
	t=h;
	h=w;
	w=t/2;
}
return 0;
}
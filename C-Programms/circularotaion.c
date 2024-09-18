/*OUTPUT*/
#include<stdio.h>
void rotate(int,int,int);
int main()
{
	int a=5,b=8,c=10;
	printf("a=%d b=%d c=%d\n",a,b,c);
	rotate(a,b,c);
	return 0;
}
void rotate(int x,int y,int z)
{
	int i,t;
	for(i=1;i<=2;i++)
	{
	t=x;
	x=y;
	y=z;	
	z=t;
	printf("a=%d b=%d c=%d\n",x,y,z);
    }
}
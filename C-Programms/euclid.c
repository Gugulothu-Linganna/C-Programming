/*Greatest common* divisor given by Euclid algorithm*/
#include<stdio.h>
#include<math.h>
void euclid(int,int);
int main()
{
	int i,j;
	printf("Enter two numbers i,j (i>j) :");
	scanf("%d%d",&i,&j);
	euclid(i,j);
	return 0;
}
void euclid(int i,int j)
{
	int t;
	while(j!=0)
	{
		t=j;
		j=i%j;
		i=t;
	}
	  printf("Greatest Common Divisor is %d",i);
}
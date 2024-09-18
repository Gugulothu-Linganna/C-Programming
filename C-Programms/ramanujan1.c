/*Ramanujan numbers*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x,y,j;
	n=100000;
	for(i=1;i<=n;i++)
	{
		j=0;
		for(x=1;x*x*x<i;x++)
	  {
		for(y=x;x*x*x+y*y*y<=i;y++)
		{
			if(x*x*x+y*y*y==i)
			{
				j++;
			}
		}
	}
	if(j==2)
	{
		printf("%d\n",i);
	}
   }
   return 0;
}

/*#include<stdio.h>
int main()
{
	int t,i,a,b,j,n;
	printf("Enter value of t :");
	scanf("%d",&t);
	for(i=1;i<=n;i++)
	{
		for(a=1;a<=i;a++)
		{
			for(b=1;b<=a;a++)
			{
				for(j=1;j<=b;j++)
				{
					if(a*a*a+b*b*b==n&&i*i*i+j*j*j==n)
					printf("\n");
				}
			}
		}
	}
	return 0;
}*/
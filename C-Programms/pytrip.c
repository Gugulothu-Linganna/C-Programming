/*output*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	for(a=1;a<=30;a++)
	{
		for(b=1;b<=30;b++)
		{
			for(c=1;c<=30;c++)
			{
				if(a<b&&c*c==a*a+b*b)
				printf("%d*%d+%d*%d=%d*%d\n",a,a,b,b,c,c);
			}
		}
	}
	return 0;
}
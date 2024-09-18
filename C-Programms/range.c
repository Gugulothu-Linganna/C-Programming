#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,small,big;
	while(1)
	{
		printf("\nEnter no. of elements in set :");
		scanf("%d",&l);
		printf("Enter %d elements in a set :",l);
		scanf("%d",&n);
		small=big=n;
		l=l-1;
		while(l)
		{
			scanf("%d",&n);
			if(n>big)
			{
				big=n;
			}
			if(n<small)
			{
				small=n;
			}
			l--;
		}
		printf("Smallest number = %d\nBiggest number = %d\nRange = %d",small,big,abs(big-small));
	}
	return 0;
}
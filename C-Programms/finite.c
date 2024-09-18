/*output*/
#include<stdio.h>
int main()
{
	int n;
	char another;
	do
	{
		printf("Enter a number :");
		scanf("%d",&n);
		printf("square of %d is %d\n",n,n*n);
		printf("Want to enter another number y to continue or any to stop:");
		fflush(stdin);
		scanf("%c",&another);
	}while(another=='y');
	return 0;
}
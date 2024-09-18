/*OUTPUT*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,choice,n,fact;
	while(1)
	{
		printf("\n\n*********WELCOME************\n\n\n1.Factorial\n2.Prime number\n3.Odd/Even number\n4.Exit\n");
		printf("\n******************ENTER YOUR CHOICE **********************\nMY CHOICE IS   :");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter a number	:");
				scanf("%d",&n);
				fact=1;
				for(i=1;i<=n;i++)
				{
					fact=fact*i;
				}
				printf("Factorial value=%d\n\n							******END******\n\n",fact);
				break;
				case 2:
					printf("Enter a number  :");
					scanf("%d",&n);
					for(i=2;i<n;i++)
					{
						if(n%i==0)
						{
							printf("Not a Prime number\n\n				******END*****\n\n");
						break;
						}
					}
					if(i==n)
					printf("A Prime number\n\n							******END*******\n\n");
					break;
					case 3:
						printf("Enter a number	:");
						scanf("%d",&n);
						if(n%2==0)
						printf("Even number\n\n							*****END*****\n\n");
						else
						printf("Odd number\n\n							******END*******\n\n");
						break;
						case 4:
							exit(0);
							default:
								printf("**WRONG CHOICE**\n\n				******END******\n\n");
		}
	}
		return 0;
}
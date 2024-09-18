/*OUTPUT*/
#include<stdio.h>
int main()
{
	int temp;
	printf("Enter  tempurature\n");
	scanf("%d",&temp);
	switch(temp)
	{
		case (temp<=20):
			printf("Oooooooohhhhh!Damn coool\n");
			case(temp>20&&temp<=30):
				printf("Rain rain here again\n");
				case(temp>30&&temp<=40):
					printf("Wish I am on Everest\n");
					default:
						printf("Gold old nagpur weather\n");
						
	}
	return 0;
}
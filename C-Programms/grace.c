/*OUTPUT*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int class,subfail;
	while(1)
	{
		printf("\nEnter class obtained by student(1,2 or 3) :");
		scanf("%d",&class);
		switch (class)
		{
			case 1:
				printf("Enter the number of subject student failed :");
				scanf("%d",&subfail);
				if(subfail>3)
				printf("student does not get any grace\n");
				else
				printf("the grace is of 5 marks per subject\n");
				break;
				case 2:
					printf("Enter the number of subject student failed :");
					scanf("%d",&subfail);
					if(subfail>2)
					printf("student does not get any grace\n");
					else
					printf("the grace is of 4 marks per subject\n");
					break;
					case 3:
						printf("Enter the number of subject student failed :");
						scanf("%d",&subfail);
						if(subfail>1)
						printf("student does not get any grace\n");
						else
						printf("the grace is of 5 marks per subject\n");
						break;
						default:
							printf("\n\nINVALID CLASS\n");
							exit(0);
		}
	}
	return 0;
}
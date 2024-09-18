/*output*/
#include<stdio.h>
int main()
{
	int ms=21,uc,cc;
	printf("\n\n\n******************WELCOME*****************\n\n");
	while(ms>1)
	{
		printf("Total matchsticks:%d\n",ms);
		printf("\n\nPickup the matchstick from 1 to 4:");
		scanf("%d",&uc);
		if(uc>4)
		{
			printf("INVALID PICKUP\n");
			break;
		}
		cc=5-uc;
		printf("Computer pickups %d matchsticks\n",cc);
		ms=ms-uc-cc;
		if(ms==1)
		{
		printf("YOU LOST THE GAME WITH COMPUTER\n");
    	}
		}
	return 0;
}

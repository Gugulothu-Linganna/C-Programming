/*output*/
#include<stdio.h>
int main()
{
	int ms=21,uc,cc;
	printf("\n\n\n******************WELCOME*****************\n\n");
	while(ms>1)
	{
		printf("\nTotal matchsticks:%d",ms);
		printf("\nPickup the matchstick from 1 to 4:");
		scanf("%d",&uc);
		if(uc>4)
		{
			printf("INVALID PICKUP\n");
		}
		else
		{
			if(ms>=5)
			{
		cc=5-uc;
		printf("Computer pickups %d matchsticks\n",cc);
	    }    
		ms=ms-uc-cc;
		if(ms==1)
		{
		printf("YOU LOST THE GAME WITH COMPUTER\n");
    	}
        }
		}
	return 0;
}

/*TIME print*/
#include<stdio.h>
int main()
{
	int h;
	for(h=0;h<=23;h++)
	{
		if(h==0)
		{
			printf("12 AM MIDNIGHT\n");
			continue;
		}
		if(h<12)
		{
			if(h>=1&&h<3)
			printf("%d AM NIGHT\n",h);
			if(h>=3&&h<12)
			printf("%d AM MORNING\n",h);
		}
		if(h==12)
		{
			printf("%d PM NOON\n",h);
		}
		if(h>12)
		{
			if(h%12>=1&&h%12<3)
			printf("%d PM NOON\n",h%12);
			if(h%12>=3&&h%12<=8)
			printf("%d PM EVENING\n",h%12);
			if(h%12>=9&&h%12<=11)
			printf("%d PM NIGHT\n",h%12);
		}
	}
	return 0;
}
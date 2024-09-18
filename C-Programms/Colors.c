/*Convertion of RGB colours into CMYK colours*/
#include<stdio.h>
int main()
{
	float r,g,b,rf,gf,bf,max,cyan,magenta,yellow,black,white;
	printf("\nEnter the values of red,green,blue range(0-255):");
	scanf("%f%f%f",&r,&g,&b);
	if(r==0&&g==0&&b==0)
	{
		cyan=magenta=yellow=0;
		black=1;
	}
	else
	{
		rf=r/255;
		gf=g/255;
		bf=b/255;
		printf("Red : %f\ngreen : %f\nblue : %f",rf,gf,bf);
		max=rf;
		if(gf>max)
		max=gf;
		if(bf>max)
		max=bf;
		white=max;
		cyan=(white-rf)/white;
		magenta=(white-gf)/white;
		yellow=(white-bf)/white;
		black=1-white;
		printf("\nThe colours are cyan=%f\nmagenta=%f\nyellow=%f\nblack=%f\nwhite=%f",cyan,magenta,yellow,black,white);
	}
	return 0;
}

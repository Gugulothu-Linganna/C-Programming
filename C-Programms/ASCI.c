/*Print ASCII character*/
#include<stdio.h>
int main()
{
	int i=0;
	while(i<=255)
{
	printf("The ASCII value of character %c=%d\n",i,i);
	i++;                                            
}
return 0;
}
/*Check type of character entered from the keyboard*/
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter character from keyboard:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("\nThe character is an uppercase letter");
	if(ch>=97&&ch<=122)
	printf("\nThe character is a lowercase letter");
	if(ch>=48&&ch<=57)
	printf("\nThe character is a digit");
	if((ch>=0&&ch<48)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
	printf("\nThe character is a special symbol");
	return 0;
}

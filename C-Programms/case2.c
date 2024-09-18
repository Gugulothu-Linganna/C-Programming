/*OUTPUT*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any int of the alphabets a,b,c ");
	scanf("%c",&ch);
	switch(ch)
		{
			case 'a':
				case 'A':
					printf("a as in ashar\n");
					break;
					case 'b':
						case 'B':
							printf("b as in brain\n");
							break;
							case 'c':
								case 'C':
									printf("c as in cookie\n");
									break;
									default:
										printf("wish you knew what are alphabets\n");
		}
		return 0;
}
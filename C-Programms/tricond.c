/* condition for Formation of triangle with its side */
#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the sidelengths of triangle:");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(((s2+s3)>=s1)&&((s1+s2)>=s3)&&((s1+s3)>=s2))
    printf("\nThe triangle is valid triangle");
    else
    printf("\nThe triangle is invalid triangle");
    return 0;
}
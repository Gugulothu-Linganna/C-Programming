/*Determine the younger of three members*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int r,s,a;
	printf("Enter the ages of three members(Ram Shyam Ajay):");
	scanf("\n%d%d%d",&r,&s,&a);
	if(r<s)
	{
		if(r<a)
	    printf("\nRam is younger");
	    else
	    printf("\nAjay is younger");
	}
	else
	{
	    if(s<a)
	    printf("\nShyam is younger");
	    else
	    printf("\nAjay is younger");

    }
	return 0;
}
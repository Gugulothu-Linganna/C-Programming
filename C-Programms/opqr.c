#include<stdio.h>
#include<math.h>
int main()
{
float a,ci,si,t,p,r;
printf("enter the values of principle, time and rate:\n");
scanf("%f%f%f",&p,&t,&r);
a=p*(pow((1+r/100),t));
ci=a-p;
printf("compound interest is %f\n",ci);
return 0;
}

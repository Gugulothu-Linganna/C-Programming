#include<stdio.h>
#include<math.h>
int main()
{
float a,ci,si,t;int p,r;
printf("enter the values of principle, time and rate:\n");
scanf("%d%f%d",&p,&t,&r);
si=p*t*r/100;
printf("simple interest is %f\n",si); 
a=p*(pow((1+r/100),t));
ci=a-p;
printf("compound interest is %f\n",ci);
return 0;
}

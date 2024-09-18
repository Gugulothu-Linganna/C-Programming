#include<stdio.h>
#include<math.h>
int main()
{
float a,ci,si,t,p,n,r;
printf("enter the values of principle, time, rate and number of times:\n");
scanf("%f%f%f%f",&p,&t,&r,&n);
si=p*t*r/100;
//printf("simple interest is %f\n",si); 
a=pow((1+r/100*n),t*n);
ci=a*p-p;
printf("compound interest is %f\n",ci);
return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,s;
    float p;
    char name[100];
    printf("enter the name of the student\n");
    scanf("%s",&name);
    printf("enter the marks of the students in Bee\n");
    scanf("%d",&a);
 printf("enter the marks of the students in chemistry\n");
    scanf("%d",&b);
   printf("enter the marks of the students in ED\n");
    scanf("%d",&c); 
printf("enter the marks of the students in english\n");
    scanf("%d",&d);
  printf("enter the marks of the students in maths\n");
   scanf("%d",&e);
 printf("enter the marks of the students in cp\n");
    scanf("%d",&f); 
s=a+b+c+d+e+f;
p=((s/600)*(100));
if(p>90&&p<=100)
{
    printf("name: %s\n",name);
    printf("grade: A+");
}
else if( 80<p&&p<=90)
{
    printf("Name: %s\n",name);
    printf;("Grade: A");
}

else if(70<p&&p<=80)
{
    printf("Name: %s\n",name);
    printf("Grade: B+");
}
else if(60<p&&p<=70)
{
    printf("Name: %s\n",name);
    printf("Grade: B");
}
else if(50<p&&p<=60)
{
    printf("Name: %s\n",name);
    printf("Grade: C+");
}
/* else
{
    printf("Name: %s\n",name);
    printf("Grade: C");
}*/
return 0;
}
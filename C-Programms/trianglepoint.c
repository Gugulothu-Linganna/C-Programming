/*TRIANGLE AND PROPERTIES*/
#include<stdio.h>
#include<math.h>
void res(float x1,float y1,float x2,float y2,float x3,float y3,float x,float y,float *area,int *flag);
float distance(float x1,float y1,float x2,float y2);
float cal_area(float a,float b,float c);
int position(float area,float A,float B,float C);
int main()
{
	float x1,x2,x3,y1,y2,y3,x,y;
	float area=0;
	int flag=0;
	printf("Enter the values (x1,y1),(x2,y2),(x3,y3),(x,y) :");
	scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x,&y);
	res(x1,y1,x2,y2,x3,y3,x,y,&area,&flag);
	printf("\n Area of triangle=%f\n",area);
    if(flag==1)
    printf("\nPoint(%f,%f) lies inside the triangle.",x,y);
    else
    printf("\nPoint(%f,%f) lies outside the triangle.",x,y);
    return 0;
}
void res(float x1,float y1,float x2,float y2,float x3,float y3,float x,float y,float *area,int *flag)
{
	float a,b,c,d,e,f,A,B,C;
	a=distance(x1,y1,x2,y2);
	b=distance(x2,y2,x3,y3);
	c=distance(x3,y3,x1,y1);
	*area=cal_area(a,b,c);
	d=distance(x1,y1,x,y);
	e=distance(x2,y2,x,y);
	f=distance(x3,y3,x,y);
	A=cal_area(d,e,a);
	B=cal_area(e,b,f);
	C=cal_area(f,c,d);
	*flag=position(*area,A,B,C);
}
float distance(float x1,float y1,float x2,float y2)
{
	return (sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
}
float cal_area(float a,float b,float c)
{
	float ar,s=(a+b+c)/2.0;
	ar=(sqrt(s*(s-a)*(s-b)*(s-c)));
	return (ar);
}
int position(float area,float A,float B,float C)
{
	float res=area-(A+B+C);
	if(res==0||res<0.00001)
	{
	return 1;
    }
	else
	{
	return 0;
    }
}
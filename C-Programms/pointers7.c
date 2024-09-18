/*OUTPUT*/
#include<stdio.h>
#include<math.h>
void sumavgsd(int*,float*,float*);
int main()
{
	int sum;
	float avg,stdev;
	sumavgsd(&sum,&avg,&stdev);
	printf("sum=%d  average=%f standard deviation=%f",sum,avg,stdev);
	return 0;
}
void sumavgsd(int *sum,float *avg,float *stdev)
{
	int a,b,c,d,e;
	printf("Enter 5 numbers :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	*sum=(a+b+c+d+e);
	*avg=*sum/5;
	*stdev=sqrt((pow((a-*avg),2.0)+pow((b-*avg),2.0)+pow((c-*avg),2.0)+pow((d-*avg),2.0)+pow((e-*avg),2.0))/5);
}
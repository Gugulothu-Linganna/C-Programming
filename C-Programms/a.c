#include<stdio.h>
#include<math.h>

int main()
{
	while(1)
	{
	float t1,t3,t2,r1=0.333,r2=0.2298,r3=0.2988;
	float nm,n1,n2,n3,vo1,vo2,vo3,vb1,vb2,vb,vb3,rc=1.735,hc=30.0,dm=7800.0,df=1260.0,r,g=9.8;
	printf("\nEnter values of time(t1,t2,t3) :");
	scanf(" %f %f %f",&t1,&t2,&t3);
	vo1=(hc)/t1;printf("\nvo1  %f",vo1);
	vo2=(hc)/t2;printf("\nvo2  %f",vo2);
	vo3=(hc)/t3;printf("\nvo3  %f",vo3);
	vb1=((vo1)*(1+((2.4)*(r1/rc)))*(1+((3.3)*(r1/hc))));printf("\nvb1  %f",vb1);
	vb2=((vo2)*(1+((2.4)*(r2/rc)))*(1+((3.3)*(r2/hc))));printf("\nvb2  %f",vb2);
	vb3=((vo3)*(1+((2.4)*(r3/rc)))*(1+((3.3)*(r3/hc))));printf("\nvb3  %f",vb3);
	vb=((vb2+vb1+vb3)/300);printf("\nvb  %f",vb);
	r1=((r1/100)*(r1/100));printf("\nr1 %f",r1);
	r2=((r2/100)*(r2/100));printf("\nr2 %f",r2);
	r3=((r3/100)*(r3/100));printf("\nr3 %f",r3);
	r=((r1+r2+r3)/3);printf("\nr %f",r);
	nm=((2.0/9.0)*(dm-df)*g*(r/vb));
	//printf("\nn1 %f",n);
    //n2=((2.0/9.0)*(dm-df)*g*(r2/vb2));printf("\nn2 %f",nt2);
	//n3=((2.0/9.0)*(dm-df)*g*(r3/vb3));printf("\nn3 %f",n3);
	//nm=((n1+n2+n3)/(3.0));
	printf("\nviscosity=%f",nm);
    }
	return 0;
}
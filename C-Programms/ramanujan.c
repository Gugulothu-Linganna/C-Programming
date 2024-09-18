/*Ramanujan numbers*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,l,n;
	for(n=1;n<100000;n++)
	{
		for(i=1;i<n;i++)
		{
			if(n<i*i*i)
			break;
			for(j=i+1;j<n;j++)
			{
				if(n<j*j*j)
				break;
				for(k=i+1;k<n;k++)
				{
					if(k*k*k>i*i*i+j*j*j)
					break;
					for(l=k+1;l<n;l++)
					{
						if(n<k*k*k+l*l*l)
						break;
						if((n==i*i*i+j*j*j)&&(n==k*k*k+l*l*l))
						{
							printf("%d^3+%d^3  =  %d^3+%d^3  =  %d\n",i,j,k,l,n);
						}
					}
				}
			}
		}
	}
	return 0;
}

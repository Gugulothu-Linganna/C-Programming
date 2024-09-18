/*#include <stdio.h>
int main()
{
    char op;
    printf("enter any of the operations (+,-,*,/)");
    scanf(" %c",&op);
    float a,b;
    printf("enter the values of a and b");
    scanf(" %f %f",&a,&b);
    switch (op)
    {
    	case '+':
    		a+=b;
    		printf("Sum = %f",a);
    		break;
    	case '-':	
    		a-=b;
    		printf("Sub = %f",a);
    		break;
    	case '*':
    		a*=b;
    		printf("Mul = %f",a);
			break;
		case '/':
    		a/=b;
    		printf("Div = %f",a);	
			break;	
	}
    return 0;
}*/
#include<stdio.h>
int main()
{
	int i,n,a,b;
	scanf("%d",&n);
	b=1;
	for(i=n;i>=1;i--)
	{
		a=i*b;
		b=a;
		
	}
	printf("%d",b);
	return 0;
}

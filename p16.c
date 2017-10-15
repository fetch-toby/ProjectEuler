//Power digit sum of 2^15
#include <stdio.h>
#include <math.h>

void main()
{
	int i;
	long int p1,sum=0, temp=0, r, s=0;
	double p;
	p=pow(2.0f,15.0f);
	p1=p;
	printf("%ld\n",p1);
	temp=p1;
	while(temp!=0)
	{
		r=temp%10;
		s=s+r;
		temp/=10;	
	}
	printf("Sum of power of digits of 2^100 is %ld:",s);
}


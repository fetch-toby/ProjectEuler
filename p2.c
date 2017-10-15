//Sum of even-valued terms in Fibonacii sequence upto 4 million 
#include <stdio.h>

void main()
{
	int i=0, f0=0, f1=1, sum=0;
	long int S=0;
	while(i<=3999997)
	{
		sum=f0+f1;
		if(sum%2==0)
			S+=sum;	
		f0=f1;
		f1=sum;
		i++;
	}
	printf("Sum of even-valued terms in Fibonacii sequence upto 4 million is: %ld",S);
}

//Fibonacii series 
#include <stdio.h>

void main()
{
	int i=0, f0=0, f1=1, sum=0;
	printf("%d \t %d \t",f0, f1);
	while(i<=15)
	{
		sum=f0+f1;
		printf("%d \t", sum);
		f0=f1;
		f1=sum;
		i++;
	}
}

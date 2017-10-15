//Difference between sum of squares of first 100 natural numbers
#include <stdio.h>

void main()
{
	long int i, sq, ss=0;
	long int sum=0, sqr;
	long int diff;
	for(i=1;i<=100;i++)
	{
		sq=i*i;
		ss=ss+sq;
	}
	printf("%ld \t",ss);
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	sqr=sum*sum;
	printf("%ld \t",sqr);
	diff=sqr-ss;
	printf("\nDifference between sum of squares of first 100 natural numbers is: %ld",diff);
}

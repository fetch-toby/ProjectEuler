//Sum of multiples of 3 and 5 below 1000
#include <stdio.h>

void main()
{
	int i, sum=0;
	for(i=1;i<1000;i++)
	{
		if((i%3==0) || (i%5==0))
		sum+=i;
		
	}
	printf("\n Sum of multiples of 3 and 5 below 1000 is: %d \n",sum);
}

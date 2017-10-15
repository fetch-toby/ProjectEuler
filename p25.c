//Index of the first term in Fibonacii series with 1000 digit
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i=0, f0=0, f1=1, sum=0;
	printf("0\t %d \n",f0);
	printf("1\t %d \n",f1);
	int fno=2;
	while(i<=100) // Repeat until approximate iteration
	{
		sum=f0+f1;
		printf("%d \t %d \n",fno, sum);
		f0=f1;
		f1=sum;
		i++;
		fno++;
		if(sum>1000) // Break after sum exceeds 1000 digit
		{
			printf("-----\n");
			exit(0);
		}
	}
}

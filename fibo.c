#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int main()
{
	int n;

	n = 0;
	printf("Enter the place number in Fibonnaci sequence : \n");
	scanf("%d",&n);
	if (n > 0)
	{
	n = fibo(n);
	printf("\n%d\n",n);
	}
	else
	{
		printf("Wrong format ! Please enter a positive number\n");
	}	
	return 0;
}

int fibo(int n)
{
	int sequence[3] = {0,1,1};
	int i;
		
	i = 2;
	if (n > 1)
	{		
		while (n > 1)
		{
			sequence[i] = sequence[i-1]	+ sequence [i-2];
			sequence[i-2] = sequence[i-1];	
			sequence[i-1] = sequence[i];	
			n --;
		}	
	}	
	else
	{
		if (n == 0)
		{
			i = 0;
		}		
	}
	n = sequence[i];
	return n;	
}


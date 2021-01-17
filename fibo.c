#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int fibo(int n);

void tests()
{
	assert(fibo(0) == 0);
	assert(fibo(1) == 1);
	assert(fibo(5) == 5);
	assert(fibo(8) == 21);
	assert(fibo(21) == 10946);
}

int main(int argc, char **argv)
{
	(void)argc; 
	int n;

	if (argv[1] != NULL)
	{		
		n = atoi(argv[1]);	
		n = fibo(n);
		printf("\n%d\n",n);
	}
	else
	{
		exit (0);
	}
	tests();
	return 0;
}

int fibo(int n)
{
	int sequence[3] = {0,1,1};
	int i;
		
	i = 2;
	if (n == 0)
	{
		i = 0;
	}
	else if	(n == 1)
	{
		i = 1;
	}		
	else if (n > 1)
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
		exit(0);
	}		
	n = sequence[i];
	return n;	
}


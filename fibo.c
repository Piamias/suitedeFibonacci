#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int main(int argc, char **argv)
{
	(void)argc; 
	int n;
	
	if (argv[1] != NULL)
	{		
		n = atoi(argv[1]);
		if (n > 0)
		{		
		n = fibo(n);
		printf("\n%d\n",n);
		}
		else if(n == 0)
		{
			printf("\n%d\n" ,n);	
		}	
		else	
		{
			printf("Wrong format ! Please enter a positive number\n");
		}
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
	n = sequence[i];
	return n;	
}


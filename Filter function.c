#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int filter(int *a,int size,int (*method)(int))
{
	int i;

	for (i = 0; i < size; ++i)
	{
		if (method(*(a+i)))
		{
			printf("%d\n", *(a+i));
		}
	}
	
	printf("\n");

	return 0;
}

int even(int a)
{
	return !(a%2);//eu sou trouxa,a luana também
}
int odd(int a)
{
	return a%2;
}

int prime(int a)
{
	int i,prime=1;

	if (a == 0 || a == 1)
	{
		prime = 0;	
	}

	for (i = 2; i <= sqrt(a); ++i)
	{
		if ((a%i)==0)
		{
			prime = 0;
		}
	}
	return prime;
}

int main()
{
	int i = 0;
	int *a = malloc(sizeof(int));

	while(scanf("%d", &a[i]))
	{
		if (a[i] == -1)
		{
			break;
		}
		
		i++;
		a = realloc(a, i*8);		
	}

	filter(a,i,even);
	filter(a,i,odd);
	filter(a,i,prime);

	return 0;
}

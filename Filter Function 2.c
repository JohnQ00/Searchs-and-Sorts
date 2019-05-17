#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int filter(int (*number), int size, int (*method)(int))
{
	int i;
	for (i = 0; i < size; ++i)
	{
		if(method(*(number+i)))
		{
			printf("%d\n", *(number+i));
		}
	}
	printf("Passando...\n");
	return 0;
}

int even(int number){return !(number%2);}
int odd(int number){return (number%2);}
int prime(int number)
{
	int i;
	if(number == 0 || number == 1){return 0;}
	else
	{
		for (i = 2; i <= sqrt(number); ++i)
		{
			if((number%i) == 0){return 0;}
		}
	}
	return 1;
}

int main()
{
	int number[200];
	int i = 0;

	while(scanf("%d", &number[i]))
	{
		if (number[i] == -1){break;}
		i++;
	}

	filter(number,i,even);
	filter(number,i,odd);
	filter(number,i,prime);

	return 0;
}

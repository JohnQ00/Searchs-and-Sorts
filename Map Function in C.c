
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void map(int (*arr), int size,  int (*method)(int))
{
	int i;
	for (i = 0; i < size; ++i)
	{
		printf("%d \n", method(*arr + i));
	}
  
}

int square(int number){return number*number;}
int factorial(int number)
{
	if(number >= 1){return number*(factorial(number-1));}
	else return 1;
}

int main()
{
	int array[2000],i;
	int size;
	printf("Pick your size: \n");
	scanf("%d", &size);
  printf("Type your numbers: \n");
	for (i = 0; i < size; ++i){scanf("%d", &array[i]);}

	map(array,size, square);
  printf("Passando...\n");
	map(array,size, factorial);
	
	return 0;
}

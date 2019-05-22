#include <stdio.h>
#include <stdlib.h>

int binary_search(int number, int size, int *arr)
{
	int begin = 0;
	int end = size - 1;
	int middle;
	int times = 1;
	while(begin <= end)
	{
		middle = (begin + end)/2;
		if (arr[middle] < number){times++; begin = middle + 1;}
		else if(arr[middle] > number){times++; end = middle - 1;}
		else{printf("Numero de repeticoes: %d\n", times++); return middle;}
	}
	return -1;
}

int main()
{
	int arr[200];
	int i, number,si;
	printf("Coloca o array ai, mano:\n");
	scanf("%d", &si);
	for(i = 0; i<si; i++){scanf("%d", &arr[i]);}
	printf("Coloca o numero que tu quer achar, mano:\n");
	scanf("%d", &number);
	printf("Numero encontrado: %d ", arr[binary_search(number,i,arr)]);

	return 0;
}

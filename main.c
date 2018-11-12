#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

int max_elem(int *arr, const int K){ 
	int max; int i;
	for(i = 0; i < K; ++i)
	if(arr[i] > max)
	max = arr[i];
	return max;
}

int min_elem(int *arr, const int K){ 
	int min; int i;
	for(i = 0; i < K; ++i)
	if(arr[i] < min)
	min = arr[i];
	return min;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	const int K = 10;
	int arr[K];
	int i;
	
	printf("Исходный массив: ");
	for(i = 0; i < K; ++i){
		arr[i] = rand() % K;
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for(i = 0; i < K; ++i){
		if(arr[i] == max_elem(arr, K)) arr[i] = 0;
		if(arr[i] == min_elem(arr, K)) arr[i] = 0;
	}
	
	printf("Модифицированный массив: ");
	for(i = 0; i < K; ++i)
		printf("%d ", arr[i]);
}

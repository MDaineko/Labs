#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	const int K = 10;
	int arr[K];
	int i;
	
	int max_elem(int *arr, const int K){ 
	int max; 
	int i;
	for(i = 0; i < 10; ++i)
	if(arr[i] > max)
	max = arr[i];
	return max;
	printf("max element is %d", max);
	getch();
}
	int min_elem(int *arr, const int K){ 
	int min; 
	int i;
	for(i = 0; i < 10; ++i)
	if(arr[i] < min)
	min = arr[i];
	return min;
	printf("min element is %d", min);
	getch();
}


}

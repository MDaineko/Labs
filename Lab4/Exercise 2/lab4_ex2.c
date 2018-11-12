#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const n = 10;
	int a[n];
	unsigned i, k;
	int sum1, sum2;
	
	setlocale(LC_ALL, "Russian");
	printf("Введите количество элементов ");
	scanf("%d", &k);
	sum1 = 0;
	for(i=0; i<k; i++){
		sum1 = sum1 + a[n];		
	}
	sum2 = 0;
	for(i=0; i<k+1; i++){
		sum2 = sum2 + a[n];
		if (sum1 > sum2)
		printf("sum1 > sum2\n");
		else if (sum1 < sum2)
		printf("sum1 < sum2\n");		
	}
	return 0;	
}

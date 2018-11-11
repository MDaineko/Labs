#include <conio.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int n = 20;
	unsigned i, j;
	int max, min, imax, imin;
	
	max = a[0];
	for (i=1; i<n; i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("max element is %d", max);
	getch();
	
	min = a[0];
	for (i=1; i>n; i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	printf("\nmin element is %d", min);
	getch();

}

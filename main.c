#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("Enter the initial number of inhabitants: ");
	int n, i;
	scanf("%d", &n);
	int r = 3 * n;
	for(i = 1; i < r; ++i)
		n += 1/n; 
	printf("Number of residents will tripple after %d\n", i);
	return 0;
}

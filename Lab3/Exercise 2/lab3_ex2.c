#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {  
    int a; 
    float x; 
    printf("a? "); 
    scanf("%d", &a); 
    x = (double)a * a + 1; 
    while (x <= 1000000) x = x * x + 1; 
    printf("x: %.0f\n", x); 
    return 0; 
}

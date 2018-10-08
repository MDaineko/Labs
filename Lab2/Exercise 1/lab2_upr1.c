#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	printf("Введите стороны:");
	scanf("%f%f%f",&a,&b,&c);
	(a==b && b==c && c==a)? printf("Треугольник равносторонний"):printf("Треугольник неравносторонний");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b , c;
	printf("������� ����� a:");
	scanf("%f",&a);
	printf("������� ����� b:");
	scanf("%f",&b);
	printf("������� ����� c:");
	scanf("%f",&c); 
    if (b - a == c - b) printf("�������� �������������� �����������");
	else printf("�� �������� �������������� �����������");
	return 0;	
}

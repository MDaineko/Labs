#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Russian");
	
	float x, s;
	int a = 128;
	
	printf("������� ���������� x>0:");
	scanf("%f",&x);
	
	s = a*x*x;
	
	printf("�� ����� x:%0.3f,\n���������:%0.3f",x,s);
	return 0;
}

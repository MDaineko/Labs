#include <stdio.h>
#include <stdlib.h>
#include <math.h>		// ���������� �������������� �������
#include <locale.h>		// ���������� ���������� ����������� (��� �������� ����� � �������)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Russian");		// ������������� ������� ������ � ���������
	
	float x, y, z, a, b, c, s;			// ����������� ����������� ����������
	
	printf("������� ���������� x<0:");
	scanf("%f",&x);
	
	printf("������� ���������� y>0:");
	scanf("%f",&y);
	
	printf("������� ���������� z>0:");
	scanf("%f",&z);
	
	a = exp(fabs(x-y))*pow(fabs(x-y),x+y);
	
	b = atan(x)+atan(z);
	
	c = pow(pow(x,6)+pow(log(y),2),1/3.); 
	
	s = a/b+c;		//������������ ���������
	
	printf("�� ����� x:%.5f , y:%f, z:%f \n���������: %.4f",x,y,z,s);		//����� ���������� �� �����
	
	return 0;
}

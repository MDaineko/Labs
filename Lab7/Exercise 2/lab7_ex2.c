#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int search(char *A)
	{	
	int i, num;
	char s;
	printf("������� ������� ������: \n", s);
	scanf("%c", &s);
	i = 0;
	num = 0;
	while( *(A+i)!= '\0')
    {
	if (*(A+i)==s)
	num++;
	i++;
   }
	return num;	
	}
	int main()
	{
	setlocale(LC_ALL, "Russian");
	char *A; 
	int k;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	A = (char*)malloc(100*sizeof(char));
	printf("������� ������: ");
	gets(A); 
	printf("�������� ������: %s \n", A);
	k = search(A);
	printf ("���������� ��������� � ������ = %d", k);
	getch();
	}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>		// подключаем математические функции
#include <locale.h>		// подключаем библиотеку локализации (для русского языка в консоли)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	setlocale(LC_ALL,"Russian");		// устанавливаем русскую локаль в программе
	
	float x, s;							// декларируем необходимые переменные
	int a = 128;
	
	printf("Введите переменную x:");
	scanf("%f",&x);
	
	s = a*x*x;							//рассчитываем результат

	printf("Вы ввели x:%0.3f,\nРезультат:%0.3f",x,s);	//вывод результата на экран
	return 0;
}

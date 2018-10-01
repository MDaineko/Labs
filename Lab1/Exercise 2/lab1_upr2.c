#include <stdio.h>
#include <stdlib.h>
#include <math.h>		// подключаем математические функции
#include <locale.h>		// подключаем библиотеку локализации (для русского языка в консоли)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Russian");		// устанавливаем русскую локаль в программе
	
	float x, y, z, a, b, c, s;			// декларируем необходимые переменные
	
	printf("Введите переменную x<0:");
	scanf("%f",&x);
	
	printf("Введите переменную y>0:");
	scanf("%f",&y);
	
	printf("Введите переменную z>0:");
	scanf("%f",&z);
	
	a = exp(fabs(x-y))*pow(fabs(x-y),x+y);
	
	b = atan(x)+atan(z);
	
	c = pow(pow(x,6)+pow(log(y),2),1/3.); 
	
	s = a/b+c;		//рассчитываем результат
	
	printf("Вы ввели x:%.5f , y:%f, z:%f \nРезультат: %.4f",x,y,z,s);		//вывод результата на экран
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "windows.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct avia
	{
	int number;
    char destination[20];
    int time;
    char departure_date[15];
    int value;	
	};
	int main() 
	{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, j, n, menu, k, x, number1, time1, value1, z=0, y, r, s;
	char destination1[20];
	char departure_date1[15];
	struct avia m[20], t;
	printf("Введите количество рейсов: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
	printf("Рейс №%d\n", i+1);
    puts("Введите номер рейса: ");
    scanf("%d", &m[i].number);
	puts("Введите пункт назначения: ");
	fflush(stdin);
	gets(m[i].destination);
	puts("Введите время вылета: ");
    scanf("%d", &m[i].time);
	puts("Введите дату вылета: ");
	fflush(stdin);
	gets(m[i].departure_date);
	puts("Введите стоимость билета: ");
    scanf("%d", &m[i].value);
	}
	printf("\n\n");
	while(1)
	{
	printf("\nВыберите операцию, которую вы хотите сделать: "); 
	printf("\nСортировка-1 ");
	printf("\nПоиск рейса по заданному критерию-2 ");
	printf("\nИзменение данных-3 ");
	printf("\nУдаление рейса из системы-4 ");
	printf("\nСписок рейсов-5 ");
	printf("\nВыход-6 \n");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
		{ 	
		printf("\nВыберите критерий, по которому хотите совершить сортировку:\n");
			printf("1-По номеру рейса\n");
			printf("2-По пункту назначения\n");
			printf("3-По времени вылета\n");
			printf("4-По дате вылета\n");
			printf("5-По стоимости билета\n");
			printf("0-Выход из поиска по критерию\n");
			printf("Выберите критерий");
			scanf("%d", &x);
			switch(x){
				case 0:break;
				case 1:{
						
					for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (m[i].number>m[j].number){  
							    t = m[i]; 
							    m[i] = m[j]; 
							    m[j] = t; 
			   } 
			   for(i=0; i<n; i++)
			   {
				printf("\n\n");
				printf("Рейс №%d\n", i+1);
				printf("Пункт назначения: %s ", m[i].destination);
				printf("Дата вылета: %s ", m[i].departure_date);
				printf("Номер рейса: %d ", m[i].number);
				printf("Время вылета: %d ", m[i].time);
				printf("Стоимость билета:%d ",m[i].value);
				}
			break;
			}
			case 2:{
					for (i=0; i<n-1; i++)
			   for (j=i+1; j<n; j++)    
			   if (strcmp(m[i].destination, m[j].destination)>0)    
			   {  
			      t = m[i]; 
			      m[i] = m[j]; 
			      m[j] = t; 
			   } 
			   for(i=0; i<n; i++)
			   {
			   	printf("\n\n");
				printf("Рейс №%d\n", i+1);
				printf("Пункт назначения: %s ", m[i].destination);
				printf("Дата вылета: %s ", m[i].departure_date);
				printf("Номер рейса: %d ", m[i].number);
				printf("Время вылета: %d ", m[i].time);
				printf("Стоимость билета:%d ",m[i].value);
			   }
			   
			break;
			}
			case 3:{
					for (i=0; i<n-1; i++)
			   for (j=i+1; j<n; j++)    
			   if (m[i].time>m[j].time)    
			   {  
			      t = m[i]; 
			      m[i] = m[j]; 
			      m[j] = t; 
			   } 
			   for(i=0; i<n; i++)
			   {
				printf("\n\n");
				printf("Рейс №%d\n", i+1);
				printf("Пункт назначения: %s ", m[i].destination);
				printf("Дата вылета: %s ", m[i].departure_date);
				printf("Номер рейса: %d ", m[i].number);
				printf("Время вылета: %d ", m[i].time);
				printf("Стоимость билета:%d ",m[i].value);
			   }
			break;
			}
			case 4:{
					for (i=0; i<n-1; i++)
			   for (j=i+1; j<n; j++)    
			   if (strcmp(m[i].departure_date, m[j].departure_date)>0)  
			   {  
			      t = m[i]; 
			      m[i] = m[j]; 
			      m[j] = t; 
			   } 
			   for(i=0; i<n; i++)
			   {
				printf("\n\n");
				printf("Рейс №%d\n", i+1);
				printf("Пункт назначения: %s ", m[i].destination);
				printf("Дата вылета: %s ", m[i].departure_date);
				printf("Номер рейса: %d ", m[i].number);
				printf("Время вылета: %d ", m[i].time);
				printf("Стоимость билета:%d ",m[i].value);
			   }
			break;
			}
			case 5:{
					for (i=0; i<n-1; i++)
			   for (j=i+1; j<n; j++)    
			   if (m[i].value>m[j].value)    
			   {  
			      t = m[i]; 
			      m[i] = m[j]; 
			      m[j] = t; 
			   } 
			   for(i=0; i<n; i++)
			   {
				printf("\n\n");
				printf("Рейс №%d\n", i+1);
				printf("Пункт назначения: %s ", m[i].destination);
				printf("Дата вылета: %s ", m[i].departure_date);
				printf("Номер рейса: %d ", m[i].number);
				printf("Время вылета: %d ", m[i].time);
				printf("Стоимость билета:%d ",m[i].value);
			   }
			break;
			}
	
	    	} 
		break;
	   }
		case 2:
		{
			while(1)
			{
			printf("\nВыберите критерий, по которому хотите начать поиск: \n");
			printf("1-По номеру рейса\n");
			printf("2-По пункту назначения\n");
			printf("3-По времени вылета\n");
			printf("4-По дате вылета\n");
			printf("5-По стоимости билета\n");
			printf("0-Выход из поиска по критерию\n");
			printf("Выберите критерий");
			scanf("%d", &x);
			switch(x)
			{
				case 0:break;
				case 1:
				{
					z = 0;
					printf("Введите номер рейса: ");
					fflush(stdin);
					scanf("%d", &number1);
					for(i=0; i<n; i++)
					{
						if(number1==m[i].number)
						{
							printf("\n\n");
							printf("Рейс №%d\n", i+1);
							printf("Пункт назначения: %s ", m[i].destination);
							printf("Дата вылета: %s ", m[i].departure_date);
							printf("Номер рейса: %d ", m[i].number);
							printf("Время вылета: %d ", m[i].time);
							printf("Стоимость билета:%d ", m[i].value);
				            z++;
						}						
					}
					if(z==0)
					printf("Ничего не найдено!\n");
					break;
				}
				case 2:
				{
					 z = 0;
                     printf("Введите пункт назначения: ");
					 fflush(stdin);
					 gets(destination1);
					 for(i=0; i<n; i++)
					 {
						if(strcmp(destination1, m[i].destination)==0)
						{
							printf("Рейс №%d\n", i+1);
							printf("Пункт назначения: %s ", m[i].destination);
							printf("Дата вылета: %s ", m[i].departure_date);
							printf("Номер рейса: %d ", m[i].number);
							printf("Время вылета: %d ", m[i].time);
							printf("Стоимость билета:%d ", m[i].value);
				            z++;
						}						
					}
					if(z==0)
					printf("Ничего не найдено!\n");					
					break;
				}
				case 3:
				{
					z = 0;
					printf("Введите время вылета: ");
					fflush(stdin);
					scanf("%d", &time1);
					for(i=0; i<n; i++)
					{
						if(time1==m[i].time)
						{
							printf("Рейс №%d\n", i+1);
							printf("Пункт назначения: %s", m[i].destination);
							printf("Дата вылета: %s", m[i].departure_date);
							printf("Номер рейса: %d", m[i].number);
							printf("Время вылета: %d", m[i].time);
							printf("Стоимость билета: %d", m[i].value);
				            z++;
						}						
					}
					if(z==0)
					printf("Ничего не найдено!\n");
					break;
				}
				case 4:
				{
					 z = 0;
					 printf("Введите дату вылета: ");
					 fflush(stdin);
					 gets(departure_date1);
				 	 for(i=0; i<n; i++)
					{
						if(strcmp(departure_date1, m[i].departure_date)==0)
						{
							printf("Рейс №%d\n", i+1);
							printf("Пункт назначения: %s", m[i].destination);
							printf("Дата вылета: %s", m[i].departure_date);
							printf("Номер рейса: %d", m[i].number);
							printf("Время вылета: %d", m[i].time);
							printf("Стоимость билета: %d", m[i].value);
				            z++;
						}						
					}
					if(z==0)
					printf("Ничего не найдено!\n");
					break;
				}
                case 5:
				{
					 z=0;
					 printf("Введите стоимость билета: ");
					 scanf("%d", &value1);
					 for(i=0; i<n; i++)
					{
						if(value1==m[i].value)
						{
							printf("Рейс №%d\n", i+1);
							printf("Пункт назначения: %s", m[i].destination);
							printf("Дата вылета: %s", m[i].departure_date);
							printf("Номер рейса: %d", m[i].number);
							printf("Время вылета: %d", m[i].time);
							printf("Стоимость билета: %d", m[i].value);
				            z++;
						}						
					}
					if(z==0)
					printf("Ничего не найдено!\n");
					break;
			    }
			}
		    if(x==0)
		    break;
			continue;
		    }
			break;
		}
		case 3:
		{
			while(1)
			{
			  printf("\nВведите номер рейса, данные которого хотите изменить: ");
			  scanf("%d", &r);
			  printf("\nВведите критерий \n1-Номер рейса \n2-Пункт назначения \n3-время вылета \n4-дата вылета \n5-стоимость билета \n0-Выход \n");
			  scanf("%d", &y);
		  	  switch(y)
			{
				case 0:break;
				case 1:{
					printf("Введите новый номер рейса: ");
					scanf("%d", &number1);
					m[r-1].number = number1;
					break;
				}
				case 2:
				{
					printf("Введите новый пункт назначения: ");
					fflush(stdin);
					gets(destination1);
					strcpy(m[r-1].destination, destination1);
					break;
				}
				case 3:
				{
					printf("Введите новое время вылета: ");
					scanf("%d", &time1);
					m[r-1].time = time1;
					break;
				}
				case 4:
				{
					printf("Введите новую дату вылета: ");
					fflush(stdin);
					gets(departure_date1);
					strcpy(m[r-1].departure_date, departure_date1);
					break;
				}
				case 5:
				{
					printf("Введите новую стоимость билета: ");
					scanf("%d", &value1);
					m[r-1].value = value1;
					break;
				}
			}
			if(y==0)
		    break;
			continue;
		    }
			break;
		}
		case 4:
		{
			printf("Введите номер рейса, который хотите удалить из списка: ");
			scanf("%d", &s);
			s--;
				printf("\n\n");
				printf("Рейс №%d удалён\n", s+1);
				printf("Пункт назначения: %s", m[i].destination);
				printf("Дата вылета: %s", m[i].departure_date);
				printf("Номер рейса: %d", m[i].number);
				printf("Время вылета: %d", m[i].time);
				printf("Стоимость билета %d\n\n: ", m[i].value);
				for(s; s<=n; s++)
			{
				strcpy(m[s].destination, m[s+1].destination);
				strcpy(m[s].departure_date, m[s+1].departure_date);
				m[s].number = m[s+1].number;
				m[s].value = m[s+1].value;
				m[s].time = m[s+1].time;
			}
			n--;
			break;
		}break;
		case 5:
		{
			for(i=0; i<n; i++)
			{
				printf("\n\n");
				printf("Пункт назначения: %s", m[i].destination);
				printf("Дата вылета: %s", m[i].departure_date);
				printf("Номер рейса: %d", m[i].number);
				printf("Время вылета: %d", m[i].time);
				printf("Стоимость билета %d\n\n: ", m[i].value);
			}
			break;
	    }
	    case 6:exit(1);
	}
	continue;
}
	return 0;
}

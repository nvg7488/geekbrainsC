//	Говорухин Николай, homework 2

#include <stdio.h>
#include <stdlib.h>
	int min, max, kol, size, k2 [32];
	int Menu(){ int lvl;
		printf("\n");
		printf(" 1: Перевод 10-значной системы в двоичную;\n");
		printf(" 2: Возведение числа а в степень b;\n");
		printf(" 3: Калькулятор;\n");
		printf(" 0 - ВЫХОД.\n");
		printf("\t>>>: ");
		scanf("%d", &lvl);
	return lvl;}
	int menu(){int lvl;
		printf("   1: из файла;\n");
		printf("   2: случайными числами;\n");
		printf("   3: с клавиатуры;\n");
		printf("\t>>>: ");
		scanf("%d", &lvl);
	return lvl;}
	
	void homework_21(long, unsigned);
	int homework_22a(int, int);
	int homework_22b(int, int);
	void homework_23(int, int);
	
int main(){
	int homework;
	do { homework = Menu();
		switch (homework){
			case 1: homework_21(804289383, 32); break;
			case 2:	//	Возведение числа а в степень b
				{	int a, b, rez = 1;
					a = rand() % 16; b = rand() % 9; printf ("\t%i^%i = ", a, b);
					for (int i = 0; i < b; i++)	//	без рекурсии
						rez *= a;
						printf ("%i\n", rez);
					a = rand() % 16; b = rand() % 9; printf ("\t%i^%i = ", a, b);
					rez = a * homework_22a(a, (b - 1));			//	рекурсивно
						printf ("%i\n", rez);
					a = rand() % 16; b = rand() % 9; printf ("\t%i^%i = ", a, b);
					rez = homework_22b(a, b);					//	рекурсивно, используя свойство чётности степени
						printf ("%i\n", rez);
				} break;
			case 3: /*
				Исполнитель Калькулятор преобразует целое число, записанное на экране.
				У исполнителя две команды, каждой команде присвоен номер:
					1. Прибавь 1
					2. Умножь вдвое
				Первая команда увеличивает число на экране на 1, вторая увеличивает это число вдвое. Сколько
				существует программ, которые преобразует число 3 в 20?
					а) с использованием массива;
					б) с использованием рекурсии.
				Реализовать меню с выбором способа заполнения массива: из файла, случайными числами, клавиатурой.	*/
				
				{	int i, calc = menu();
					switch (calc){
						case 3:	printf ("\tmin: "); scanf ("%d", &min);
								printf ("\tmax: "); scanf ("%d", &max);
							break;
						case 1:	{	FILE *f = fopen ("min_max", "r");
								if (f != NULL) {
									fscanf (f, "%d %d", &min, &max);
								fclose (f);}
							} break;
					default: min = rand() % 16; max = rand() % 144;
						printf ("\trandom: %i to %i\n", min, max);	};
					
					size = max - min; int arr [size]; kol = i = 0;
					do {
						if (arr [i] == 1) min++;
							else min *= 2;
						if (min < max) i++;
						else {if (min == max) kol++;
							else {if (arr [i] == 2)
								min /= 2; else min--;
								arr [i]--;
								if (!arr [i]){arr [i] = 2; i--;}}}
					} while (i < size);
					
					kol = 0; homework_23(1, 2);
				}	break;
			case 0: printf ("\nГоворухин Николай, homework 2"); break;
		default:  printf ("\nНеправильный выбор.\n");}
	}	while (homework != 0);
return 0;}

	void homework_21(long num, unsigned d){	
//		Реализовать функцию перевода из 10 системы в двоичную используя рекурсию.
		if (! d) return;
		else {
			if(num & 0x80000000) printf("1");
				else printf("0");
		}
	};
	int homework_22a(int a, int b){
		if (b == 1) return a;
		else return (a * homework_22a(a, (b - 1)));
	};
	int homework_22b(int a, int b){ int s;
		if (b == 1) return a;
		else {if (b % 2)
					{b--; s = homework_22b(a, b); s *= a;}
			else	{b /= 2; s = homework_22b(a, b); s *= s;}
	return s;}};
	void homework_23(int step, int function){
		if (function == 2) min *= 2;
			else min++;
		if (min < max) {step++; homework_23(step, 2);}
		else {if (min == max) kol++;
			else {if (function == 2)
				min /= 2; else min--;
				function--;
				if (step < size){
					if (function == 0) function = 2;
					homework_23(step, function);}}}
	};

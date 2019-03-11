#include <stdio.h>
#include <math.h>
#include <stdlib.h>	// генератор случайного числа 

	int size, bin [100] = {0};
	struct XYcolor {
		int X, Y, color; }; 
	int MAX (int x, int y) {
		if (x > y)
				return x;
		else	return y;
	};	//	MAX

int Menu(){ int result;
	printf (" 1: Индекс массы тела;\n");
	printf (" 2: Максимально из 4-х чисел;\n");
	printf (" 3: Обмен значений между целочисленными переменными;\n");
	printf (" 4: Корни квадратного уравнения;\n");
	printf (" 5: Месяца относительно сезонов;\n");
	printf (" 6: Возраст (год, года, лет);\n");
	printf (" 7: Цвета полей шахматной доски;\n"); 
	printf (" 8: Степеня 2 и 3 чисел a и b;\n");
	printf (" 9: Частное от деления на цело и остаток от деления;\n");
	printf ("10: Имеются ли нечётные числа;\n");
	printf ("11: Среднее арифметическое кратных 8-ми;\n");
	printf ("12: Максимально из 3-х чисел;\n");
	printf ("13: Генерация случайного числа;\n");
	printf ("14: Автоморфные числа;\n"); 
	printf ("0 - ВЫХОД.\t>>> ");
	scanf ("%i", &result);
return result;};	//	menu
	
	void homework_101(); void homework_102();
	void homework_103(); void homework_104();
	void homework_105(); void homework_106();
	void homework_107(); void homework_108();
	void homework_109(); void homework_110();
	void homework_111(); void homework_112();
	void homework_113(); void homework_114(); 
	
int main(){
	int sel;
	do	{	sel = Menu();
		switch (sel){
			case  1: homework_101(); break;
			case  2: homework_102(); break;
			case  3: homework_103(); break;
			case  4: homework_104(); break;
			case  5: homework_105(); break;
			case  6: homework_106(); break;
			case  7: homework_107(); break;
			case  8: homework_108(); break;
			case  9: homework_109(); break;
			case 10: homework_110(); break;
			case 11: homework_111(); break;
			case 12: homework_112(); break;
			case 13: homework_113(); break;
			case 14: homework_114(); break; 
			case 0: printf("\nНиколай Говорухин, homework 1"); break;
		default: printf ("Неправильный выбор.");};
	} while (sel != 0);
return 0;}

	void homework_101() {	/*	
		Ввести вес m в кг и рост h в метрах человека. Расчитать и вывести
		индекс массы тела по формуле I=m/(h*h).	*/
			int m; float h;
		printf ("\n\tВведите массу тела: ");	scanf ("%i", &m);
		do	{
			printf ("\n\tВведите рост: ");
			scanf ("%f", &h);
			if (h == 0.0) printf ("\tРост должен быть > 0.");
		} while (h == 0);
		printf ("\tИндекс массы тела: %f\n\n", m/(h*h));
	};		//	homework 01
	void homework_102() {	//	Найти максимальное из 4-х чисел.
			int x1, x2, x3, x4;
			printf ("\n");
		printf ("\tx1 = ");	scanf ("%i", &x1);
		printf ("\tx2 = ");	scanf ("%i", &x2);
		printf ("\tx3 = ");	scanf ("%i", &x3);
		printf ("\tx4 = ");	scanf ("%i", &x4);
		printf ("\tMAX: %i\n\n", MAX (MAX (x1, x2), MAX (x3, x4)));
	};		//	homework 02
	void homework_103() {	/*
			Написать программу обмена значениями двух целочисленных переменных
				с использованием третьей переменной
			*	без использования третьей переменной	*/
			int x, y, z;
			printf ("\n");
		printf ("   x: ");
		scanf ("%i", &x);
		printf ("   y: ");
		scanf ("%i", &y);

		z = x; x = y; y = z;
		printf ("   x = %i; y = %i\n", x, y);

		x += y; y = x - y; x -= y;
		printf (" * x = %i; y = %i\n\n", x, y);
    };		//	homework 03
	void homework_104() {	//	Написать программу нахождения корней заданного квадратного уравнения.
			int a, b, c, d;
		do	{
			printf ("\n\ta = ");
			scanf ("%d", &a);
			if (a == 0) printf ("\ta должен быть > 0.");
		} while (a == 0);
		printf("\tb = "); scanf("%d", &b);
		printf("\tc = "); scanf("%d", &c);
		if (b == 0)
			{if (c == 0) { printf("\tX: 0\n\n");
			} else if (c > 0) { printf("\tX: %f\n\n", -sqrt(c/a));
			} else {
				printf("\tx1: %f\n", -sqrt(c/a));
				printf("\tx2: %f\n",  sqrt(c/a));
				printf("\n");
		}} else { if (c == 0) { printf("\tX: %d\n\n", -(b/a));
			} else { d = (b * b) - (4 - a - c);
				if (d < 0) { printf("\tуравнение не имеет решения\n\n");
				} else if (d == 0) { printf("\tX: %d\n\n", -(b/(2*a)));
				} else {
					printf("\tx1: %f\n", -((b-sqrt(d))/(2*a)));
					printf("\tx2: %f\n",  ((b-sqrt(d))/(2*a)));
					printf("\n");
				}}}
	}	//	homework 04
	void homework_105() {	/*
			С клавиатуры вводится номер месяца. Требуется определить,
		к какому времени года он относится.	*/
			int mes;
			printf("\n");
		printf("\tВедите месяц (1 - 12): "); scanf("%d", &mes);
		if ((mes < 3) || (mes == 12)) 
			{ printf("\tЗима\n\n");	}
		else if (mes < 6)
			{ printf("\tВесна\n\n"); }
		else if (mes < 9)
			{ printf("\tЛето\n\n"); }
		else
			{ printf("\tОсень\n\n"); }
	};		//	homework 05
	void homework_106() {	/*
			Ввести возраст человека и вывести его вместе с последующим
		словом "год", "года", "лет".	*/
			int year;
			printf("\n");
		printf("\tВедите возраст: "); scanf("%d", &year);
		printf("\tВы ввели %i", year);
		if ((year % 10) == 0)
			{ printf(" лет.\n\n"); }
		else if ((year % 10) == 1)
			{ printf(" год.\n\n"); }
		else if ((year % 10) < 5)
			{ printf(" года.\n\n"); }
		else
			{ printf(" лет.\n\n"); }
	};		//	homework 06
	void homework_107() {	/*
			С клавиатуры ввести числовые координаты двух полей шахматной доски
		(х1,у1; х2,у2). Требуется определить, относятся ли поля к одному цвету	*/
			struct XYcolor figure [2];
			printf("\n");
		printf("\tВедите X, Y: "); scanf("%d %d", &figure [0].X, &figure [0].Y);
		printf("\tВедите X, Y: "); scanf("%d %d", &figure [1].X, &figure [1].Y);
		for (int f = 0; f < 2; f++){
			figure [f].X %= 2; figure [f].Y %= 2;
			if (figure [f].X == 0)
					figure [f].color = 1;
			else	figure [f].color = 0;
			if (figure [f].X != 0){
				if (figure [f].color == 0)
						figure [f].color = 1;
				else	figure [f].color = 0;
		}	}
		if (figure [0].color == figure [1].color)
				printf("\tОдинакового.\n\n");
		else	printf("\tРазного.\n\n");
	};		//	homework 07
	void homework_108() { // Вывести a и b и вывести квадраты и кубы чисел от a и b.
			int i, a, b;
			printf("\n");
		printf("\ta = "); scanf("%d", &a);
		printf("\tb = "); scanf("%d", &b);
		for (i = a; i <= b; i++) {
			printf("\t%3i", i);
			printf("%5i", i*i);
			printf("%7i\n", i*i*i);
		}
	printf("\n");	};		//	homework 08
	void homework_109() {	/*
			Даны целые положительные числа N и M. Используя только операции
		сложения и вычитания, найти частное от деления нацело N на M, а
		так же остаток от этого деления.	*/
			int N, M, rez = 0;
			printf ("\n");
		printf("\tВедите N, M: "); scanf("%d %d", &N, &M);
		while (N >= M){
			N -= M; rez++; }
		printf("\tДеление нацело: %i\n\tОстаток от деления: %i\n\n", rez, N);
	};		//	homework 09
	void homework_110() {	/*
			Дано целое число N (> 0). С помощью операции деления нацело и
		взятия остатка от деления определить, имеются ли в записи числа N
		нечётные цифры. Если имеются, то вывести True, если нет - False.*/
			int n, N, bln = 0;
			printf ("\n");
		printf("\tВедите число: "); scanf("%d", &N);
		do	{
			n = N % 10;
			N -= n;
			N /= 10;
			n %= 2;
			if (n != 0) bln++;
		} while (N > 0)	;
		if (bln) printf("\tTrue\n\n");
			else printf("\tFalse\n\n");
	};		//	homework 10: Имеются ли нечётные числа 
	void homework_111() {	/*
			С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать
		среднее арифметическое всех положительных чисел, оканчивающихся "8".*/
			int N, x, sum, kol;
			sum = kol = 0;
			printf ("\n");
		do	{
			printf("\tВведите число: "); scanf("%d", &N);
			x = N % 10;
			if (x == 8)
				{ sum += N; kol++; }
		} while (N > 0);
		if (kol > 0) N = sum / kol; else N = 0;
		do	{
			N = rand() % 256;
			x = N % 10;
			if (x == 8)
				{ sum += N; kol++; }
		} while (N > 0);
		if (kol > 0) sum /= kol; else sum = 0;
		printf("\tВведённое: %i\n\tRND: %i\n\n", N, sum);
	};		//	homework 11: Среднее арифметическое кратных 8-ми
	void homework_112() {	//	Написать функцию нахождения максимального из трёх чисел.
			int k [3];
			printf ("\n");
		printf ("\tЧисло 1 = ");	scanf ("%i", &k[1]);
		printf ("\tЧисло 2 = ");	scanf ("%i", &k[2]);
		printf ("\tЧисло 3 = ");	scanf ("%i", &k[3]);
		for (int i = 1; i < 3; i++)
			if (k[0] < k[i])
				k[0] = k[i];
		printf ("\tMAX: %i\n\n", k[0]);
	};		//	homework 12
	void homework_113() {	/*
			Написать функцию, генерирующую случайное число от 1 до 100 с
		использованием стандартной функции rand() и без неё.	*/
		printf ("\n");
		int rnd;
		
		int x = 1, a = 2, b = 3, max, modulus;
		max = modulus = 100;
		for (int i = 0; i < modulus; i++){
			rnd = rand() % 100; rnd++;
			x = (a * x + b) % max;
		printf ("\t%3i: \tRand: %i;\tnot Rand: %i\n", i, rnd, x);}
		printf ("\n");
	};		//	homework 13: Генерация случайного числа
	void homework_114() {	/*
			Натуральное число называется автоморфным, если оно равно последним
		цифрам своего квадрата. Например, 25 ^ 2 = 625. Напишите программу,
		которая вводит натуральное число N и выводит на экран все автоморфные
		числа, не превосходящие N.	*/
			int max, N;
		printf ("\n");
		printf("\tВедите число: "); scanf("%d", &max);
		for (int n = 1; n <= max; n++){
			N = n * n;
			N = N % 10;
			if (n == N)
				printf("\t%i:\t%i\n", n, N);
		}
		printf("\n");
	};		//	homework 14: Автоморфные числа

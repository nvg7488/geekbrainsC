#include <stdio.h>
//			Говорухин Николай
	int Menu(){ int lvl;
		printf("\n");
		printf(" 2: Нахождение длины максимальной последовательности с помощью матрицы;\n");
		printf(" 0 - ВЫХОД.\n");
		printf("\t>>>: ");
		scanf("%d", &lvl);
	return lvl;}
	void homework_32(void);
	
int main() {
	int homework;
	do { homework = Menu();
		switch (homework){
			case 2: homework_32(); break;
			case 0: printf ("\nГоворухин Николай, homework 4"); break;
		default:  printf ("\nНеправильный выбор.\n");}
	}	while (homework != 0);
return 0;}

	void homework_32(void) {	int i = 0;
		char A[] = "string";
		char B[] = "char";
		while (A[i] != '\0' && B[i] != '\0') { i++; }
		printf("максимальная общая длинна: %i", i);
	}

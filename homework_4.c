#include <stdio.h>
//			Говорухин Николай
	int kol = 0,
		matrix[3][3] = {{1, 1, 1}, {0, 1, 0}, {0, 1, 0}},
		chessboard[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0},
							{0, 0, 0, 0, 0, 0, 0, 0}};
	int Menu(){ int lvl;
		printf("\n");
		printf(" 1: Чтение массива с препятствием и нахождение количество маршрутов;\n");
		printf(" 2: Нахождение длины максимальной последовательности с помощью матрицы;\n");
		printf(" 3: Ход конём;\n");
		printf(" 0 - ВЫХОД.\n");
		printf("\t>>>: ");
		scanf("%d", &lvl);
	return lvl;}
	void homework_31(int, int);
	void homework_32(void);
	void homework_33(int, int, int);
	
int main() {
	int homework;
	do { homework = Menu();
		switch (homework){
			case 1: homework_31(0, 0); break;
			case 2: homework_32(); break;
			case 3:
				for (int x = 0; x < 4; x++)
					for (int y = 0; y < 4; y++)
						homework_33(x, y, 1);
				printf("\n%i\n", kol);
				break;
			case 0: printf ("\nГоворухин Николай, homework 4"); break;
		default:  printf ("\nНеправильный выбор.\n");}
	}	while (homework != 0);
return 0;}

	void homework_31(int x, int y) {
		if ((x == 2) && (y == 2)) kol++;
		else {
			if ((x < 2) && (matrix[x + 1][y] == 1)) homework_31(x + 1, y);
			if ((y < 2) && (matrix[x][y + 1] == 1)) homework_31(x, y + 1);
		}
	}

	void homework_32(void) {
		int i = 0;
		char A[] = "string";
		char B[] = "char";
		while (A[i] != '\0' && B[i] != '\0') { i++; }
		printf("максимальная общая длинна: %i", i);
	}

	void homework_33(int x, int y, int z) {
		chessboard[x][y] = z;
		if ((x > 0) && (y > 1) && (chessboard[x - 1][y - 2] == 0)) { kol++; homework_33(x - 1, y - 2, z + 1); }   //   1
		if ((x < 7) && (y > 1) && (chessboard[x + 1][y - 2] == 0)) { kol++; homework_33(x + 1, y - 2, z + 1); }   //   2
		if ((x < 7) && (y > 0) && (chessboard[x + 2][y - 1] == 0)) { kol++; homework_33(x + 2, y - 1, z + 1); }   //   3
		if ((x < 7) && (y < 7) && (chessboard[x + 2][y + 1] == 0)) { kol++; homework_33(x + 2, y + 1, z + 1); }   //   4
//		if ((x) && (y) && (chessboard[x][y] == 0)) { kol++; homework_33(x, y, z + 1); }   //   5
//		if ((x) && (y) && (chessboard[x][y] == 0)) { kol++; homework_33(x, y, z + 1); }   //   6
//		if ((x) && (y) && (chessboard[x][y] == 0)) { kol++; homework_33(x, y, z + 1); }   //   7
//		if ((x) && (y) && (chessboard[x][y] == 0)) { kol++; homework_33(x, y, z + 1); }   //   8
//		&& (z == 64)
		chessboard[x][y] = 0;
	}

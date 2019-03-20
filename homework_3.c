//	Говорухин Николай, homework 3
#include <stdio.h>
	void bubble(unsigned * arr, const unsigned num);
	int find_recurse(unsigned * arr, const unsigned from, const unsigned to, const unsigned vlm);
int main() { unsigned N = 10, arr [N], x = 13;
	arr[0] = 1; arr[1] = 4; arr[2] = 7; arr[3] = 0; arr[4] = 2;
	arr[5] = 5; arr[6] = 8; arr[7] = 3; arr[8] = 6; arr[9] = 9;
		bubble (arr, N);
	for (unsigned v = 0; v < N; v++)
		printf ("\n%2u = %u", v+1, arr [v]);
	printf("\n");
	int ind = find_recurse (arr, 0, N-1, x);
	if (ind == -1)
				printf("\n\tзначение %u не найдено", x);
		else	printf("\n\tзначение %u найдено в ячейке %u", x, ind);
printf ("\nГоворухин Николай, homework 3"); return 0;}
	void bubble(unsigned * arr, const unsigned num){
		unsigned temp;
		for (unsigned v = 0; v < num; v++)
			for (unsigned u = 0; u < num-1; u++)
				if (arr [u] > arr [u+1]){
					temp = arr [u];
					arr [u] = arr [u+1];
					arr [u+1] = temp;
				}
	}	//	bubble (arr, num)
	int find_recurse(unsigned * arr, const unsigned from, const unsigned to, const unsigned vlm)	{
		if (to - from == 1) {
			if (arr [from] == vlm)
				return from;
			if (arr [to] == vlm)
				return to;
			return -1;
		}
		const unsigned middle = (from + to) / 2;
		if (arr [middle] == vlm)
			return middle;
		if (arr [middle] < vlm)
			return find_recurse (arr, from, middle, vlm);
		return find_recurse (arr, middle, to, vlm);
	}	//	find_recurse (arr, from, to, volume)

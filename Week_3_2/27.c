#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	srand(time(NULL));
	int x,y;
	printf("정수x 입력하세요: ");
	scanf_s("%d", &x);
	printf("정수y를 입력하세요: ");
	scanf_s("%d", &y);
	int** arr = (int**)malloc(sizeof(int*) * x);
	for (int i = 0; i < x; i++)
		arr[i] = (int*)malloc(sizeof(int) * y);
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			arr[i][j] = (rand() % 100) + 1;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

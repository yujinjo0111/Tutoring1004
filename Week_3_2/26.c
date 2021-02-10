#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() { //malloc이 void반환형이라서?
	srand(time(NULL));
	int n;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &n);
	int** arr = (int**)malloc(sizeof(int*) * n); //여기서부터
	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * n);//여기까지가 2차원 배열 동적할당임
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = (rand() % 100) + 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

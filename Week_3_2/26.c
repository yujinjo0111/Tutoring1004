#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	srand(time(NULL)); //난수초기화 재실행시 같은거안나오게
	 //random 0~n
	int size = 0;
	
	printf("n의 크기를 입력하세요: ");
	scanf_s("%d", &size);
	int** arr = (int**)malloc(sizeof(int*) * size);//malloc은 void반환형 int* 형변환
	int i = 0;
	int j = 0;

	arr[i][j] = (rand() % 100) + 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf("%d", arr[i][j]);
		printf("\n");
	}
	printf("\n");


	free(arr);

}
